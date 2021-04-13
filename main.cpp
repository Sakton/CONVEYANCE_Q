#include <Utility/Network/conveyancenetwork.h>

#include <QApplication>
#include <QNetworkAccessManager>
#include <QSettings>
#include <memory>

#include "Modules/Autopark/Template/templateformauto.h"
#include "Modules/Orders/ModelOrder/modelorderdata.h"
#include "Modules/Orders/TemplateOrderForm/templateformorder.h"
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
  //  ConveyanceNetwork::init(  );
  //  ModelOrderData od;
  //  od.readDataFromDb( );
  
  // ConveyanceNetwork::getNetworkManager( );
  
  //  ExchangeRates r;
  //  r.dateCours( QDate::currentDate( ).addDays( -1 ) );
  
  
  MainWindow w;
  w.show( );
  
  //  ExchangeRates r;
  //  r.dateCours( QDate::currentDate( ) );
  //  r.dateCours( QDate::currentDate( ).addDays( -1 ) );
  //  r.dateCours( QDate::currentDate( ).addDays( -2 ) );
  //  r.dateCours( QDate::currentDate( ).addDays( -3 ) );
  //  r.dateCours( QDate::currentDate( ).addDays( -4 ) );
  //  r.dateCours( QDate::currentDate( ).addDays( -5 ) );
  //  r.dateCours( QDate::currentDate( ).addDays( -6 ) );
  
  // exit( 0 );
  
  return a.exec( );
}
