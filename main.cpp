#include <QApplication>
#include <QSettings>

#include "Modules/Adress/theadressform.h"
#include "Modules/Autopark/AutoBrand/theautobrandform.h"
#include "Modules/Autopark/Delegat/DelegatForm/thedelegateformaauto.h"
#include "Modules/Autopark/Template/templateformauto.h"
#include "Modules/Autopark/View/InsertFormAuto/insertformauto.h"
#include "Modules/Autopark/View/UpdateFormAuto/updateformauto.h"
#include "Modules/Autopark/View/viewerdataautopark.h"
#include "Modules/Autopark/theautomobilform.h"
#include "Modules/BlackList/theblacklistform.h"
#include "Modules/Client/theclientform.h"
#include "Modules/ContactPerson/thecontactpersonform.h"
#include "Modules/Country/thecountryform.h"
#include "Modules/Driver/thedriverform.h"
#include "Modules/Note/thenoteform.h"
#include "Modules/Orders/theorderform.h"
#include "Modules/Payment/thepaymentform.h"
#include "Modules/Post/thepostform.h"
#include "Utility/AllConstants.h"
#include "Utility/CreatorDbConveyance/dbcreator.h"
#include "Utility/CreatorDbConveyance/dbtablecreator.h"
#include "Utility/CreatorDbConveyance/errordatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "Utility/DataForCreateDBForm/thedataforcreatedbform.h"
#include "mainwindow.h"

int main( int argc, char *argv[] ) {
  QApplication a( argc, argv );
  ConveyanceSQLDatabase db;  //Подключение к существующей базе В ОДНОМ МЕСТЕ, пока ТУТ!!!

  DBTableCreator cr;
  cr.createAllTableDb( );

  InsertFormAuto* iform { new InsertFormAuto };
  iform->show( );

  //  TemplateFormAuto tf;
  //  tf.show( );

  //  TheDelegateFormaAuto dfa;
  //  dfa.show( );

  //  ViewerDataAutopark ap;
  //  ap.show( );

  //  MainWindow w;
  //  w.show( );

  //  QWidget *w = new TheAutomobilForm;
  //  w->show( );

  //  QSettings *s = new QSettings("config.ini", QSettings::Format::IniFormat);
  //  s->setValue("myKey1", QVariant(100));
  //  s->setValue("myKey2", "KEY_2");
  //  s->setValue("myKey3", 123456);

  //  s->sync();
  //  delete s;

  //  s = new QSettings("config.ini", QSettings::Format::IniFormat);
  //  qDebug() << s->value("myKey1").toInt();
  //  qDebug() << s->value("myKey2");
  //  qDebug() << s->value("myKey3").toInt();

  //  delete s;

  //  s = new QSettings("config.ini", QSettings::Format::IniFormat);
  //  s->setValue("myKey1", QVariant(11111));
  //  s->setValue("myKey11", "KEY_111");
  //  s->setValue("myKey12", QVariant(12.01212));

  //  delete s;

  //  s = new QSettings("config.ini", QSettings::Format::IniFormat);
  //  auto keys = s->allKeys();
  //  qDebug() << keys;

  return a.exec( );
}
