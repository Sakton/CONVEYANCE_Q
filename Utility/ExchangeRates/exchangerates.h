#ifndef EXCHANGERATES_H
#define EXCHANGERATES_H
#include <QDate>
#include <QObject>

class QNetworkAccessManager;
class DownLoader;

class ExchangeRates : public QObject {
  Q_OBJECT
  
 public:
  ExchangeRates( QObject* parent = nullptr );
  virtual ~ExchangeRates();

  void dateCours(QDate data);
  
 public slots:
  void slotData();
  
 private:
  QString cours(const QByteArray &arr);
  void sendToServer(QDate data);
  QDate correctDataToCours(QDate currentDate );
  
 signals:
  void signalCurrentCours(double);

 private:
  DownLoader *dwn;
  QByteArray data_;
  double currentCours;
};

#endif  // EXCHANGERATES_H
