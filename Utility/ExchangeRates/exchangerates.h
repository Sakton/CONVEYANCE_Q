#ifndef EXCHANGERATES_H
#define EXCHANGERATES_H
#include <QDate>
#include <QNetworkReply>
#include <QObject>

class QNetworkAccessManager;

class ExchangeRates : public QObject {
  Q_OBJECT
  
 public:
  ExchangeRates(QObject* parent = nullptr);
  ~ExchangeRates();
  
  void dateCours(QDate data);
  void QueryNet(const QString* q);
  
 public slots:
  void replyFinished(QNetworkReply* rep);
  void slotReadyRead();
  void slotFinished();
  void slotError(QNetworkReply::NetworkError err);
  
 signals:
  void signalDateCoursBankNBP(double);  //кому надо то пусть ловит
  
 private:
  //  QNetworkAccessManager* net;
  //  QNetworkReply* reply;
  QScopedPointer<QNetworkReply, QScopedPointerDeleteLater> * rep;
};

#endif  // EXCHANGERATES_H
