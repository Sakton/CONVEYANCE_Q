#include "exchangerates.h"

#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include "Utility/AllConstants.h"

// http://api.nbp.pl/api/exchangerates/rates/A/978/?format=json

ExchangeRates::ExchangeRates( QObject* parent )
    : QObject( parent ), net { new QNetworkAccessManager } {
  connect(
      net, QOverload< QNetworkReply* >::of( &QNetworkAccessManager::finished ),
      this, QOverload< QNetworkReply* >::of( &ExchangeRates::replyFinished ) );

  net->get( QNetworkRequest( QUrl( AllConstatnts::URL_XML_ECB_EUROPA_EU ) ) );
}

ExchangeRates::~ExchangeRates( ) { net->deleteLater( ); }

void ExchangeRates::replyFinished( QNetworkReply* rep ) {
  qDebug( ) << rep->readAll( );
}
