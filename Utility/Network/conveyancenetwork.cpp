#include "conveyancenetwork.h"

#include <QNetworkAccessManager>

QNetworkAccessManager* ConveyanceNetwork::netManager = nullptr;

QNetworkAccessManager* ConveyanceNetwork::getNetworkManager( ) {
  qDebug( ) << "QNetworkAccessManager* ConveyanceNetwork";
  if ( netManager == nullptr ) netManager = new QNetworkAccessManager;
  return netManager;
}
