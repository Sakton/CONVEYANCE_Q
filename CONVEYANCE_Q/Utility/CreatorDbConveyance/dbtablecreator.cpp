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
      "country_name varchar(64) NOT NULL,"
      "country_phonecode varchar(8) NOT NULL,"
      "country_abbriviated varchar(4) NOT NULL,"
      "country_vatrate real NOT NULL,"
      "PRIMARY KEY ( country_name ),"
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

bool DBTableCreator::createAdressTable( ) {
  QString qs {
      "CREATE TABLE adress ("
      "adress_" };
  return true;
}

bool DBTableCreator::createClientTable( ) {
  QString qs {
      "CREATE TABLE counterparty ( "
      "counterparty_nip varchar( 32 ) NOT NULL,"
      "counterparty_name varchar( 128 ) NOT NULL,"
      "PRIMARY KEY ( counterparty_nip, counterparty_name )"
      " );" };
  return true;
}
