#include <QApplication>
#include <QSettings>

#include "Modules/Orders/theorderform.h"
#include "Utility/CreatorDbConveyance/dbtablecreator.h"
#include "mainwindow.h"
#include "mainwindowmdi.h"

int main( int argc, char *argv[] ) {
  QApplication a( argc, argv );
  ConveyanceSQLDatabase db;  //Подключение к существующей базе В ОДНОМ МЕСТЕ, пока ТУТ!!!

  //  DBTableCreator cr;
  //  cr.createAllTableDb( );

  TheOrderForm *order = new TheOrderForm;
  order->show( );

  //  MainWindow w;
  //  w.show( );

  return a.exec( );
}
