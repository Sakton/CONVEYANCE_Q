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
  autoData[ "name_brand" ] = ui->comboBoxNameAuto->currentText( );
  autoData[ "marka_brand" ] = ui->comboBoxMarka->currentText( );
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
