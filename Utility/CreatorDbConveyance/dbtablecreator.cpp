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
  createBrandAuto( );
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
  QString qs { "CREATE USER " + userName + " WITH PASSWORD '" + password + "';" };
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
               ");" };
  queryToDb( qs );
}

void DBTableCreator::createBrandAuto( ) {
  QString qs { "CREATE TABLE " + QString( AllConstatnts::dbSheme ) +
               ".autobrand ("
               "name_brand varchar(64) NOT NULL,"
               "series_brand varchar(64) NOT NULL,"
               "marka_brand varchar(64) NOT NULL,"
               "UNIQUE (marka_brand),"
               "PRIMARY KEY ( name_brand, marka_brand ) );" };
  queryToDb( qs );
}

void DBTableCreator::createAutoparkTable( ) {
  QString qs { "CREATE TABLE " + QString( AllConstatnts::dbSheme ) +
               ".autopark ("
               "name_brand varchar(64) NOT NULL,"
               "marka_brand varchar(64) NOT NULL,"
               "model varchar( 16),"
               "issue interval YEAR NOT NULL,"
               "vin varchar( 17 ),"
               "eco varchar(5),"
               "inspection date NOT NULL,"
               "reminder integer DEFAULT 0,"
               "days_before interval DAY NOT NULL,"
               "lenth numeric( 4, 2 ),"
               "width numeric( 4, 2 ),"
               "height numeric( 4, 2 ),"
               "space numeric( 5, 2 ),"
               "carring numeric(4, 2),"
               "lift boolean DEFAULT false,"
               "commentary text,"
               "PRIMARY KEY ( vin ),"
               "UNIQUE ( name_brand, marka_brand ),"
               "FOREIGN KEY (name_brand, marka_brand) REFERENCES " +
               QString( AllConstatnts::dbSheme ) +
               ".autopark ( name_brand, marka_brand )"
               ");" };
  queryToDb( qs );
}
