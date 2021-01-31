#include "theadressform.h"

#include <QDebug>
#include <QDialogButtonBox>
#include <QSqlQuery>
#include <QStringList>
#include <map>

#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "ui_theadressform.h"

const QStringList typeAdress { "Legal Address", "Mailing Address" };

TheAdressForm::TheAdressForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAdressForm ) {
  ui->setupUi( this );
  ui->comboBoxTypeAdress->addItems( typeAdress );

  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheAdressForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheAdressForm::slotClick_Cancel_Button ) );
}

TheAdressForm::~TheAdressForm( ) { delete ui; }

void TheAdressForm::slotClick_OK_Button( ) {
  std::map< QString, QString > adressData;
  //  adressData[ "contragentData" ] = ui->lineEditContragent->text( );
  adressData[ "type_adress" ] = ui->comboBoxTypeAdress->currentText( );
  adressData[ "index_adress" ] = ui->lineEditIndex->text( );
  adressData[ "sity_adress" ] = ui->lineEditSity->text( );
  adressData[ "adress_adress" ] = ui->lineEditAdress->text( );
  adressData[ "land_adress" ] = ui->lineEditLand->text( );
  //  for ( auto &el : adressData ) qDebug( ) << el.first << " --> " << el.second;

  // TODO this CHEK data
  // if chek = OK
  // TODO this INSERT to DB
  // TODO this test method!!!!!
  ConveyanceSQLDatabase db;
  if ( !db.openDb( ) ) {
    qDebug( ) << "ERROR OPEN DB";
  } else {
    qDebug( ) << "DB OK";
    //    if ( !db.createTableAdress( ) ) {
    //      qDebug( ) << "NO CREATE ADRESS";
    //    } else {
    //      qDebug( ) << "YES CREATE ADRESS";
    //    }
  }

  // adding to db
  // QString strQuery { "INSERT INTO adress  VALUE (" };
  QString strQuery { "INSERT INTO adress (" };
  for ( auto &el : adressData ) {
    strQuery += el.first;
    strQuery += ",";
  }
  strQuery.chop( 1 );
  strQuery += ")";
  strQuery += " VALUES (";
  for ( auto &el : adressData ) {
    strQuery += "'";
    strQuery += el.second;
    strQuery += "'";
    strQuery += ",";
  }
  strQuery.chop( 1 );
  strQuery += ")";
  // qDebug( ) << "strQuery = " << strQuery;

  //  if ( db.insertToDb( strQuery ) ) {
  //    qDebug( ) << "INSERT OK";
  //  }

  QString selectQuery { "SELECT * FROM adress" };
  db.selectFromDb( selectQuery );
}

void TheAdressForm::slotClick_Cancel_Button( ) { this->close( ); }
