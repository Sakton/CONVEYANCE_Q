#include "exchangerates.h"

#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include "Utility/AllConstants.h"
#include "Utility/Network/conveyancenetwork.h"

ExchangeRates::ExchangeRates( QObject* parent )
    : QObject( parent ), net { ConveyanceNetwork::getNetworkManager( ) } {
  connect(
      net, QOverload< QNetworkReply* >::of( &QNetworkAccessManager::finished ),
      this, QOverload< QNetworkReply* >::of( &ExchangeRates::replyFinished ) );
  // slotDateCours( QDate::currentDate( ) );
}

ExchangeRates::~ExchangeRates( ) { net->deleteLater( ); }

void ExchangeRates::replyFinished( QNetworkReply* rep ) {
  qDebug( ) << "rep = " << rep->readAll( );
  //  qDebug( ) << rep->readAll( );
  //  QJsonDocument jDoc       = QJsonDocument::fromJson( rep->readAll( ) );
  //  QJsonObject   o          = jDoc.object( );
  //  QJsonValue    ratesArray = o.value( "rates" );
  //  QJsonObject   ratesObj   = ratesArray[ 0 ].toObject( );
  //  QJsonValue    mid        = ratesObj.value( "mid" );
  //  double        cours      = mid.toDouble( );
  //  qDebug( ) << "ExchangeRates::replyFinished curs = " << cours;
  emit signalDateCoursBankNBP( /*cours*/ 1.1111 );
  // rep->deleteLater( );
}

void ExchangeRates::dateCours( QDate data ) {
  qDebug( ) << "ExchangeRates::dateCours";
  data = data.addDays( -1 );
  QUrl url = QLatin1String( AllConstatnts::NARODOWY_BANK_POLSKI ) +
             QLatin1String( AllConstatnts::ISO_CODE_EURO ) +
             data.toString( "yyyy-MM-dd" ) +
             QLatin1String( AllConstatnts::FORMAT_JSON );
  qDebug( ) << "url = " << url;
  net->get( QNetworkRequest( url ) );
  qDebug( ) << "net = " << net;
}
