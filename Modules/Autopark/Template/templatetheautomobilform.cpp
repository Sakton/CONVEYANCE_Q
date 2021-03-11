#include "templatetheautomobilform.h"

#include <QComboBox>
#include <QDateEdit>
#include <QDebug>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QRegularExpression>
#include <QSqlError>
#include <QSqlQuery>

#include "../AutoBrand/theautobrandform.h"
#include "Utility/AllConstants.h"
#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_templatetheautomobilform.h"

const QStringList TemplateTheAutomobilForm::ecoClasses = { QLatin1String( "Euro-4" ), QLatin1String( "Euro-5" ),
                                                           QLatin1String( "Euro-6" ) };
const QStringList TemplateTheAutomobilForm::volumeNotation = { QLatin1String( "m3" ), QLatin1String( "l3" ) };

TemplateTheAutomobilForm::TemplateTheAutomobilForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TemplateTheAutomobilForm ) {
  ui->setupUi(this);
  ui->comboBoxSeries->setEnabled( false );
  ui->comboBoxModel->setEnabled( false );
  ui->comboBoxEcoClass->addItems( ecoClasses );
  ui->comboBoxNotation->addItems( volumeNotation );
  ui->spinBoxCountDays->setToolTip( tr( "Remind Before" ) );
  ui->dateEditNextTechInspection->setDate( QDate::currentDate( ).addYears( 1 ) );
  ui->labelDayBefore->setText( QString::number( QDate::currentDate( ).daysTo( QDate::currentDate( ).addYears( 1 ) ) ) );
  slotReadBrand( );
  connect( ui->pushButtonAddAuto, QOverload< bool >::of( &QPushButton::clicked ), this,
           QOverload<>::of( &TemplateTheAutomobilForm::slotCallAutobrandForm ) );
  connect( ui->comboBoxNameAuto, QOverload< int >::of( &QComboBox::currentIndexChanged ), this,
           QOverload< int >::of( &TemplateTheAutomobilForm::slotReadSeries ) );
  connect( ui->comboBoxSeries, QOverload< int >::of( &QComboBox::currentIndexChanged ), this,
           QOverload< int >::of( &TemplateTheAutomobilForm::slotReadModel ) );
  connect( ui->dateEditNextTechInspection, QOverload< QDate >::of( &QDateEdit::dateChanged ), this,
           QOverload< QDate >::of( &TemplateTheAutomobilForm::slotDateChanged ) );
  connect( ui->lineEditVIN, QOverload< const QString & >::of( &QLineEdit::textChanged ), this,
           QOverload< const QString & >::of( &TemplateTheAutomobilForm::slotVinValidate ) );
  connect( ui->lineEditVIN, QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateTheAutomobilForm::slotVinValidate ) );
}

TemplateTheAutomobilForm::~TemplateTheAutomobilForm()
{
  delete ui;
}

void TemplateTheAutomobilForm::setData( const TemplateTheAutomobilForm::AutoMap &map ) {
  ui->comboBoxNameAuto->setCurrentText( map.at( "name_brand" ) );
  ui->comboBoxSeries->setCurrentText( map.at( "series_brand" ) );
  ui->comboBoxModel->setCurrentText( map.at( "marka_brand" ) );
  ui->dateEditYearOfIssue->setDate( QDate::fromString( map.at( "issue" ), Qt::ISODate ) );
  ui->lineEditVIN->setText( map.at( "vin" ) );
  ui->comboBoxEcoClass->setCurrentText( map.at( "eco" ) );
  ui->dateEditNextTechInspection->setDate( QDate::fromString( map.at( "inspection" ), Qt::ISODate ) );
  ui->checkBoxReminder->setCheckState( static_cast< Qt::CheckState >( map.at( "reminder" ).toInt( ) ) );
  ui->spinBoxCountDays->setValue( map.at( "days_reminder" ).toInt( ) );
}

void TemplateTheAutomobilForm::slotClick_OK_Button( ) {
  AutoMap autoData;
  autoData[ "name_brand" ] = ui->comboBoxNameAuto->currentText( );
  autoData[ "series_brand" ] = ui->comboBoxSeries->currentText( );
  autoData[ "marka_brand" ] = ui->comboBoxModel->currentText( );
  autoData[ "issue" ] = ui->dateEditYearOfIssue->date( ).toString( Qt::ISODate );
  autoData[ "vin" ] = ui->lineEditVIN->text( ).toUpper( );
  autoData[ "eco" ] = ui->comboBoxEcoClass->currentText( );
  autoData[ "inspection" ] = ui->dateEditNextTechInspection->date( ).toString( Qt::ISODate );
  autoData[ "reminder" ] = QString::number( ui->checkBoxReminder->checkState( ) );
  // TODO days_before - это глупость хранить количество дней в базе, это вычисляемое
  // ИСПРАВИТЬ
  autoData[ "days_before" ] = QString::number( QDate::currentDate( ).daysTo( ui->dateEditNextTechInspection->date( ) ) );
  autoData[ "days_reminder" ] = QString::number( ui->spinBoxCountDays->value( ) );
  if ( ui->groupBoxCargoonOptions->isChecked( ) ) {
    autoData[ "lenth" ] = ui->lineEditLenthCargon->text( );
    autoData[ "width" ] = ui->lineEditWidthCargon->text( );
    autoData[ "height" ] = ui->lineEditHeightCargoon->text( );
    autoData[ "space" ] = ui->lineEditWolumeCargon->text( );
    autoData[ "carring" ] = ui->lineEditMaximalCarring->text( );
    autoData[ "lift" ] = QString::number( ui->checkBoxTatLift->checkState( ) );
  }
  autoData[ "commentary" ] = ui->plainTextEditComments->toPlainText( );

  QSqlQuery query;
  QString qs = QueryDriver::insertQueryString( QString( AllConstatnts::dbSheme ) + ".autopark", autoData );
  if ( validateVin( autoData[ "vin" ] ) ) {
    if ( !query.exec( qs ) ) {
      QMessageBox::critical( nullptr, "CRITICAL", query.lastError( ).text( ) );
    } else {
      ui->lineEditVIN->clear( );
      ui->comboBoxEcoClass->clear( );
      ui->lineEditLenthCargon->clear( );
      ui->lineEditWidthCargon->clear( );
      ui->lineEditHeightCargoon->clear( );
      ui->lineEditWolumeCargon->clear( );
      ui->lineEditMaximalCarring->clear( );
      ui->plainTextEditComments->clear( );
    }
  } else {
    showMessage( );
  }
}

