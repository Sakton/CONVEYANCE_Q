#include "conveyancesqldatabase.h"

#include <QMessageBox>
#include <QSqlRecord>

#include "DBConnectConstant.h"
#include "QSqlError"
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
  if ( !db.open( ) ) {
    QMessageBox::critical( nullptr, "ERROR OPEN DB", db.lastError( ).text( ) );
  }
  return true;
}

void ConveyanceSQLDatabase::closeDb( ) { db.close( ); }

// bool ConveyanceSQLDatabase::insertToDb( const QString &q ) {
//  QSqlQuery query( db );
//  return query.exec( q );
//}

// std::unique_ptr< QSqlQuery > ConveyanceSQLDatabase::readAllTable( const QString &tableName ) {
//  QString qs { "SELECT * FROM " + tableName };
//  QSqlQuery query( db );
//  if ( !query.exec( qs ) ) return { nullptr };
//  return std::unique_ptr< QSqlQuery >( new QSqlQuery( std::move( query ) ) );
// }

const QSqlDatabase &ConveyanceSQLDatabase::database( ) const { return db; }