#include "modelorderdata.h"

#include <QBrush>
#include <QDateEdit>
#include <QSqlError>
#include <QSqlQuery>

#include "../OrderConstatnt/dbcolumnnames.h"

ModelOrderData::ModelOrderData( QObject* parent ) :
    QAbstractTableModel( parent ) {
    selectFromDb( );
}

QVariant ModelOrderData::data( const QModelIndex& index, int role ) const {
    if ( role == Qt::TextAlignmentRole )
        return Qt::AlignCenter;
    if ( role == Qt::DisplayRole ) {
        int col = index.column( );
        auto line = tableData_.at( index.row( ) );
        switch ( col ) {
        case 0:
            return line.at( orders::ID );
        case 1:
            return line.at( orders::NUMBER_CONTRACT );
        case 2:
            return line.at( orders::NUMBER_ORDERS );
        case 3:
            return line.at( orders::PRICE );
        case 4:
            return line.at( orders::VALYTA );
        case 5: {
            QDate d = QDate::fromString( line.at( orders::DATE_CREATE ),
                Qt::DateFormat::ISODate );
            return d.toString( Qt::DateFormat::RFC2822Date );
        }
        case 6:
            return line.at( orders::DRIVER );
        case 7:
            return line.at( orders::EXCHANGE );
        case 8:
            return line.at( orders::POSTAL_TRANSFER );
        }
    }
    return { };
}

QVariant ModelOrderData::headerData( int section, Qt::Orientation orientation,
    int role ) const {
    bool predicat = Qt::Orientation::Horizontal == orientation && role == Qt::DisplayRole;
    if ( predicat ) {
        switch ( section ) {
        case 0:
            return tr( "id" );
        case 1:
            return tr( "Номер Договора" );
        case 2:
            return tr( "Номер Ордера" );
        case 3:
            return tr( "Цена" );
        case 4:
            return tr( "Валюта Договора" );
        case 5:
            return tr( "Дата" );
        case 6:
            return tr( "Водитель" );
        case 7:
            return tr( "Курс EURO" );
        case 8:
            return tr( "Термин оплаты" );
        }
    }

    return QAbstractTableModel::headerData( section, orientation, role );
}

int ModelOrderData::rowCount( const QModelIndex& ) const {
    return tableData_.size( );
}

int ModelOrderData::columnCount( const QModelIndex& ) const {
    // TODO !!!! magik literal
    return 9;
}

void ModelOrderData::selectFromDb( ) {
    QString columns = QString( orders::ID ) + ","
        + QString( orders::NUMBER_CONTRACT ) + ","
        + QString( orders::NUMBER_ORDERS ) + ","
        + QString( orders::PRICE ) + ","
        + QString( orders::VALYTA ) + ","
        + QString( orders::DATE_CREATE ) + ","
        + QString( orders::DRIVER ) + ","
        + QString( orders::EXCHANGE ) + ","
        + QString( orders::POSTAL_TRANSFER );

    QString qs = "SELECT " + columns + " FROM conveyance.orders ORDER BY " + QString( orders::ID ) + " DESC;";
    QSqlQuery query;
    if ( !query.exec( qs ) )
        qDebug( ) << "EERROORR " << query.lastError( ).text( );
    while ( query.next( ) ) {

        LineHash tmp;
        tmp[ orders::ID ] = query.value( "order_id" ).toString( );
        tmp[ orders::NUMBER_CONTRACT ] = query.value( orders::NUMBER_CONTRACT ).toString( );
        tmp[ orders::NUMBER_ORDERS ] = query.value( orders::NUMBER_ORDERS ).toString( );
        tmp[ orders::PRICE ] = query.value( orders::PRICE ).toString( );
        tmp[ orders::VALYTA ] = query.value( orders::VALYTA ).toString( );
        tmp[ orders::DATE_CREATE ] = query.value( orders::DATE_CREATE ).toString( );
        tmp[ orders::DRIVER ] = query.value( orders::DRIVER ).toString( );
        tmp[ orders::EXCHANGE ] = query.value( orders::EXCHANGE ).toString( );
        tmp[ orders::POSTAL_TRANSFER ] = query.value( orders::POSTAL_TRANSFER ).toString( );
        tableData_[ query.at( ) ] = std::move( tmp );
    }
}
