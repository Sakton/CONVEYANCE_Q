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
  bool predicat =
      Qt::Orientation::Horizontal == orientation && role == Qt::DisplayRole;
  if ( section == 0 && predicat ) return tr( "id" );
  if ( section == 1 && predicat ) return tr( "Номер Договора" );
  if ( section == 2 && predicat ) return tr( "Заказчик" );
  if ( section == 3 && predicat ) return tr( "Цена" );
  if ( section == 4 && predicat ) return tr( "Валюта Договора" );
  if ( section == 5 && predicat ) return tr( "Водитель" );
  if ( section == 6 && predicat ) return tr( "Почта" );
  if ( section == 7 && predicat ) return tr( "Термин оплаты" );

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
