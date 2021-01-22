#include <QApplication>

#include "Modules/Adress/theadressform.h"
#include "Modules/Driver/thedriverform.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a( argc, argv );
  //  MainWindow w;
  //  w.show();
  TheAdressForm df;
  df.show( );
  return a.exec();
}
