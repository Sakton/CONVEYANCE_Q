#include "conveyancesqldatabase.h"

#include "DBConnectConstant.h"

ConveyanceSQLDatabase::ConveyanceSQLDatabase( ) { db = QSqlDatabase::addDatabase( DBConnectConstatnt::driverBase ); }

ConveyanceSQLDatabase::~ConveyanceSQLDatabase( ) { db.close( ); }

bool ConveyanceSQLDatabase::openDb( ) {
  db.setHostName( DBConnectConstatnt::hostName );
  db.setPort( DBConnectConstatnt::port );
  db.setDatabaseName( DBConnectConstatnt::databaseName );
  db.setUserName( DBConnectConstatnt::userName );
  db.setPassword( DBConnectConstatnt::password );
  return db.open( );
}
