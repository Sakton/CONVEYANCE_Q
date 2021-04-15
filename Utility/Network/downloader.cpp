#include "downloader.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

DownLoader::DownLoader(QObject *parent) : QObject{ parent }, net{ nullptr }/*, answer{ new QByteArray }*/
{
  net = new QNetworkAccessManager(this);
  connect( net, QOverload< QNetworkReply* >::of( &QNetworkAccessManager::finished ),
           this, QOverload<QNetworkReply*>::of( &DownLoader::slotFinished ));
}

DownLoader::~DownLoader()
{
  net->deleteLater();
  
}

void DownLoader::download(QUrl url)
{
  //TODO попадает сюда
  // qDebug() << "DownLoader::download(QUrl url) = " << url ;
  QNetworkRequest req(url);
  net->get( req );
  // net.get( req )connect(rep, QOverload<>::of( &QNetworkReply::readyRead ), this, QOverload<>::of( &DownLoader::slotReadyRead ) );
}


void DownLoader::slotFinished(QNetworkReply *rep)
{
 // qDebug() << "DownLoader::slotFinished";
  if( rep->error() != QNetworkReply::NoError ) {
    // qDebug() << "ERROR REPLY";
  } else {
    // answer = std::make_unique<QByteArray>(rep->readAll());
    answer = rep->readAll();
    qDebug() << "ANSWER = " << answer;
    emit signalByteArray( );
  }
  rep->deleteLater();
}

//void DownLoader::slotReadyRead()
//{
//  qDebug() << "DownLoader::slotReadyRead";
//}

QByteArray DownLoader::getAnswer()
{
  //TODO метод вызывается раньше чем ответ прийдет
  qDebug() << "DownLoader::getAnswer() = ";
  // return *answer.get();
  return answer;
}