void TemplateTheAutomobilForm::slotClick_Cancel_Button( ) { this->close( ); }

void TemplateTheAutomobilForm::slotCallAutobrandForm( ) {
  TheAutoBrandForm *autoBrandForm = new TheAutoBrandForm;
  connect( autoBrandForm, QOverload<>::of( &TheAutoBrandForm::signalInsertedToDatabase ), this,
           QOverload<>::of( &TemplateTheAutomobilForm::slotReadBrand ) );
  autoBrandForm->show( );
}

void TemplateTheAutomobilForm::slotReadBrand( ) {
  QString queryString = QString( "SELECT DISTINCT ON ( name_brand ) name_brand FROM %1.autobrand;" ).arg( AllConstatnts::dbSheme );
  QSqlQuery query;
  if ( !query.exec( queryString ) ) {
    QMessageBox::critical( nullptr, "CRITICAl", query.lastError( ).text( ) );
  }
  QStringList brands;
  while ( query.next( ) ) {
    brands << query.value( "name_brand" ).toString( );
  }
  ui->comboBoxNameAuto->clear( );
  ui->comboBoxNameAuto->addItems( brands );
}

void TemplateTheAutomobilForm::slotReadSeries( int index ) {
  QString queryString = QString( "SELECT DISTINCT ON ( series_brand ) series_brand FROM %1.autobrand WHERE name_brand = '%2' ;" )
                            .arg( QLatin1String( AllConstatnts::dbSheme ), ui->comboBoxNameAuto->currentText( ) );
  QSqlQuery query;
  if ( !query.exec( queryString ) ) {
    QMessageBox::critical( nullptr, "CRITICAl", query.lastError( ).text( ) );
  }
  QStringList series;
  while ( query.next( ) ) {
    series << query.value( "series_brand" ).toString( );
  }
  if ( !ui->comboBoxSeries->isEnabled( ) ) ui->comboBoxSeries->setEnabled( true );
  ui->comboBoxSeries->clear( );
  ui->comboBoxSeries->addItems( series );
  Q_UNUSED( index )
}

void TemplateTheAutomobilForm::slotReadModel( int index ) {
  QString queryString =
      QString( "SELECT DISTINCT ON ( marka_brand ) marka_brand FROM %1.autobrand WHERE name_brand = '%2' AND series_brand = '%3'" )
          .arg( QLatin1String( AllConstatnts::dbSheme ), ui->comboBoxNameAuto->currentText( ), ui->comboBoxSeries->currentText( ) );

  QSqlQuery query;
  if ( !query.exec( queryString ) ) {
    QMessageBox::critical( nullptr, "CRITICAl", "ERROR READ AUTOBRAND MODEL" );
  }
  QStringList modelsAuto;
  while ( query.next( ) ) {
    modelsAuto << query.value( "marka_brand" ).toString( );
  }
  if ( !ui->comboBoxModel->isEnabled( ) ) ui->comboBoxModel->setEnabled( true );
  ui->comboBoxModel->clear( );
  ui->comboBoxModel->addItems( modelsAuto );
  Q_UNUSED( index )
}

void TemplateTheAutomobilForm::slotDateChanged( QDate date ) {
  ui->labelDayBefore->setText( QString::number( QDate::currentDate( ).daysTo( date ) ) );
}

void TemplateTheAutomobilForm::slotVinValidate( const QString &vin ) {
  // WP0ZZZ99ZTS392124
  // SJNFBAF15U6433557
  // XUFJA696JD3009672
  if ( validateVin( vin ) ) {
    ui->labelOkVin->setText( "V" );
    ui->labelOkVin->setStyleSheet( "color : green" );
  } else {
    ui->labelOkVin->setText( "X" );
    ui->labelOkVin->setStyleSheet( "color : red" );
  }
}

void TemplateTheAutomobilForm::slotVinValidate( ) {
  if ( !validateVin( ui->lineEditVIN->text( ).toUpper( ) ) ) showMessage( );
}

bool TemplateTheAutomobilForm::validateVin( const QString &vin ) {
  QRegularExpression re( "[A-HJ-NPR-Z0-9]{17}" );
  return re.match( vin.toUpper( ) ).hasMatch( ) && vin.size( ) == 17;
}

void TemplateTheAutomobilForm::showMessage( ) { QMessageBox::critical( nullptr, "VIN", "VIN NOT VALID" ); }
