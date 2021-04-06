#include "modelorderdata.h"

#include <QBrush>
#include <QSqlError>
#include <QSqlQuery>

void ModelOrderData::init( ) {
  setTable( QLatin1String( AllConstatnts::DB_SHEME ) + ".orders" );
  setEditStrategy( QSqlTableModel::OnManualSubmit );
  select( );
  setHeaderData( 0, Qt::Horizontal, tr( "id" ) );
  setHeaderData( 1, Qt::Horizontal, tr( "Номер" ) );
  setHeaderData( 2, Qt::Horizontal, tr( "Клиент" ) );
  setHeaderData( 3, Qt::Horizontal, tr( "Цена" ) );
}

ModelOrderData::ModelOrderData( QObject *parent ) : QSqlTableModel( parent ) {
  init( );
}

QVariant ModelOrderData::data( const QModelIndex &index, int role ) const {
  if ( role == Qt::TextAlignmentRole ) return Qt::AlignCenter;
  // if ( role == Qt::BackgroundRole ) return QBrush( QColor( 255, 0, 0 ) );
  return QSqlTableModel::data( index, role );
}

QVariant ModelOrderData::headerData( int section, Qt::Orientation orientation,
                                     int role ) const {
  //  if ( role == Qt::ForegroundRole &&
  //       orientation == Qt::Orientation::Horizontal )
  //    return QBrush( QColor( 255, 0, 0 ) );

  //  model->setHeaderData( 0, Qt::Horizontal, tr( "id" ) );
  //  model->setHeaderData( 1, Qt::Horizontal, tr( "Номер" ) );
  //  model->setHeaderData( 2, Qt::Horizontal, tr( "Клиент" ) );
  //  model->setHeaderData( 3, Qt::Horizontal, tr( "Цена" ) );

  if ( section == 1 && Qt::Orientation::Horizontal == orientation )
    return tr( "Номер" );
  if ( section == 2 && Qt::Orientation::Horizontal == orientation )
    return tr( "Клиент" );
  if ( section == 3 && Qt::Orientation::Horizontal == orientation )
    return tr( "Цена" );

  if ( role == Qt::BackgroundRole ) return QBrush( Qt::gray );
  return QSqlTableModel::headerData( section, orientation, role );
}
