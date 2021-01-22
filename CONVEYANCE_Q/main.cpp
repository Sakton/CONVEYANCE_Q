#include <QApplication>

#include "Modules/Driver/thedriverform.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a( argc, argv );
  //  MainWindow w;
  //  w.show();
  TheDriverForm df;
  df.show( );
  return a.exec();
}
