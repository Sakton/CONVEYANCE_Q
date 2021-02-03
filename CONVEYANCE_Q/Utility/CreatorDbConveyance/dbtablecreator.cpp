#include "dbtablecreator.h"

#include <QProcess>
#include <QSqlQuery>
#include <QStringList>
#include <memory>

DBTableCreator::DBTableCreator( ) {
  if ( db.openDb( ) ) {
    // createDb( );
  }
}

bool DBTableCreator::createDb( const QString &nameDb, const QString &nameUser, const QString &password ) {
  // WARNING !!! this absolute path  worked PC
  QString prog = "C:/PostgreSQL/bin/createdb.exe";
  QStringList paramCommandStr;

  std::unique_ptr< QProcess > process;
  process->start( prog );
  // process->startDetached( prog );

  // return createAdressTable( ) && createAutoParkTable( );
  return true;
}

bool DBTableCreator::createAdressTable( ) {
  QString str {
      "CREATE TABLE adress ("
      "id SERIAL,"
      "type_adress text,"
      "index_adress text,"
      "sity_adress text,"
      "adress_adress text,"
      "land_adress text)" };
  QSqlQuery query( db.database( ) );
  return query.exec( str );
}

bool DBTableCreator::createAutoParkTable( ) {
  QString str {
      "CREATE TABLE autopark ( "
      "year_autopark date,"
      "name_auto_autopark text,"
      "year_of_issue_data_autopark date,"
      "vin_autopark text,"
      "eco_class_autopark text,"
      "next_tech_inpection date,"
      "enable_reminder_autopark smallint,"
      "lenth_cargon_autopark integer,"
      "width_cargon_autopark integer,"
      "height_cargon_autopark integer,"
      "wolume_cargoon_autopark integer,"
      "maximum_carring_autopark integer,"
      "tat_lift_auto_autopark smallint,"
      "comments_autopark text"
      " )" };
  QSqlQuery query( db.database( ) );
  return query.exec( str );
}
