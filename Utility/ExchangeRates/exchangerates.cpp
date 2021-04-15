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
//  connect( dwn, QOverload<>::of( &DownLoader::signalByteArray ),
//           this, QOverload<>::of( &ExchangeRates::slotReadData ) );
}

ExchangeRates::~ExchangeRates() {
}

void ExchangeRates::dateCours(QDate data) {
  //  data = data.addDays( -1 );
  QUrl url = QLatin1String(AllConstatnts::NARODOWY_BANK_POLSKI) +
             QLatin1String(AllConstatnts::ISO_CODE_EURO) +
             data.toString("yyyy-MM-dd") +
             QLatin1String(AllConstatnts::FORMAT_JSON);
  dwn->download(url);
}

void ExchangeRates::slotReadData()
{
  qDebug() << "ExchangeRates::slotReadData() ptr ";
  //auto res = dwn->getAnswer();
  
}
