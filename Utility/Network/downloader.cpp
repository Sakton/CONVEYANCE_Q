#include "downloader.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

DownLoader::DownLoader(QObject *parent) : QObject{ parent }, answer{ nullptr }
{
  connect( &net, QOverload< QNetworkReply* >::of( &QNetworkAccessManager::finished ),
           this, QOverload<QNetworkReply*>::of( &DownLoader::slotFinished ));
}

void DownLoader::download(QUrl url)
{
  //TODO попадает сюда
  QNetworkReply *rep = net.get( QNetworkRequest(url) );
  connect(rep, QOverload<>::of( &QNetworkReply::readyRead ), this, QOverload<>::of( &DownLoader::slotReadyRead ) );
}

void DownLoader::slotFinished(QNetworkReply *rep)
{
  // qDebug() << "DownLoader::slotFinished";
  if( rep->error() != QNetworkReply::NoError ) {
   //  qDebug() << "ERROR REPLY";
  } else {
    emit signalByteArray( );
    answer = std::make_unique<QByteArray>(rep->readAll());
    // qDebug() << "READ ALL = " << *answer.get();
  }
  rep->deleteLater();
}

void DownLoader::slotReadyRead()
{
  qDebug() << "DownLoader::slotReadyRead";
}

QByteArray DownLoader::getAnswer()
{
  qDebug() << "DownLoader::getAnswer() = ";
  return *answer.get();
}
