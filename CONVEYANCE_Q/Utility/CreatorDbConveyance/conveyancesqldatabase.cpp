#include "conveyancesqldatabase.h"

#include "DBConnectConstant.h"
#include "QSqlQuery"
#include "querydriver.h"

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

const QSqlDatabase &ConveyanceSQLDatabase::database( ) const { return db; }

// bool ConveyanceSQLDatabase::deleteTableAdress( ) {
//  QString str { "DROP TABLE adress" };
//  QSqlQuery query( db );
//  return query.exec( );
//}

// bool ConveyanceSQLDatabase::deleteTableAutopark( ) {
//  QString str { "DROP TABLE autopark" };
//  QSqlQuery query( db );
//  return query.exec( str );
//}

// bool ConveyanceSQLDatabase::insertToDb( const QString &q ) {
//  QSqlQuery query( db );
//  return query.exec( q );
//}

// bool ConveyanceSQLDatabase::selectFromDb( const QString &q ) {
//  QSqlQuery query( db );
//  /*return */ query.exec( q );
//  while ( query.next( ) ) {
//    for ( int i = 0; i < 5; ++i ) {
//      QString qqq = query.value( i ).toString( );
//      qDebug( ) << qqq;
//    }
//    qDebug( ) << "\n";
//  }

//  return true;
//}
