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

ExchangeRates::ExchangeRates(QObject* parent) : QObject(parent), dwn{ new DownLoader } {
  connect(dwn, QOverload<>::of( &DownLoader::signalByteArray ), this, QOverload<>::of( &ExchangeRates::slotData ));
}

ExchangeRates::~ExchangeRates() {
}

void ExchangeRates::dateCours(QDate data) {
  sendToServer(data);
}

void ExchangeRates::slotData()
{
  auto res = dwn->getAnswer();
  qDebug() << "ExchangeRates::slotReadData() res =  " << res;
  cours(res);
}

QString ExchangeRates::cours(const QByteArray &arr)
{
  QRegularExpression expr;
  expr.setPattern("(\\d.\\d\\d\\d\\d)");
  QString s = QString(arr);
  QRegularExpressionMatch xx = expr.match(QString(arr));
  currentCours = xx.captured().toDouble();
  emit signalCurrentCours( currentCours );
  return xx.captured(1);
}

void ExchangeRates::sendToServer(QDate data)
{
  data = correctDataToCours(data);
  QUrl url = QLatin1String(AllConstatnts::NARODOWY_BANK_POLSKI) +
             QLatin1String(AllConstatnts::ISO_CODE_EURO) +
             data.toString("yyyy-MM-dd") +
             QLatin1String(AllConstatnts::FORMAT_JSON);
  dwn->download(url);
}

QDate ExchangeRates::correctDataToCours(QDate currentDate)
{
  auto day = currentDate.dayOfWeek();
  if( day == 1 ) currentDate = currentDate.addDays(-3);
  if( day == 6 ) currentDate = currentDate.addDays(-1);
  if( day == 7 ) currentDate = currentDate.addDays(-2);
  return currentDate;
}
