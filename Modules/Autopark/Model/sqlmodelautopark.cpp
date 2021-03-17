#include "sqlmodelautopark.h"
#include <QSqlError>
#include <QSqlQuery>

SqlModelAutopark::SqlModelAutopark()
{
  
}

void SqlModelAutopark::selectAll( ) {
  QSqlQuery query;
  // TODO
  query.exec( "SELECT * FROM " + QLatin1String( AllConstatnts::DB_SHEME ) +
              ".autopark;" );
  AllConstatnts::Line tmp;
  while ( query.next( ) ) {
    // TODO может список полей в БД
    tmp[ "name_brand" ] = query.value( "name_brand" );
    tmp[ "series_brand" ] = query.value( "series_brand" );
    tmp[ "marka_brand" ] = query.value( "marka_brand" );
    tmp[ "issue" ] = query.value( "issue" );
    tmp[ "auto_counry_number" ] = query.value( "auto_counry_number" );
    tmp[ "vin" ] = query.value( "vin" );
    tmp[ "eco" ] = query.value( "eco" );
    tmp[ "inspection" ] = query.value( "inspection" );
    tmp[ "reminder" ] = query.value( "reminder" );
    tmp[ "days_reminder" ] = query.value( "days_reminder" ).toString( );
    tmp[ "lenth" ] = query.value( "lenth" );
    tmp[ "width" ] = query.value( "width" );
    tmp[ "height" ] = query.value( "height" );
    tmp[ "space" ] = query.value( "space" );
    tmp[ "carring" ] = query.value( "carring" );
    tmp[ "lift" ] = query.value( "lift" ).toString( );
    tmp[ "commentary" ] = query.value( "commentary" );
    //    tmp[ "__ThisSessionEdit__" ] =
    //        QLatin1String( "0" );  //поле для отметки было ли изменение
    data_[ tmp[ "vin" ].toString( ) ] = tmp;
  }
}

SqlModelAutopark::Table& SqlModelAutopark::dataTable( ) {
  return data_;
}

const SqlModelAutopark::Table& SqlModelAutopark::dataTable( ) const {
  return data_;
}
