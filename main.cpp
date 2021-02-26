#include <QApplication>

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
  creator.createDatabase( "test1", "123" );

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

  /// lalalal

  return a.exec( );
}
