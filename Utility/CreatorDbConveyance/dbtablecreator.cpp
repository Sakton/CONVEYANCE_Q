#include "dbtablecreator.h"

#include <QApplication>
#include <QMessageBox>
#include <QSqlQuery>
#include <QStringList>
#include <memory>

#include "Utility/CreatorDbConveyance/DBConnectConstant.h"
#include "Utility/CreatorDbConveyance/errordatabase.h"

DBTableCreator::DBTableCreator( ) {}

void DBTableCreator::createAllTableDb( ) {
  try {
    createShema();
    createTableCountry();
  } catch (const ErrorCreateDatabase &e) {
    int okBtn = QMessageBox::critical( nullptr, "ERROR!!!", e.what( ), QMessageBox::StandardButton::Ok );
    if ( okBtn ) exit( 1 );
  } catch (const ErrorDatabase &e) {
    int okBtn = QMessageBox::critical( nullptr, "ERROR!!!", e.what( ), QMessageBox::StandardButton::Ok );
    if ( okBtn ) exit( 1 );
  }
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
  QString qs{"CREATE SCHEMA " + DBConnectConstatnt::sheme + ";"};
  queryToDb(qs);
}

bool DBTableCreator::createTableNationality( ) {
  QString qs{"CREATE TABLE " + DBConnectConstatnt::sheme +
             ".nationality ("
             "name varchar(256) NOT NULL,"
             "PRIMARY KEY (name)"
             ");"};
  return queryToDb( qs );
}

void DBTableCreator::createTableCountry() {
  QString qs{"CREATE TABLE " + DBConnectConstatnt::sheme +
             ".country ("
             "name varchar(64) NOT NULL,"
             "phonecode varchar(8) NOT NULL,"
             "abbriviated varchar(4) NOT NULL,"
             "nds_vat numeric(4,2) NOT NULL,"
             "UNIQUE(name, phonecode, abbriviated),"
             "PRIMARY KEY (name)"
             ");"};
  queryToDb(qs);
}

bool DBTableCreator::createLandTable( ) { return 1; }

bool DBTableCreator::createAutoBrandTable( ) { return 1; }

bool DBTableCreator::createAdressTable( ) { return 1; }

bool DBTableCreator::createClientTable( ) { return 1; }
