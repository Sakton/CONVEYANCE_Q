#include "conveyancesqldatabase.h"

#include "DBConnectConstant.h"
#include "QSqlQuery"
#include "querydriver.h"

ConveyanceSQLDatabase::ConveyanceSQLDatabase( ) {
  db = QSqlDatabase::addDatabase( DBConnectConstatnt::driverBase );
  openDb( );
}

ConveyanceSQLDatabase::~ConveyanceSQLDatabase( ) { db.close( ); }

bool ConveyanceSQLDatabase::openDb( ) {
  db.setHostName( DBConnectConstatnt::hostName );
  db.setPort( DBConnectConstatnt::port );
  db.setDatabaseName( DBConnectConstatnt::databaseName );
  db.setUserName( DBConnectConstatnt::userName );
  db.setPassword( DBConnectConstatnt::password );
  return db.open( );
}

void ConveyanceSQLDatabase::closeDb( ) { db.close( ); }

bool ConveyanceSQLDatabase::insertToDb( const QString &q ) {
  QSqlQuery query( q, db );
  return query.exec( );
}

const QSqlDatabase &ConveyanceSQLDatabase::database( ) const { return db; }
