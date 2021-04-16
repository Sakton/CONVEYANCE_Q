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


 //TODO тут сделать метод получающий дату, и возвращающий курс
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
  qDebug() << "cours = " << xx.captured(1);
  return xx.captured(1);
}

void ExchangeRates::sendToServer(QDate data)
{
  QUrl url = QLatin1String(AllConstatnts::NARODOWY_BANK_POLSKI) +
             QLatin1String(AllConstatnts::ISO_CODE_EURO) +
             data.toString("yyyy-MM-dd") +
             QLatin1String(AllConstatnts::FORMAT_JSON);
  dwn->download(url);
}
