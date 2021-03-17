#include "conveyancesqldatabase.h"

#include <QMessageBox>

#include "../AllConstants.h"
#include "QSqlError"

// TODO тут можно добавить запись в настройки и чтение с них

ConveyanceSQLDatabase::ConveyanceSQLDatabase( ) {
  QSqlDatabase db = QSqlDatabase::addDatabase( AllConstatnts::DRIVER_BASE );
  if ( !db.isOpen( ) ) {
    db.setHostName( AllConstatnts::HOST_NAME );
    db.setPort( AllConstatnts::PORT );
    db.setDatabaseName( AllConstatnts::DB_NAME );
    db.setUserName( AllConstatnts::USER_NAME );
    db.setPassword( AllConstatnts::PASSWORD );
    if ( !db.open( ) ) {
      QMessageBox::critical( nullptr, "CRITICAL DB", db.lastError( ).text( ) );
    }
  }
}
