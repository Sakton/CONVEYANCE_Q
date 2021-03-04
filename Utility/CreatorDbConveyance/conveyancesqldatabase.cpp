#include "conveyancesqldatabase.h"

#include <QMessageBox>

#include "../AllConstants.h"
#include "QSqlError"

// TODO тут можно добавить запись в настройки и чтение с них

ConveyanceSQLDatabase::ConveyanceSQLDatabase( ) {
  QSqlDatabase db = QSqlDatabase::addDatabase( AllConstatnts::driverBase );
  if ( !db.isOpen( ) ) {
    db.setHostName( AllConstatnts::hostName );
    db.setPort( AllConstatnts::port );
    db.setDatabaseName( AllConstatnts::dbName );
    db.setUserName( AllConstatnts::userName );
    db.setPassword( AllConstatnts::password );
    if ( !db.open( ) ) {
      QMessageBox::critical( nullptr, "CRITICAL DB", db.lastError( ).text( ) );
    }
  }
}
