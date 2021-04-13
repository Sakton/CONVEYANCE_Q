#include "conveyancenetwork.h"

#include <QNetworkAccessManager>

QNetworkAccessManager* ConveyanceNetwork::netManager = nullptr;

void ConveyanceNetwork::init(QObject *parent)
{
  if ( netManager == nullptr ) {
    netManager = new QNetworkAccessManager(parent);
    qDebug( ) << "create QNetworkAccessManager* ConveyanceNetwork";
  }
}

QNetworkAccessManager* ConveyanceNetwork::getNetworkManager( ) {
  if ( netManager == nullptr ) {
    init();
  } else {
    qDebug( ) << "return QNetworkAccessManager* ConveyanceNetwork";
  }
  return netManager;
}
