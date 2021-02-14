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
  return createLandTable( ) /* && createAutoBrandTable( )*/;
}

bool DBTableCreator::dropTable( ) {
  QString str { "" };
  QSqlQuery query( db.database( ) );
  return query.exec( str );
}

DBTableCreator::~DBTableCreator( ) { db.closeDb( ); }

bool DBTableCreator::createLandTable( ) {
  QString qs {
      "CREATE TABLE country ("
      "country_id serial,"
      "country_name text NOT NULL,"
      "country_phonecode text NOT NULL,"
      "country_abbriviated text NOT NULL,"
      "country_vatrate numeric NOT NULL,"
      "PRIMARY KEY ( country_id ),"
      "CHECK ( country_vatrate > 0 ),"
      "UNIQUE ( country_name, country_phonecode, country_abbriviated )"
      ");" };
  QSqlQuery query( db.database( ) );
  return query.exec( qs );
}

bool DBTableCreator::createAutoBrandTable( ) {
  QString qs {
      "CREATE TABLE auto_brand ("
      "autobrand_id serial,"
      "autobrand_name varchar( 64 ) NOT NULL,"
      "PRIMARY KEY ( autobrand_id ),"
      "UNIQUE ( autobrand_name )"
      ");" };
  QSqlQuery query( db.database( ) );
  return query.exec( qs );
}
