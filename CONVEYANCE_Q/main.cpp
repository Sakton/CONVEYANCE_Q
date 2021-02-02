#include <QApplication>

#include "Modules/Adress/theadressform.h"
#include "Modules/Autopark/theautomobilform.h"
#include "Modules/BlackList/theblacklistform.h"
#include "Modules/Client/theclientform.h"
#include "Modules/Driver/thedriverform.h"
#include "Modules/Land/thelandform.h"
#include "Modules/Note/thenoteform.h"
#include "Modules/Orders/theorderform.h"
#include "Modules/Payment/thepaymentform.h"
#include "Modules/Post/thepostform.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "mainwindow.h"

int main( int argc, char *argv[] ) {
  QApplication a( argc, argv );
  //  MainWindow w;
  //  w.show( );
  TheAdressForm df;
  df.show( );

  std::vector< std::pair< QString, QString > > data { { "Para1", "Para1_1" } };
  // std::vector< QString > data { { "Para1", "Para1_1" } };
  auto s = QueryDriver::createTableQuery( QString( "testQueryDriver" ), data );

  //  TheClientForm cf;
  //  cf.show( );
  return a.exec();
}
