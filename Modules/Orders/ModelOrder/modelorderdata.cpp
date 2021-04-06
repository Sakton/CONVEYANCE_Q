#include "modelorderdata.h"

#include <QSqlError>
#include <QSqlQuery>

ModelOrderData::ModelOrderData( QObject *parent ) : QSqlTableModel( parent ) {}

int ModelOrderData::rowCount( const QModelIndex & /*parent*/ ) const {
  return tables_.size( );
}

int ModelOrderData::columnCount( const QModelIndex & /*parent*/ ) const {
  return 4;
}

QVariant ModelOrderData::data( const QModelIndex &index, int role ) const {
  if ( !index.isValid( ) ) return { };
  // if ( role ) }
}

void ModelOrderData::readDataFromDb( ) {
  QString qs =
      "SELECT * FROM " + QLatin1String( AllConstatnts::DB_SHEME ) + ".orders;";
  QSqlQuery query;
  if ( !query.exec( qs ) ) {
    qDebug( ) << "ERROR read orders" << query.lastError( ).text( );
  }
  while ( query.next( ) ) {
    AllConstatnts::Line ttt;
    ttt[ "id" ] = query.value( "id" ).toString( );
    ttt[ "number" ] = query.value( "number" ).toString( );
    ttt[ "client" ] = query.value( "client" ).toString( );
    ttt[ "price" ] = query.value( "price" ).toString( );
    qDebug( ) << ttt;
    tables_[ "id" ] = ttt;
  }
}
