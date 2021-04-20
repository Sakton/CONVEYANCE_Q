#ifndef EXCHANGERATES_H
#define EXCHANGERATES_H
#include <QDate>
#include <QObject>

class QNetworkAccessManager;
class DownLoader;

class ExchangeRates : public QObject {
    Q_OBJECT

public:
    ExchangeRates( QObject *parent = nullptr );
    virtual ~ExchangeRates( );

    void dateCours( QDate date );

public slots:
    void slotData( );
    void slotErrorCours( );

private:
    QString cours( const QByteArray &arr );
    void sendToServer( QDate date );
    QDate correctDataToCours( QDate currentDate );

signals:
    void signalCurrentCours( double );

private:
    DownLoader *dwn;
    QByteArray data_;
    double currentCours;
    static int countSend;
    QDate date_;
};

#endif  // EXCHANGERATES_H
