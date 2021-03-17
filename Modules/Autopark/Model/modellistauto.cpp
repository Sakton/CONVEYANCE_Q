#include "modellistauto.h"

#include <QSqlError>
#include <QSqlQuery>

#include "Utility/AllConstants.h"

ModelListAuto::ModelListAuto( QObject *parent ) : QAbstractListModel( parent ) {
  QSqlQuery query;
  if ( query.exec( "SELECT vin FROM " +
                   QLatin1String( AllConstatnts::DB_SHEME ) + ".autopark;" ) ) {
    while ( query.next( ) ) listItems << query.value( "vin" ).toString( );
  } else {
    qDebug( ) << query.lastError( );
  }
}

int ModelListAuto::rowCount( const QModelIndex &parent ) const {
  return listItems.size( );
  Q_UNUSED( parent )
}

QVariant ModelListAuto::data( const QModelIndex &index, int role ) const {
  if ( !index.isValid( ) ) return { };
  if ( role == Qt::DisplayRole || role == Qt::EditRole ) return listItems.at( index.row( ) );
  return { };
}

Qt::ItemFlags ModelListAuto::flags( const QModelIndex &index ) const { return ( QAbstractListModel::flags( index ) | Qt::ItemIsEditable ); }

QHash< int, QByteArray > ModelListAuto::roleNames( ) const { return roles; }
