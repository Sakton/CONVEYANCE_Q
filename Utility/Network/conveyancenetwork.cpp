#include "conveyancenetwork.h"

#include <QNetworkAccessManager>

QNetworkAccessManager* ConveyanceNetwork::netManager = nullptr;

QNetworkAccessManager* ConveyanceNetwork::getNetworkManager( ) {
  if ( netManager == nullptr ) {
    netManager = new QNetworkAccessManager;
    qDebug( ) << "create QNetworkAccessManager* ConveyanceNetwork";
  } else {
    qDebug( ) << "return QNetworkAccessManager* ConveyanceNetwork";
  }
  return netManager;
}
