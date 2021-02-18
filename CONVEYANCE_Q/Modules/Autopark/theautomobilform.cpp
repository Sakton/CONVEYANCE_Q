#include "theautomobilform.h"

#include <QDateEdit>
#include <QDebug>
#include <QDialogButtonBox>
#include <map>

#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "ui_theautomobilform.h"

const QStringList nameAuto { "This_Add_Is_Base", "Volvo", "Mrcedes" };
const QStringList ecoClasses { "Euro-4", "Euro-5", "Euro-6" };
const QStringList volumeNotation { "m3", "l3" };

TheAutomobilForm::TheAutomobilForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAutomobilForm ) {
  setAttribute( Qt::WA_DeleteOnClose );
  ui->setupUi( this );
  ui->comboBoxNameAuto->addItems( nameAuto );
  ui->comboBoxEcoClass->addItems( ecoClasses );
  ui->comboBoxNotation->addItems( volumeNotation );

  connect( ui->buttonBoxAutomobileAdding, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheAutomobilForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAutomobileAdding, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheAutomobilForm::slotClick_Cancel_Button ) );
}

TheAutomobilForm::~TheAutomobilForm()
{
  delete ui;
}

void TheAutomobilForm::slotClick_OK_Button( ) {
  std::map< QString, QString > autoData;
  qDebug( ) << "year = " << ui->dateEditYearOfIssue->date( ).year( );
  autoData[ "nameAutoData" ] = ui->comboBoxNameAuto->currentText( );
  autoData[ "yearOfIssueData" ] = QString::number( ui->dateEditYearOfIssue->date( ).year( ) );
  autoData[ "VINData" ] = ui->lineEditVIN->text( );
  autoData[ "ecoClassData" ] = ui->comboBoxEcoClass->currentText( );
  autoData[ "nextTechnicalInspection" ] = ui->dateEditNextTechInspection->date( ).toString( );
  autoData[ "enableReminder" ] = QString::number( ui->checkBoxReminder->checkState( ) );
  autoData[ "lenthCargon" ] = ui->lineEditLenthCargon->text( );
  autoData[ "widthCargon" ] = ui->lineEditWidthCargon->text( );
  autoData[ "heightCargon" ] = ui->lineEditHeightCargoon->text( );
  autoData[ "wolumeCargon" ] = ui->lineEditWolumeCargon->text( );
  autoData[ "maximumCarring" ] = ui->lineEditMaximalCarring->text( );
  autoData[ "tatLiftAuto" ] = QString::number( ui->checkBoxTatLift->checkState( ) );
  autoData[ "commentsAutoData" ] = ui->plainTextEditComments->toPlainText( );

  for ( auto &el : autoData ) qDebug( ) << el.first << " --> " << el.second;

  // TODO this CHEK data
  // if chek = OK
  // TODO this INSERT to DB
  ConveyanceSQLDatabase db;
  //  if ( db.openDb( ) ) {
  //    qDebug( ) << "OPEN DB";
  //    if ( db.createTableAutopark( ) ) {
  //      qDebug( ) << "CREATE TABLE AUTOPARK";
  //    } else {
  //      qDebug( ) << "NOT CREATE TABLE AUTOPARK";
  //    }
  //  } else {
  //    qDebug( ) << "ERROR OPEN DB";
  //  }
};

void TheAutomobilForm::slotClick_Cancel_Button( ) { this->close( ); }
