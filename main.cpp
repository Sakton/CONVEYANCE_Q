#include <QApplication>
#include <QSettings>

#include "Modules/Adress/theadressform.h"
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

  // TODO это должно быть не тут

  //  DBTableCreator creator;
  //  if ( creator.createDb( ) )
  //    qDebug( ) << "OK CREATE TABLE";
  //  else
  //    qDebug( ) << "ERROR CREATE TABLE";

  DBCreator creator;
  // creator.cleaningPostgresUser();
  creator.createDatabase( AllConstatnts::dbName );

  //  if ( creator.createDb( ) ) {
  //    qDebug( ) << "OK CREATE TABLE";
  //  } else {
  //    qDebug( ) << "ERROR CREATE TABLE";
  //  }

  //  TheAdressForm *df = new TheAdressForm;
  //  df->show( );
  //  TheClientForm *cl = new TheClientForm;
  //  cl->show( );
  //  TheOrderForm *of = new TheOrderForm;
  //  of->show( );

  //  QWidget *w = new TheAdressForm;
  //  w->show( );

  DBTableCreator cr;
  cr.createAllTableDb();

  QSettings *s = new QSettings("config.ini", QSettings::Format::IniFormat);
  s->setValue("myKey1", QVariant(100));
  s->setValue("myKey2", "KEY_2");
  s->setValue("myKey3", 123456);

  s->sync();
  delete s;

  s = new QSettings("config.ini", QSettings::Format::IniFormat);
  qDebug() << s->value("myKey1").toInt();
  qDebug() << s->value("myKey2");
  qDebug() << s->value("myKey3").toInt();

  delete s;

  s = new QSettings("config.ini", QSettings::Format::IniFormat);
  s->setValue("myKey1", QVariant(11111));
  s->setValue("myKey11", "KEY_111");
  s->setValue("myKey12", QVariant(12.01212));

  delete s;

  s = new QSettings("config.ini", QSettings::Format::IniFormat);
  auto keys = s->allKeys();
  qDebug() << keys;

  return a.exec();
}
