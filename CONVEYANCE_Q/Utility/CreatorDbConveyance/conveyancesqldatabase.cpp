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

void ConveyanceSQLDatabase::tttt( ) {
  std::vector< std::pair< QString, QString > > data;

  // QueryDriver::createTableQuery( QString( "test" ), data );
}

const QSqlDatabase &ConveyanceSQLDatabase::database( ) const { return db; }

// bool ConveyanceSQLDatabase::createTableAdress( ) {
//  QString str {
//      "CREATE TABLE adress ("
//      "id SERIAL,"
//      "type_adress text,"
//      "index_adress text,"
//      "sity_adress text,"
//      "adress_adress text,"
//      "land_adress text)" };

//  QSqlQuery query( db );
//  return query.exec( str );
//}

// bool ConveyanceSQLDatabase::createTableAutopark( ) {
//  QString str {
//      "CREATE TABLE autopark ( "
//      "year_autopark date,"
//      "name_auto_autopark text,"
//      "year_of_issue_data_autopark date,"
//      "vin_autopark text,"
//      "eco_class_autopark text,"
//      "next_tech_inpection date,"
//      "enable_reminder_autopark smallint,"
//      "lenth_cargon_autopark integer,"
//      "width_cargon_autopark integer,"
//      "height_cargon_autopark integer,"
//      "wolume_cargoon_autopark integer,"
//      "maximum_carring_autopark integer,"
//      "tat_lift_auto_autopark smallint,"
//      "comments_autopark text"
//      " )" };
//  QSqlQuery query( db );
//  return query.exec( str );
//}

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
