#include "downloader.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

DownLoader::DownLoader(QObject *parent) : QObject{ parent }, net{ nullptr } {
  net = new QNetworkAccessManager(this);
  connect( net, QOverload< QNetworkReply* >::of( &QNetworkAccessManager::finished ),
           this, QOverload<QNetworkReply*>::of( &DownLoader::slotFinished ));
}

DownLoader::~DownLoader() {
  net->deleteLater();
}

void DownLoader::download( QUrl url ) {
  QNetworkRequest req( url );
  net->get( req );
}


void DownLoader::slotFinished( QNetworkReply *rep ) {
  if( rep->error() != QNetworkReply::NoError ) {
    qDebug() << "ERROR REPLY";
  } else {
    answer = rep->readAll( );
    emit signalByteArray( );
  }
  rep->deleteLater();
}

QByteArray DownLoader::getAnswer() {
  return std::move(answer);
  // return std::forward<QByteArray>(answer);
  // return answer;
}
