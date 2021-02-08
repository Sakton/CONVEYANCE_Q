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

  // TODO как то тут громоздко!!!

  queries.push_back(
      "CREATE TABLE adress ("
      "id SERIAL,"
      "type_adress text,"
      "index_adress text,"
      "sity_adress text,"
      "adress_adress text,"
      "land_adress text)" );

  queries.push_back(
      "CREATE TABLE autopark ("
      "id SERIAL,"
      "year_autopark date,"
      "name_auto_autopark text,"
      "year_of_issue_data_autopark date,"
      "vin_autopark text,"
      "eco_class_autopark text,"
      "next_tech_inpection date,"
      "enable_reminder_autopark smallint,"
      "lenth_cargon_autopark integer,"
      "width_cargon_autopark text,"
      "height_cargon_autopark text,"
      "wolume_cargoon_autopark text,"
      "maximum_carring_autopark integer,"
      "tat_lift_auto_autopark smallint,"
      "comments_autopark text)" );

  queries.push_back(
      "CREATE TABLE blacklist ("
      " id SERIAL,"
      "company_name text,"
      "company_nipb text,"
      "sity_conpany text,"
      "date_add date,"
      "why text)" );

  // TODO оширбка
  queries.push_back(
      "CREATE TABLE client ( "
      "id SERIAL,"
      "company_name text,"
      "company_nipb text,"
      "sity_conpany text,"
      "date_add date,"
      "why text)" );

  queries.push_back(
      "CREATE TABLE driver ( "
      "id SERIAL,"
      "family text,"
      "phone text,"
      "nationality text,"
      "language text,"
      "license text)" );

  queries.push_back(
      "CREATE TABLE land ("
      "id SERIAL,"
      "name text,"
      "phone_code text,"
      "abbreviated text,"
      "vat_rate text)" );

  queries.push_back(
      "CREATE TABLE note ( "
      "id SERIAL,"
      "date_note date,"
      "contactor text,"
      "contract text,"
      "invoice_vat text,"
      "requires_date date,"
      "termin text,"
      "summ text,"
      "currency text)" );

  queries.push_back(
      "CREATE TABLE orders ( "
      "id SERIAL,"
      "date_order date,"
      "place text,"
      "contract text,"
      "number text,"
      "customer date,"
      "driver text,"
      "contacts text,"
      "price text,"
      "period text,"
      "currency text,"
      "arrival text,"
      "route text,"
      "rate text,"
      "max_time text,"
      "copy_cmr text,"
      "order_contract_original integer,"
      "text_note text)" );

  queries.push_back(
      "CREATE TABLE payment ("
      "id SERIAL,"
      "date_payment date,"
      "counter_party text,"
      "base_document text,"
      "number_document text,"
      "date_receipt date,"
      "gross text,"
      "currency_gross text,"
      "net text,"
      "currency_net text,"
      "vat text,"
      "currency_vat text)" );

  queries.push_back(
      "CREATE TABLE payment ("
      "id SERIAL,"
      "order_post text,"
      "code_post text,"
      "data_send date,"
      "data_reciever date,"
      "answer_api text,"
      "type_post text,"
      "post_ofice text,"
      "priority text,"
      "delievered text)" );

  if ( !db.openDb( ) ) {
    // TODO выкинуть исключение (ошибка) ???
    qDebug( ) << "NOT OPEN DB";
  }
  QSqlQuery query( db.database( ) );
  for ( auto &q : queries ) {
    if ( !query.exec( q ) ) return false;
  }
  db.closeDb( );
  return true;
}

bool DBTableCreator::dropTable( ) {
  QString str { "DROP TABLE adress, autopark, blacklist, client, driver, land, note, orders" };
  QSqlQuery query( db.database( ) );
  return query.exec( str );
}
