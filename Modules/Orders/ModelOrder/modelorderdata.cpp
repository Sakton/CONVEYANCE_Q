#include "modelorderdata.h"

#include <QBrush>
#include <QSqlError>
#include <QSqlQuery>

void ModelOrderData::init( ) {
  setTable( QLatin1String( AllConstatnts::DB_SHEME ) + ".orders" );
  setEditStrategy( QSqlTableModel::OnManualSubmit );
  select( );
}

ModelOrderData::ModelOrderData( QObject *parent ) : QSqlTableModel( parent ) {
  init( );
}

QVariant ModelOrderData::data( const QModelIndex &index, int role ) const {
  if ( role == Qt::TextAlignmentRole ) return Qt::AlignCenter;
  return QSqlTableModel::data( index, role );
}

QVariant ModelOrderData::headerData( int section, Qt::Orientation orientation,
                                     int role ) const {
  //  if ( role == Qt::ForegroundRole &&
  //       orientation == Qt::Orientation::Horizontal )
  //    return QBrush( QColor( 255, 0, 0 ) );

  if ( section == 0 && Qt::Orientation::Horizontal == orientation &&
       role == Qt::DisplayRole )
    return tr( "id" );
  if ( section == 1 && Qt::Orientation::Horizontal == orientation &&
       role == Qt::DisplayRole )
    return tr( "Номер" );
  if ( section == 2 && Qt::Orientation::Horizontal == orientation &&
       role == Qt::DisplayRole )
    return tr( "Клиент" );
  if ( section == 3 && Qt::Orientation::Horizontal == orientation &&
       role == Qt::DisplayRole )
    return tr( "Цена" );
  // TODO HeaderData
  // if ( section == 0 && role == Qt::BackgroundRole ) return QBrush( Qt::green
  // );

  if ( role == Qt::BackgroundRole ) {
    QVariant value;
    if ( section == 1 )
      value.setValue( QBrush( Qt::blue ) );
    else
      value.setValue( QBrush( Qt::red ) );
    return value;
  };

  return QSqlTableModel::headerData( section, orientation, role );
}
