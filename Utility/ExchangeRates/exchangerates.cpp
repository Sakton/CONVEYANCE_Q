#include "exchangerates.h"

#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include "Utility/AllConstants.h"
#include "../Network/downloader.h"

ExchangeRates::ExchangeRates(QObject* parent) : QObject(parent), dwn{ new DownLoader } {
  connect( dwn, QOverload<>::of( &DownLoader::signalByteArray ),
           this, QOverload<>::of( &ExchangeRates::slotReadData ) );
}

ExchangeRates::~ExchangeRates() {
  dwn->deleteLater();
}

//void ExchangeRates::replyFinished(QNetworkReply* rep) {
//  qDebug() << "ExchangeRates::replyFinished";
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
// }

//void ExchangeRates::slotReadyRead() {
//  // qDebug() << "ExchangeRates::slotReadyRead";
//  // reply = net->get();
//}

//void ExchangeRates::slotFinished()
//{
//  qDebug() << "ExchangeRates::slotFinished() " << rep->get()->readAll();
//}

//void ExchangeRates::slotError(QNetworkReply::NetworkError err)
//{
//  qDebug() << "ExchangeRates::slotError() errCode  = " << err;
//}

void ExchangeRates::dateCours(QDate data) {
  //  data = data.addDays( -1 );
  QUrl url = QLatin1String(AllConstatnts::NARODOWY_BANK_POLSKI) +
             QLatin1String(AllConstatnts::ISO_CODE_EURO) +
             data.toString("yyyy-MM-dd") +
             QLatin1String(AllConstatnts::FORMAT_JSON);
  dwn->download(url);
  
  //  qDebug( ) << "url = " << url;
  //  net->get( QNetworkRequest( url ) );
  //  qDebug( ) << "net = " << net;
  
  //  reply = net->get(QNetworkRequest(url));
  
  //rep = ConveyanceNetwork::getNetworkManager()->get( QNetworkRequest(url) );
  //  connect(rep, QOverload<>::of( &QNetworkReply::readyRead ), this, QOverload<>::of( &ExchangeRates::slotFinished ));
  //  connect( rep, QOverload<QNetworkReply::NetworkError>::of( &QNetworkReply::errorOccurred ), this, QOverload<QNetworkReply::NetworkError>::of( &ExchangeRates::slotError ) );
}

void ExchangeRates::slotReadData()
{
  qDebug() << "ExchangeRates::slotReadData() ptr ";
  auto res = dwn->getAnswer();
}
