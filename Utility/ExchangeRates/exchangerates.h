#ifndef EXCHANGERATES_H
#define EXCHANGERATES_H
#include <QDate>
#include <QObject>

class QNetworkAccessManager;
class QNetworkReply;

class ExchangeRates : public QObject {
  Q_OBJECT

 public:
  ExchangeRates(QObject* parent = nullptr);
  ~ExchangeRates();

  void dateCours(QDate data);

 public slots:
  void replyFinished(QNetworkReply* rep);
  void slotReadyRead();

 signals:
  void signalDateCoursBankNBP(double);  //кому надо то пусть ловит

 private:
  QNetworkAccessManager* net;
  QNetworkReply* reply;
};

#endif  // EXCHANGERATES_H
