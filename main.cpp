#include <QApplication>
#include <QNetworkAccessManager>
#include <QSettings>
#include <memory>

#include "Modules/Orders/TemplateOrderForm/templateformorder.h"
#include "Modules/Orders/theorderform.h"
#include "Utility/CreatorDbConveyance/dbtablecreator.h"
#include "Utility/ExchangeRates/exchangerates.h"
#include "mainwindow.h"
#include "mainwindowmdi.h"

int main( int argc, char *argv[] ) {
  QApplication a( argc, argv );
  //Подключение к существующей базе В ОДНОМ МЕСТЕ, пока ТУТ!!!
  ConveyanceSQLDatabase db;

  ExchangeRates ch;

  //  DBTableCreator cr;
  //  cr.createAllTableDb( );

  //  TemplateFormOrder *tfo = new TemplateFormOrder;
  //  tfo->show( );

  //  TheOrderForm *order = new TheOrderForm;
  //  order->show( );

  //  MainWindow w;
  //  w.show( );

  return a.exec( );
}
