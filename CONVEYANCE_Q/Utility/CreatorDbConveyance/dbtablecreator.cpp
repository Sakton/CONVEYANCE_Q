#include "dbtablecreator.h"

#include <QProcess>
#include <QSqlQuery>
#include <QStringList>
#include <memory>

#include "Utility/CreatorDbConveyance/DBConnectConstant.h"

DBTableCreator::DBTableCreator( ) {}

bool DBTableCreator::createDb( /*const QString &userName, const QString &password*/ ) {
  // return createUser( userName, password );
  return createDatabase( );
}

bool DBTableCreator::dropTable( ) { return 1; }

DBTableCreator::~DBTableCreator( ) { db.closeDb( ); }

bool DBTableCreator::queryToDb( const QString &queryString ) {
  QSqlQuery query( db.database( ) );
  return query.exec( queryString );
}

bool DBTableCreator::createDatabase( ) {
  //$ createdb -p 5000 -h eden -T template0 -e demo

  QProcess process;
  // где устанвлена DB !!!
  QObject::connect( &process, QOverload< QProcess::ProcessError >::of( &QProcess::errorOccurred ), this,
		    QOverload<>::of( &DBTableCreator::slotProessError ) );
  process.setProgram( "createdb.exe" );
  process.setNativeArguments( "-p 5432 -h localhost -w bbbbbb" /*+ DBConnectConstatnt::databaseName*/ );
  process.open( );
  // process.start( "C:/PostgreSQL/bin/createdb.exe", QStringList( ) << DBConnectConstatnt::databaseName );
  qDebug( ) << "programm " << process.program( );
  qDebug( ) << "argumenty " << process.nativeArguments( );
  //  if ( process.waitForFinished( 5000 ) ) process.close( );
  return process.waitForFinished( 5000 );
}

bool DBTableCreator::createUser( const QString &userName, const QString &password ) {
  // CREATE USER tes WITH PASSWORD '12345';
  QString qs { "CREATE USER " + userName + " WITH PASSWORD '" + password + "';" };
  qDebug( ) << qs;
  return queryToDb( qs );
}

bool DBTableCreator::createShema( ) {
  QString qs { "CREATE SCHEMA IF NOT EXIST" + DBConnectConstatnt::sheme + ";" };
  return queryToDb( qs );
}

bool DBTableCreator::createTableNationality( ) {
  QString qs { "CREATE TABLE IF NOT EXIST" + DBConnectConstatnt::sheme +
	       ".nationality ("
	       "name varchar(256) NOT NULL,"
	       "PRIMARY KEY (name)"
	       ");" };
  return queryToDb( qs );
}

bool DBTableCreator::createCounter( ) {
  QString qs { "CREATE TABLE IF NOT EXIST" + DBConnectConstatnt::sheme +
	       ".country ("
	       "name varchar(64) NOT NULL,"
	       "phonecode varchar(8) NOT NULL,"
	       "abbriviated varchar(4) NOT NULL,"
	       "nds_vat numeric(4,2) NOT NULL,"
	       "UNIQUE(name, phonecode, abbriviated),"
	       "PRIMARY KEY (name)"
	       ");" };
  return queryToDb( qs );
}

bool DBTableCreator::createLandTable( ) { return 1; }

bool DBTableCreator::createAutoBrandTable( ) { return 1; }

bool DBTableCreator::createAdressTable( ) { return 1; }

void DBTableCreator::slotProessError( ) { qDebug( ) << "ERROR PROCESS"; }

bool DBTableCreator::createClientTable( ) { return 1; }
