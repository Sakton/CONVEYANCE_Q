#include "modelorderdata.h"

#include <QBrush>
#include <QDateEdit>
#include <QSqlError>
#include <QSqlQuery>

ModelOrderData::ModelOrderData( QObject *parent )
    : QAbstractTableModel( parent ) {
  selectFromDb( );
}

QVariant ModelOrderData::data( const QModelIndex &index, int role ) const {
  if ( role == Qt::TextAlignmentRole ) return Qt::AlignCenter;
  if ( role == Qt::DisplayRole ) {
    int  col  = index.column( );
    auto line = tableData_.at( index.row( ) );
    switch ( col ) {
      case 0: return line.at( "id" );
      case 1: return line.at( "number_contract" );
      case 2: return line.at( "number_orders" );
      case 3: return line.at( "price" );
      case 4: return line.at( "valuta" );
      case 5: {
        QDate d = QDate::fromString( line.at( "date_create" ),
                                     Qt::DateFormat::ISODate );
        return d.toString( Qt::DateFormat::RFC2822Date );
      }
      case 6: return line.at( "driver" );
      case 7: return line.at( "exchange_rates_eu_pl" );
      case 8: return line.at( "termin_oplaty" );
    }
  }
  return { };
}

QVariant ModelOrderData::headerData( int section, Qt::Orientation orientation,
                                     int role ) const {
  bool predicat =
      Qt::Orientation::Horizontal == orientation && role == Qt::DisplayRole;
  if ( predicat ) {
    switch ( section ) {
      case 0: return tr( "id" );
      case 1: return tr( "Номер Договора" );
      case 2: return tr( "Номер Ордера" );
      case 3: return tr( "Цена" );
      case 4: return tr( "Валюта Договора" );
      case 5: return tr( "Дата" );
      case 6: return tr( "Водитель" );
      case 7: return tr( "Почта" );
      case 8: return tr( "Термин оплаты" );
    }
  }

  return QAbstractTableModel::headerData( section, orientation, role );
}

int ModelOrderData::rowCount( const QModelIndex & ) const {
  return tableData_.size( );
}

int ModelOrderData::columnCount( const QModelIndex & ) const { return 8; }

void ModelOrderData::selectFromDb( ) {
  QString   qs = "SELECT * FROM conveyance.orders;";
  QSqlQuery query;
  if ( !query.exec( qs ) )
    qDebug( ) << "EERROORR " << query.lastError( ).text( );
  while ( query.next( ) ) {
    LineHash tmp;
    tmp[ "id" ]              = query.value( "id" ).toString( );
    tmp[ "number_contract" ] = query.value( "number_contract" ).toString( );
    tmp[ "post" ] = tmp[ "client" ] = query.value( "client" ).toString( );
    tmp[ "price" ]                  = query.value( "price" ).toString( );
    tmp[ "valuta" ]                 = query.value( "valuta" ).toString( );
    tmp[ "driver" ]                 = query.value( "driver" ).toString( );
    tmp[ "date_create" ]            = query.value( "date_create" ).toString( );
    tmp[ "termin_oplaty" ] = query.value( "termin_oplaty" ).toString( );
    tmp[ "exchange_rates_eu_pl" ] =
        query.value( "exchange_rates_eu_pl" ).toString( );
    tmp[ "number_orders" ]    = query.value( "number_orders" ).toString( );
    tmp[ "date_create" ]      = query.value( "date_create" ).toString( );
    tableData_[ query.at( ) ] = std::move( tmp );
  }
}
