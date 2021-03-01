#include "dbtablecreator.h"

#include <QApplication>
#include <QMessageBox>
#include <QSqlQuery>
#include <QStringList>
#include <memory>

#include "../AllConstants.h"
#include "Utility/CreatorDbConveyance/errordatabase.h"

DBTableCreator::DBTableCreator( ) {}

void DBTableCreator::createAllTableDb( ) {
  //  try {
  createShema( );
  createTableCountry( );
  createAdressTable( );
  createAutoparkTable( );
  //  } catch (const ErrorCreateDatabase &e) {
  //    int okBtn = QMessageBox::critical( nullptr, "ERROR!!!", e.what( ), QMessageBox::StandardButton::Ok );
  //    if ( okBtn ) exit( 1 );
  //  } catch (const ErrorDatabase &e) {
  //    int okBtn = QMessageBox::critical( nullptr, "ERROR!!!", e.what( ), QMessageBox::StandardButton::Ok );
  //    if ( okBtn ) exit( 1 );
  //  }
}

bool DBTableCreator::dropTable( ) { return 1; }

DBTableCreator::~DBTableCreator( ) { db.closeDb( ); }

bool DBTableCreator::queryToDb( const QString &queryString ) {
  QSqlQuery query( db.database( ) );
  return query.exec( queryString );
}

bool DBTableCreator::createUser( const QString &userName, const QString &password ) {
  // CREATE USER tes WITH PASSWORD '12345';
  QString qs { "CREATE USER " + userName + " WITH PASSWORD '" + password + "';" };
  qDebug( ) << qs;
  return queryToDb( qs );
}

void DBTableCreator::createShema( ) {
  QString qs { "CREATE SCHEMA " + QString( AllConstatnts::dbSheme ) + ";" };
  queryToDb(qs);
}

void DBTableCreator::createTableCountry() {
  QString qs { "CREATE TABLE " + QString( AllConstatnts::dbSheme ) +
               ".country ("
               "name varchar(64) NOT NULL,"
               "phonecode varchar(8) NOT NULL,"
               "abbriviated varchar(4) NOT NULL,"
               "nds_vat numeric(4,2) NOT NULL,"
               "UNIQUE(name, phonecode, abbriviated),"
               "PRIMARY KEY (name)"
               ");" };
  queryToDb(qs);
}

void DBTableCreator::createAdressTable( ) {
  QString qs { "CREATE TABLE " + QString( AllConstatnts::dbSheme ) +
               ".adress ("
               "country_name varchar(64) NOT NULL,"
               "type varchar(16) DEFAULT 'Legal Adress',"
               "index varchar(16) NOT NULL,"
               "sity varchar(256) NOT NULL,"
               "adress varchar(256) NOT NULL,"
               "CHECK( type IN ('Legal Adress', 'Mail Adress') ),"
               "FOREIGN KEY ( country_name ) REFERENCES " +
               QString( AllConstatnts::dbSheme ) +
               ".country ( name ) "
               "ON DELETE CASCADE "
               "ON UPDATE CASCADE );" };
  queryToDb( qs );
}

void DBTableCreator::createAutoparkTable( ) {
  QString qs { "CREATE TABLE " + QString( AllConstatnts::dbSheme ) +
               ".autopark ("
               "id_auto SERIAL,"
               "brand varchar( 16 ) NOT NULL,"
               "model varchar( 16),"
               "issue date NOT NULL,"
               "vin varchar( 17 ),"
               "eco varchar(5),"
               "inspection date NOT NULL,"
               "reminder boolean DEFAULT true,"
               "days_before interval DAY NOT NULL,"
               "lenth numeric( 4, 2 ),"
               "width numeric( 4, 2 ),"
               "wheight numeric( 4, 2 ),"
               "space numeric( 5, 2 ),"
               "lift boolean DEFAULT false,"
               "commentary text,"
               "PRIMARY KEY ( id_auto ),"
               "CHECK( ( issue + days_before ) <= inspection ) );" };
  queryToDb( qs );
}
