#include "theautomobilform.h"

#include <QComboBox>
#include <QDateEdit>
#include <QDebug>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <map>

#include "AutoBrand/theautobrandform.h"
#include "Utility/AllConstants.h"
#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_theautomobilform.h"

const QStringList nameAuto { "...", "Volvo", "Mrcedes" };
const QStringList ecoClasses { "Euro-4", "Euro-5", "Euro-6" };
const QStringList volumeNotation { "m3", "l3" };

TheAutomobilForm::TheAutomobilForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAutomobilForm ) {
  setAttribute( Qt::WA_DeleteOnClose );
  ui->setupUi( this );
  ui->comboBoxNameAuto->addItems( nameAuto );
  ui->comboBoxSeries->setEnabled( false );
  ui->comboBoxModel->setEnabled( false );
  ui->comboBoxEcoClass->addItems( ecoClasses );
  ui->comboBoxNotation->addItems( volumeNotation );
  slotReadBrand( );

  connect( ui->buttonBoxAutomobileAdding, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheAutomobilForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAutomobileAdding, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheAutomobilForm::slotClick_Cancel_Button ) );
  connect( ui->pushButtonAddAuto, QOverload< bool >::of( &QPushButton::clicked ), this,
           QOverload<>::of( &TheAutomobilForm::slotCallAutobrandForm ) );
  connect( ui->comboBoxNameAuto, QOverload< int >::of( &QComboBox::currentIndexChanged ), this,
           QOverload< int >::of( &TheAutomobilForm::slotReadSeries ) );
  connect( ui->comboBoxSeries, QOverload< int >::of( &QComboBox::currentIndexChanged ), this,
           QOverload< int >::of( &TheAutomobilForm::slotReadModel ) );
}

TheAutomobilForm::~TheAutomobilForm()
{
  delete ui;
}

void TheAutomobilForm::slotClick_OK_Button( ) {
  std::map< QString, QString > autoData;
  autoData[ "name_brand" ] = ui->comboBoxNameAuto->currentText( );
  autoData[ "marka_brand" ] = ui->comboBoxModel->currentText( );
  autoData[ "issue" ] = QString::number( ui->dateEditYearOfIssue->date( ).year( ) );
  autoData[ "vin" ] = ui->lineEditVIN->text( );
  autoData[ "eco" ] = ui->comboBoxEcoClass->currentText( );
  autoData[ "inspection" ] = ui->dateEditNextTechInspection->date( ).toString( );
  //  autoData[ "reminder" ] = QString::number( ui->checkBoxReminder->checkState( ) ); //TODO ???????? вычисление остатка в днях ??? или
  //  задание количества дней с которого начинается отсчет
  // !!! или вставка в базу сразу вычисленное значение
  autoData[ "lenth" ] = ui->lineEditLenthCargon->text( );
  autoData[ "width" ] = ui->lineEditWidthCargon->text( );
  autoData[ "height" ] = ui->lineEditHeightCargoon->text( );
  autoData[ "space" ] = ui->lineEditWolumeCargon->text( );
  autoData[ "carring" ] = ui->lineEditMaximalCarring->text( );
  autoData[ "lift" ] = QString::number( ui->checkBoxTatLift->checkState( ) );
  autoData[ "commentary" ] = ui->plainTextEditComments->toPlainText( );

  // ConveyanceSQLDatabase db;
  if ( !QSqlQuery( /*db.database( )*/ )
            .exec( QueryDriver::insertQueryString( QString( AllConstatnts::dbSheme ) + ".autopark", autoData ) ) ) {
    QMessageBox::critical( nullptr, "CRITICAL", "ERROR INSERT TO DB AUTO" );
    this->close( );
  }
  ui->dateEditYearOfIssue->clear( );
  ui->lineEditVIN->clear( );
  ui->comboBoxEcoClass->clear( );
  ui->dateEditNextTechInspection->clear( );
  ui->lineEditLenthCargon->clear( );
  ui->lineEditWidthCargon->clear( );
  ui->lineEditHeightCargoon->clear( );
  ui->lineEditWolumeCargon->clear( );
  ui->lineEditMaximalCarring->clear( );
  ui->plainTextEditComments->clear( );
}

void TheAutomobilForm::slotClick_Cancel_Button( ) { this->close( ); }

void TheAutomobilForm::slotCallAutobrandForm( ) {
  TheAutoBrandForm *autoBrandForm = new TheAutoBrandForm;
  connect( autoBrandForm, QOverload<>::of( &TheAutoBrandForm::signalInsertedToDatabase ), this,
           QOverload<>::of( &TheAutomobilForm::slotReadBrand ) );
  autoBrandForm->show( );
}

void TheAutomobilForm::slotReadBrand( ) {
  QSqlQuery query;
  if ( !query.exec(
           QString { "SELECT DISTINCT ON ( name_brand ) name_brand FROM " + QString( AllConstatnts::dbSheme ) + ".autobrand;" } ) ) {
    QMessageBox::critical( nullptr, "CRITICAl", "ERROR READ AUTOBRAND NAME" );
  }
  QStringList brands;
  while ( query.next( ) ) {
    brands << query.value( "name_brand" ).toString( );
  }
  ui->comboBoxNameAuto->clear( );
  ui->comboBoxNameAuto->addItems( brands );
}

void TheAutomobilForm::slotReadSeries( int index ) {
  QSqlQuery query;
  if ( !query.exec( QString { "SELECT DISTINCT ON ( series_brand ) series_brand FROM " + QString( AllConstatnts::dbSheme ) +
                              ".autobrand WHERE name_brand = '" + ui->comboBoxNameAuto->currentText( ) + "';" } ) ) {
    QMessageBox::critical( nullptr, "CRITICAl", "ERROR READ AUTOBRAND SERIES" );
  }
  QStringList series;
  while ( query.next( ) ) {
    series << query.value( "series_brand" ).toString( );
  }
  if ( !ui->comboBoxSeries->isEnabled( ) ) ui->comboBoxSeries->setEnabled( true );
  ui->comboBoxSeries->clear( );
  ui->comboBoxSeries->addItems( series );
}

void TheAutomobilForm::slotReadModel( int index ) {
  QSqlQuery query;
  if ( !query.exec( "SELECT DISTINCT ON ( marka_brand ) marka_brand FROM " + QString( AllConstatnts::dbSheme ) +
                    ".autobrand WHERE name_brand = '" + ui->comboBoxNameAuto->currentText( ) + "' AND series_brand = '" +
                    ui->comboBoxSeries->currentText( ) + "';" ) ) {
    QMessageBox::critical( nullptr, "CRITICAl", "ERROR READ AUTOBRAND MODEL" );
  }
  QStringList modelsAuto;
  while ( query.next( ) ) {
    modelsAuto << query.value( "marka_brand" ).toString( );
  }
  if ( !ui->comboBoxModel->isEnabled( ) ) ui->comboBoxModel->setEnabled( true );
  ui->comboBoxModel->clear( );
  ui->comboBoxModel->addItems( modelsAuto );
}
