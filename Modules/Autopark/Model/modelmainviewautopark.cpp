#include "modelmainviewautopark.h"
#include <QSqlError>
#include <QSqlQuery>

ModelMainViewAutopark::ModelMainViewAutopark( QObject* parent )
    : QAbstractListModel( parent ) {
  // readDataFrokmDb( );
}

// void ModelMainViewAutopark::readDataFrokmDb( ) {
//  QSqlQuery query;
//  if ( query.exec( "SELECT * FROM " + QLatin1String( AllConstatnts::DB_SHEME )
//  +
//                   ".autopark;" ) ) {
//    while ( query.next( ) ) {
//      MapAuto tmp;
//      // TODO может список полей в БД
//      tmp[ "name_brand" ] = query.value( "name_brand" ).toString( );
//      tmp[ "series_brand" ] = query.value( "series_brand" ).toString( );
//      tmp[ "marka_brand" ] = query.value( "marka_brand" ).toString( );
//      tmp[ "issue" ] = query.value( "issue" ).toString( );
//      tmp[ "auto_counry_number" ] =
//          query.value( "auto_counry_number" ).toString( );
//      tmp[ "vin" ] = query.value( "vin" ).toString( );
//      tmp[ "eco" ] = query.value( "eco" ).toString( );
//      tmp[ "inspection" ] = query.value( "inspection" ).toString( );
//      tmp[ "reminder" ] = query.value( "reminder" ).toString( );
//      tmp[ "days_reminder" ] = query.value( "days_reminder" ).toString( );
//      tmp[ "lenth" ] = query.value( "lenth" ).toString( );
//      tmp[ "width" ] = query.value( "width" ).toString( );
//      tmp[ "height" ] = query.value( "height" ).toString( );
//      tmp[ "space" ] = query.value( "space" ).toString( );
//      tmp[ "carring" ] = query.value( "carring" ).toString( );
//      tmp[ "lift" ] = query.value( "lift" ).toString( );
//      tmp[ "commentary" ] = query.value( "commentary" ).toString( );
//      tmp[ "__ThisSessionEdit__" ] =
//          QLatin1String( "0" );  //поле для отметки было ли изменение
//      data_[ tmp[ "vin" ] ] = tmp;
//    }
//  } else {
//    qDebug( ) << query.lastError( ).text( );
//  }
//}

int ModelMainViewAutopark::rowCount( const QModelIndex& parent ) const {
  return data_.size( );
  Q_UNUSED( parent )
}

QVariant ModelMainViewAutopark::data( const QModelIndex& index,
                                      int role ) const {
  return { };
}

// Qt::ItemFlags ModelMainViewAutopark::flags( const QModelIndex& index ) const
// {
//  return QAbstractItemModel::flags( index );
//}
