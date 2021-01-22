#include <QApplication>

#include "Modules/Adress/theadressform.h"
#include "Modules/Autopark/theautomobilform.h"
#include "Modules/Driver/thedriverform.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a( argc, argv );
  //  MainWindow w;
  //  w.show();
  TheAutomobilForm df;
  df.show( );
  return a.exec();
}
