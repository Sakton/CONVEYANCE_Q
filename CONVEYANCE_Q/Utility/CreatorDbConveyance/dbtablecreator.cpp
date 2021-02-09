#include "dbtablecreator.h"

#include <QProcess>
#include <QSqlQuery>
#include <QStringList>
#include <memory>

DBTableCreator::DBTableCreator( ) {

}

bool DBTableCreator::createDb( ) {
  // WARNING !!! this absolute path  worked PC
  //  QString prog = "C:/PostgreSQL/bin/createdb.exe";
  //  QStringList paramCommandStr;

  //  std::unique_ptr< QProcess > process;
  //  process->start( prog );
  // process->startDetached( prog );

  //  if ( !db.openDb( ) ) {
  //    // TODO выкинуть исключение (ошибка) ???
  //    qDebug( ) << "NOT OPEN DB";
  //  }
  //  QSqlQuery query( db.database( ) );
  //  for ( auto &q : queries ) {
  //    if ( !query.exec( q ) ) return false;
  //  }
  //  db.closeDb( );
  return createLandTable( ) && createAutoBrandTable( );
}

bool DBTableCreator::dropTable( ) {
  QString str { "" };
  QSqlQuery query( db.database( ) );
  return query.exec( str );
}

DBTableCreator::~DBTableCreator( ) { db.closeDb( ); }

bool DBTableCreator::createLandTable( ) {
  QString qs {
      "CREATE TABLE land ("
      "land_id integer PRIMARY KEY,"
      "land_name text,"
      "land_phonecode text,"
      "land_abbriviated text,"
      "land_vatrate numeric CHECK(land_vatrate > 0)"
      ")" };
  QSqlQuery query( db.database( ) );
  return query.exec( qs );
}

bool DBTableCreator::createAutoBrandTable( ) {
  QString qs {
      "CREATE TABLE auto_brand ("
      "autobrand_id integer PRIMARY KEY,"
      "autobrand_name text"
      ")" };
  QSqlQuery query( db.database( ) );
  return query.exec( qs );
}
