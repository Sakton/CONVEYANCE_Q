#include <QApplication>

#include "Modules/Adress/theadressform.h"
#include "Modules/Autopark/theautomobilform.h"
#include "Modules/BlackList/theblacklistform.h"
#include "Modules/Client/theclientform.h"
#include "Modules/Driver/thedriverform.h"
#include "Modules/Land/thelandform.h"
#include "Modules/Note/thenoteform.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a( argc, argv );
  //  MainWindow w;
  //  w.show();
  TheNoteForm df;
  df.show( );
  return a.exec();
}
