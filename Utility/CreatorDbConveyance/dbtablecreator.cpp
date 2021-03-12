#include "dbtablecreator.h"

#include <QApplication>
#include <QLatin1String>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QStringList>
#include <memory>

#include "../AllConstants.h"
#include "Utility/CreatorDbConveyance/errordatabase.h"

DBTableCreator::DBTableCreator( ) {}

void DBTableCreator::createAllTableDb( ) {
  createShema( );
  createTableCountry( );
  createAdressTable( );
  //  createBrandAuto( );
  createAutoparkTable( );
}

bool DBTableCreator::dropTable( ) { return 1; }

bool DBTableCreator::queryToDb( const QString &queryString ) {
  QSqlQuery query;
  if ( query.exec( queryString ) )
    return true;
  else {
    qDebug( ) << query.lastError( ).text( );
    return false;
  }
}

bool DBTableCreator::createUser( const QString &userName, const QString &password ) {
  QString qs { "CREATE USER " + userName + " WITH PASSWORD '" + password + "';" };
  return queryToDb( qs );
}

void DBTableCreator::createShema( ) {
  QString qs { "CREATE SCHEMA " + QLatin1String( AllConstatnts::dbSheme ) + ";" };
  queryToDb(qs);
}

void DBTableCreator::createTableCountry() {
  QString qs { "CREATE TABLE " + QLatin1String( AllConstatnts::dbSheme ) +
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
  QString qs { "CREATE TABLE " + QLatin1String( AllConstatnts::dbSheme ) +
               ".adress ("
               "country_name varchar(64) NOT NULL,"
               "type varchar(16) DEFAULT 'Legal Adress',"
               "index varchar(16) NOT NULL,"
               "sity varchar(256) NOT NULL,"
               "adress varchar(256) NOT NULL,"
               "CHECK( type IN ('Legal Adress', 'Mail Adress') ),"
               "FOREIGN KEY ( country_name ) REFERENCES " +
               QLatin1String( AllConstatnts::dbSheme ) +
               ".country ( name ) "
               "ON DELETE CASCADE "
               ");" };
  queryToDb( qs );
}

// void DBTableCreator::createBrandAuto( ) {
//  QString qs { "CREATE TABLE " + QLatin1String( AllConstatnts::dbSheme ) +
//               ".autobrand ("
//               "name_brand varchar(64) NOT NULL,"
//               "series_brand varchar(64) NOT NULL,"
//               "marka_brand varchar(64) NOT NULL,"
//               "UNIQUE (marka_brand),"
//               "CHECK ( name_brand != '' AND series_brand != '' AND marka_brand != '' ),"
//               "PRIMARY KEY ( name_brand, marka_brand, series_brand ) );" };
//  queryToDb( qs );
//}

void DBTableCreator::createAutoparkTable( ) {
  QString qs { "CREATE TABLE " + QLatin1String( AllConstatnts::dbSheme ) +
               ".autopark ("
               "name_brand varchar(64) NOT NULL,"
               "series_brand varchar(64),"
               "marka_brand varchar(64) NOT NULL,"
               "issue date NOT NULL,"
               "auto_counry_number varchar( 8 ),"
               "vin varchar( 20 ),"
               "eco varchar( 10 ),"
               "inspection date,"
               "reminder integer DEFAULT 0,"
               "days_reminder integer DEFAULT 0,"
               "lenth numeric( 10, 2 ) DEFAULT 0,"
               "width numeric( 10, 2 ) DEFAULT 0,"
               "height numeric( 10, 2 ) DEFAULT 0,"
               "space numeric( 10, 2 ) DEFAULT 0,"
               "carring numeric(10, 2) DEFAULT 0,"
               "lift integer DEFAULT 0,"
               "commentary text,"
               "PRIMARY KEY ( auto_counry_number, vin )"
               ");" };
  queryToDb( qs );
}
