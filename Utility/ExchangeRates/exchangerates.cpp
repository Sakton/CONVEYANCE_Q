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

ExchangeRates::ExchangeRates(QObject* parent) 
    : QObject(parent) {/*,
      net{ConveyanceNetwork::getNetworkManager()},
      reply{nullptr} {
  connect(net, QOverload<QNetworkReply*>::of(&QNetworkAccessManager::finished),
          this, QOverload<QNetworkReply*>::of(&ExchangeRates::replyFinished));*/
  //  connect(reply, QOverload<>::of(&QIODevice::readyRead), this,
  //          QOverload<>::of(&ExchangeRates::slotReadyRead));
  // connect(reply, QOverload<>::of( &QNetworkReply::err ), this,
  // QOverload<>::of());
}

ExchangeRates::~ExchangeRates() {
  // net->deleteLater();
}

void ExchangeRates::replyFinished(QNetworkReply* rep) {
  qDebug() << "ExchangeRates::replyFinished";
  //  //  qDebug( ) << rep->readAll( );
  //  //  QJsonDocument jDoc       = QJsonDocument::fromJson( rep->readAll( ) );
  //  //  QJsonObject   o          = jDoc.object( );
  //  //  QJsonValue    ratesArray = o.value( "rates" );
  //  //  QJsonObject   ratesObj   = ratesArray[ 0 ].toObject( );
  //  //  QJsonValue    mid        = ratesObj.value( "mid" );
  //  //  double        cours      = mid.toDouble( );
  //  //  qDebug( ) << "ExchangeRates::replyFinished curs = " << cours;
  //  emit signalDateCoursBankNBP( /*cours*/ 1.1111 );
  //  // rep->deleteLater( );
}

void ExchangeRates::slotReadyRead() {
  // qDebug() << "ExchangeRates::slotReadyRead";
  // reply = net->get();
}

void ExchangeRates::slotFinished()
{
  qDebug() << "ExchangeRates::slotFinished() " << rep->get()->readAll();
}

void ExchangeRates::slotError(QNetworkReply::NetworkError err)
{
  qDebug() << "ExchangeRates::slotError() errCode  = " << err;
}

void ExchangeRates::dateCours(QDate data) {
  //  data = data.addDays( -1 );
  QUrl url = QLatin1String(AllConstatnts::NARODOWY_BANK_POLSKI) +
             QLatin1String(AllConstatnts::ISO_CODE_EURO) +
             data.toString("yyyy-MM-dd") +
             QLatin1String(AllConstatnts::FORMAT_JSON);
  //  qDebug( ) << "url = " << url;
  //  net->get( QNetworkRequest( url ) );
  //  qDebug( ) << "net = " << net;
  
  //  reply = net->get(QNetworkRequest(url));
  
  rep = ConveyanceNetwork::getNetworkManager()->get( QNetworkRequest(url) );
  connect(rep, QOverload<>::of( &QNetworkReply::readyRead ), this, QOverload<>::of( &ExchangeRates::slotFinished ));
  connect( rep, QOverload<QNetworkReply::NetworkError>::of( &QNetworkReply::errorOccurred ), this, QOverload<QNetworkReply::NetworkError>::of( &ExchangeRates::slotError ) );
  
  qDebug( ) << "ExchangeRates::dateCours rep = " << rep;
}
