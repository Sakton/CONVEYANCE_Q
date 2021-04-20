#include "exchangerates.h"

#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QRegularExpression>

#include "../Network/downloader.h"
#include "Utility/AllConstants.h"

int ExchangeRates::countSend = 0;

ExchangeRates::ExchangeRates( QObject* parent ) :
    QObject( parent ), dwn { new DownLoader } {
    connect( dwn, QOverload<>::of( &DownLoader::signalByteArray ), this, QOverload<>::of( &ExchangeRates::slotData ) );
    connect( dwn, QOverload<>::of( &DownLoader::signalError ), this, QOverload<>::of( &ExchangeRates::slotErrorCours ) );
}

ExchangeRates::~ExchangeRates() {
}

void ExchangeRates::dateCours( QDate date ) {
    date_ = date;
    sendToServer( date_ );
}

void ExchangeRates::slotData( ) {
    auto res = dwn->getAnswer( );
    cours( res );
}

void ExchangeRates::slotErrorCours( ) {
    //слот отвечает за отматывание дней назад и отправку повторных запросов, организация цикла через события
    if ( countSend < 14 ) {
        date_ = date_.addDays( -1 );
        sendToServer( date_ );
    }
}

QString ExchangeRates::cours( const QByteArray& arr ) {
    QRegularExpression expr;
    expr.setPattern( "(\\d.\\d\\d\\d\\d)" );
    QString s = QString( arr );
    QRegularExpressionMatch xx = expr.match( QString( arr ) );
    currentCours = xx.captured( ).toDouble( );
    emit signalCurrentCours( currentCours );
    return xx.captured( 1 );
}

void ExchangeRates::sendToServer( QDate date ) {
    QUrl url = QLatin1String( AllConstatnts::NARODOWY_BANK_POLSKI ) + QLatin1String( AllConstatnts::ISO_CODE_EURO ) + date.toString( "yyyy-MM-dd" ) + QLatin1String( AllConstatnts::FORMAT_JSON );
    qDebug( ) << url;
    dwn->download( url );
}
