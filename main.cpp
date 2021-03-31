#include <QApplication>
#include <QNetworkAccessManager>
#include <QSettings>
#include <memory>

#include "Modules/Autopark/Template/templateformauto.h"
#include "Modules/Orders/TemplateOrderForm/templateformorder.h"
#include "Modules/Orders/theorderform.h"
#include "Utility/CreatorDbConveyance/dbtablecreator.h"
#include "Utility/ExchangeRates/exchangerates.h"
#include "mainwindow.h"
#include "mainwindowmdi.h"

// template < typename... Ts >
// sum( Ts... ts )->sum< is_common_type_t< Ts... > > {
//  return ( ts + ... );
//}

int main( int argc, char *argv[] ) {
  QApplication a( argc, argv );
  //Подключение к существующей базе В ОДНОМ МЕСТЕ, пока ТУТ!!!
  ConveyanceSQLDatabase db;

  //  TemplateFormAuto *tfa = new TemplateFormAuto;
  //  tfa->show( );

  //  TemplateFormOrder *tfo = new TemplateFormOrder;
  //  tfo->show( );

  // ExchangeRates ch;

  //  DBTableCreator cr;
  //  cr.createAllTableDb( );

  //  TheOrderForm *order = new TheOrderForm;
  //  order->show( );

  MainWindow w;
  w.show( );

  return a.exec( );
}
