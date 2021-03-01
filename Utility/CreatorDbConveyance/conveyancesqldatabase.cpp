#include "conveyancesqldatabase.h"

#include <QMessageBox>
#include <QSqlRecord>

#include "../AllConstants.h"
#include "QSqlError"
#include "QSqlQuery"
#include "querydriver.h"

// TODO тут можно добавить запись в настройки и чтение с них

ConveyanceSQLDatabase::ConveyanceSQLDatabase( ) : db { QSqlDatabase::addDatabase( AllConstatnts::driverBase ) } { openDb( ); }

ConveyanceSQLDatabase::~ConveyanceSQLDatabase( ) { db.close( ); }

bool ConveyanceSQLDatabase::openDb( ) {
  db.setHostName( AllConstatnts::hostName );
  db.setPort( AllConstatnts::port );
  db.setDatabaseName( AllConstatnts::dbName );
  db.setUserName( AllConstatnts::userName );
  db.setPassword( AllConstatnts::password );
  if ( !db.open( ) ) {
    QMessageBox::critical( nullptr, "ERROR OPEN DB", db.lastError( ).text( ) );
  }
  return true;
}

void ConveyanceSQLDatabase::closeDb( ) { db.close( ); }

const QSqlDatabase &ConveyanceSQLDatabase::database( ) const { return db; }
