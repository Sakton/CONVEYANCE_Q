//#include "templatetheautomobilform.h"

//#include <QComboBox>
//#include <QDateEdit>
//#include <QDebug>
//#include <QDialogButtonBox>
//#include <QMessageBox>
//#include <QRegularExpression>
//#include <QSqlError>
//#include <QSqlQuery>

//#include "../AutoBrand/theautobrandform.h"
//#include "Utility/AllConstants.h"
//#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
//#include "Utility/CreatorDbConveyance/querydriver.h"
//#include "ui_templatetheautomobilform.h"

// const QStringList TemplateTheAutomobilForm::ecoClasses = { QLatin1String(
// "Euro-4" ), QLatin1String( "Euro-5" ),
//                                                           QLatin1String(
//                                                           "Euro-6" ) };
// const QStringList TemplateTheAutomobilForm::volumeNotation = { QLatin1String(
// "m3" ), QLatin1String( "l3" ) };

// const QLatin1String STYLESHEET_ERROR_VIN { "border: 2px dashed red;" };
// const QLatin1String STYLESHEET_OK_VIN { "border: 2px solid green;" };

// TemplateTheAutomobilForm::TemplateTheAutomobilForm( QWidget *parent ) :
// QWidget( parent ), ui( new Ui::TemplateTheAutomobilForm ) {
//  ui->setupUi(this);
//  ui->lineEditVIN->setStyleSheet( STYLESHEET_ERROR_VIN );
//  ui->comboBoxEcoClass->addItems( ecoClasses );
//  ui->comboBoxNotation->addItems( volumeNotation );
//  ui->spinBoxCountDays->setToolTip( tr( "Remind Before" ) );
//  ui->dateEditNextTechInspection->setDate( QDate::currentDate( ).addYears( 1 )
//  ); ui->labelDayBefore->setText( QString::number( QDate::currentDate(
//  ).daysTo( QDate::currentDate( ).addYears( 1 ) ) ) ); connect(
//  ui->lineEditVIN, QOverload< const QString & >::of( &QLineEdit::textChanged
//  ), this,
//           QOverload< const QString & >::of(
//           &TemplateTheAutomobilForm::slotVinValidate ) );
//  connect( ui->lineEditVIN, QOverload<>::of( &QLineEdit::editingFinished ),
//  this,
//           QOverload<>::of( &TemplateTheAutomobilForm::slotVinValidate ) );
//}

// TemplateTheAutomobilForm::~TemplateTheAutomobilForm()
//{
//  delete ui;
//}

// void TemplateTheAutomobilForm::setData( const
// TemplateTheAutomobilForm::AutoMap &map ) {
//  ui->lineEditBrandAuto->setText( map.at( "name_brand" ) );
//  ui->lineEditSeriesAuto->setText( map.at( "series_brand" ) );
//  ui->lineEditModel->setText( map.at( "marka_brand" ) );
//  ui->dateEditYearOfIssue->setDate( QDate::fromString( map.at( "issue" ),
//  Qt::ISODate ) ); ui->lineEditVIN->setText( map.at( "vin" ) );
//  ui->lineEditGosNumber->setText( map.at( "auto_counry_number" ) );
//  ui->comboBoxEcoClass->setCurrentText( map.at( "eco" ) );
//  ui->dateEditNextTechInspection->setDate( QDate::fromString( map.at(
//  "inspection" ), Qt::ISODate ) ); ui->checkBoxReminder->setCheckState(
//  static_cast< Qt::CheckState >( map.at( "reminder" ).toInt( ) ) );
//  ui->spinBoxCountDays->setValue( map.at( "days_reminder" ).toInt( ) );
//}

// void TemplateTheAutomobilForm::slotClick_OK_Button( ) {
//  AutoMap autoData;
//  autoData[ "name_brand" ] = ui->lineEditBrandAuto->text( );
//  autoData[ "series_brand" ] = ui->lineEditSeriesAuto->text( );
//  autoData[ "marka_brand" ] = ui->lineEditModel->text( );
//  autoData[ "issue" ] = ui->dateEditYearOfIssue->date( ).toString( Qt::ISODate
//  ); autoData[ "vin" ] = ui->lineEditVIN->text( ).toUpper( ); autoData[ "eco"
//  ] = ui->comboBoxEcoClass->currentText( ); autoData[ "inspection" ] =
//  ui->dateEditNextTechInspection->date( ).toString( Qt::ISODate ); autoData[
//  "reminder" ] = QString::number( ui->checkBoxReminder->checkState( ) );
//  autoData[ "auto_counry_number" ] = ui->lineEditGosNumber->text( );
//  autoData[ "days_reminder" ] = QString::number( ui->spinBoxCountDays->value(
//  ) ); if ( ui->groupBoxCargoonOptions->isChecked( ) ) {
//    autoData[ "lenth" ] = ui->lineEditLenthCargon->text( );
//    autoData[ "width" ] = ui->lineEditWidthCargon->text( );
//    autoData[ "height" ] = ui->lineEditHeightCargoon->text( );
//    autoData[ "space" ] = ui->lineEditWolumeCargon->text( );
//    autoData[ "carring" ] = ui->lineEditMaximalCarring->text( );
//    autoData[ "lift" ] = QString::number( ui->checkBoxTatLift->checkState( )
//    );
//  }
//  autoData[ "commentary" ] = ui->plainTextEditComments->toPlainText( );

//  QSqlQuery query;
//  QString qs = QueryDriver::insertQueryString( QString( AllConstatnts::dbSheme
//  ) + ".autopark", autoData ); if ( validateVin( autoData[ "vin" ] ) ) {
//    if ( !query.exec( qs ) ) {
//      QMessageBox::critical( nullptr, "CRITICAL", query.lastError( ).text( )
//      );
//    } else {
//      ui->lineEditVIN->clear( );
//      ui->lineEditGosNumber->clear( );
//      ui->comboBoxEcoClass->clear( );
//      ui->lineEditLenthCargon->clear( );
//      ui->lineEditWidthCargon->clear( );
//      ui->lineEditHeightCargoon->clear( );
//      ui->lineEditWolumeCargon->clear( );
//      ui->lineEditMaximalCarring->clear( );
//      ui->plainTextEditComments->clear( );
//    }
//  } else {
//    showMessage( );
//  }
//}

// void TemplateTheAutomobilForm::slotClick_Cancel_Button( ) { this->close( ); }

// void TemplateTheAutomobilForm::slotVinValidate( const QString &vin ) {
//  // WP0ZZZ99ZTS392124
//  // SJNFBAF15U6433557
//  // XUFJA696JD3009672
//  if ( validateVin( vin ) ) {
//    ui->lineEditVIN->setStyleSheet( STYLESHEET_OK_VIN );
//  } else {
//    ui->lineEditVIN->setStyleSheet( STYLESHEET_ERROR_VIN );
//  }
//}

// void TemplateTheAutomobilForm::slotVinValidate( ) {
//  if ( !validateVin( ui->lineEditVIN->text( ).toUpper( ) ) ) showMessage( );
//}

// bool TemplateTheAutomobilForm::validateVin( const QString &vin ) {
//  QRegularExpression re( "[A-HJ-NPR-Z0-9]{17}" );
//  return re.match( vin.toUpper( ) ).hasMatch( ) && vin.size( ) == 17;
//}

// void TemplateTheAutomobilForm::showMessage( ) { QMessageBox::critical(
// nullptr, "VIN", "VIN NOT VALID" ); }
