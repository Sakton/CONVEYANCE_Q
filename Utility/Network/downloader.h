#ifndef DOWNLOADER_H
#define DOWNLOADER_H
#include <QNetworkAccessManager>
#include <QObject>
#include <QScopedPointer>
#include <QUrl>
#include <memory>

class QNetworkAccessManager;
class QNetworkReply;

class DownLoader : public QObject
{
  Q_OBJECT
  
 public:
  explicit DownLoader( QObject *parent = nullptr );
  void download( QUrl url );
  
 public slots:
  void slotFinished( QNetworkReply *rep );
  void slotReadyRead();
  QByteArray getAnswer();
  
 signals:
  void signalByteArray(  );
 
 private:
  QNetworkAccessManager net;
  std::unique_ptr<QByteArray> answer;
};

#endif // DOWNLOADER_H
