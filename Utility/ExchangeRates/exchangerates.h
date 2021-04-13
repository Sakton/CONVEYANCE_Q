#ifndef EXCHANGERATES_H
#define EXCHANGERATES_H
#include <QDate>
#include <QNetworkReply>
#include <QObject>

class QNetworkAccessManager;
class DownLoader;

class ExchangeRates : public QObject {
  Q_OBJECT
  
 public:
  ExchangeRates( QObject* parent = nullptr );
  ~ExchangeRates();
  
  void dateCours(QDate data);
  void QueryNet(const QString* q);
  
 public slots:
  void slotReadData();

 private:
  DownLoader *dwn;
};

#endif  // EXCHANGERATES_H
