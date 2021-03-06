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
  //  QString qs { "CREATE SCHEMA " + QLatin1String( AllConstatnts::DB_SHEME ) +
  //               ";" };
  //  queryToDb(qs);
}

void DBTableCreator::createTableCountry( ) {
  //  QString qs { "CREATE TABLE " + QLatin1String( AllConstatnts::DB_SHEME ) +
  //               ".country ("
  //               "name varchar(64) NOT NULL,"
  //               "phonecode varchar(8) NOT NULL,"
  //               "abbriviated varchar(4) NOT NULL,"
  //               "nds_vat numeric(4,2) NOT NULL,"
  //               "UNIQUE(name, phonecode, abbriviated),"
  //               "PRIMARY KEY (name)"
  //               ");" };
  //  queryToDb(qs);
}

void DBTableCreator::createAdressTable( ) {
  //  QString qs { "CREATE TABLE " + QLatin1String( AllConstatnts::DB_SHEME ) +
  //               ".adress ("
  //               "country_name varchar(64) NOT NULL,"
  //               "type varchar(16) DEFAULT 'Legal Adress',"
  //               "index varchar(16) NOT NULL,"
  //               "sity varchar(256) NOT NULL,"
  //               "adress varchar(256) NOT NULL,"
  //               "CHECK( type IN ('Legal Adress', 'Mail Adress') ),"
  //               "FOREIGN KEY ( country_name ) REFERENCES " +
  //               QLatin1String( AllConstatnts::DB_SHEME ) +
  //               ".country ( name ) "
  //               "ON DELETE CASCADE "
  //               ");" };
  //  queryToDb( qs );
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
  //  QString qs {
  //      "CREATE TABLE conveyance.autopark( name_brand character varying( 64 )
  //      " "COLLATE pg_catalog.\"default\" DEFAULT NULL::character varying,"
  //      "series_brand character varying( 64 )"
  //      "COLLATE pg_catalog.\"default\" DEFAULT NULL::character varying,"
  //      "marka_brand character varying( 64 )"
  //      "COLLATE pg_catalog.\"default\" DEFAULT NULL::character varying,"
  //      "issue date DEFAULT CURRENT_DATE,"
  //      "auto_counry_number character varying( 16 )"
  //      "COLLATE pg_catalog.\"default\" DEFAULT NULL::character varying,"
  //      "vin character varying( 20 ) COLLATE pg_catalog.\"default\" NOT NULL,"
  //      "eco character varying( 10 ) COLLATE pg_catalog.\"default\","
  //      "inspection date DEFAULT CURRENT_DATE,"
  //      "reminder integer DEFAULT 0,"
  //      "days_reminder integer DEFAULT 0,"
  //      "lenth numeric( 10, 2 ) DEFAULT 0,"
  //      "width numeric( 10, 2 ) DEFAULT 0,"
  //      "height numeric( 10, 2 ) DEFAULT 0,"
  //      "space numeric( 10, 2 ) DEFAULT 0,"
  //      "carring numeric( 10, 2 ) DEFAULT 0,"
  //      "lift integer DEFAULT 0,"
  //      "commentary text COLLATE pg_catalog.\"default\","
  //      "id integer NOT NULL DEFAULT nextval("
  //      "'conveyance.autopark_id_seq' ::regclass ),"
  //      "CONSTRAINT autopark_pkey PRIMARY KEY( id ) );" };
  //  queryToDb( qs );
}
