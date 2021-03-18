#include "mainformautopark.h"

//#include "../../Delegat/MainDelegatAutopark/maindelegate.h"
//#include "../../Model/modelmainviewautopark.h"
#include <QListWidgetItem>
#include <QSqlError>
#include <QSqlQuery>
#include "../../../../Utility/AllConstants.h"
#include "../../../../Utility/CreatorDbConveyance/querydriver.h"
#include "../../../Autopark/Delegat/MainDelegatAutopark/maindelegatewidgetautopark.h"
#include "ui_mainformautopark.h"

MainFormAutopark::MainFormAutopark(QWidget *parent) :
      QWidget(parent),
      ui(new Ui::MainFormAutopark)
{
  ui->setupUi( this );
  read( );
  fill( );
}

MainFormAutopark::~MainFormAutopark()
{
  delete ui;
}

void MainFormAutopark::fill( ) {
  for ( auto& el : data_ ) {
    QListWidgetItem* item = new QListWidgetItem( ui->listWidget );
    MainDelegateWidgetAutopark* widget =
        new MainDelegateWidgetAutopark( el.second, ui->listWidget );
    item->setSizeHint( widget->sizeHint( ) );
    ui->listWidget->setItemWidget( item, widget );
  }
}

void MainFormAutopark::read( ) {
  QSqlQuery query;
  if ( query.exec(
           QueryDriver::selectAll( AllConstatnts::NAME_TABLE::AUTOPARK ) ) ) {
    while ( query.next( ) ) {
      Line tmp;
      tmp[ "name_brand" ] = query.value( "name_brand" ).toString( );
      tmp[ "series_brand" ] = query.value( "series_brand" ).toString( );
      tmp[ "marka_brand" ] = query.value( "marka_brand" ).toString( );
      tmp[ "issue" ] = query.value( "issue" ).toString( );
      tmp[ "auto_counry_number" ] =
          query.value( "auto_counry_number" ).toString( );
      tmp[ "vin" ] = query.value( "vin" ).toString( );
      tmp[ "eco" ] = query.value( "eco" ).toString( );
      tmp[ "inspection" ] = query.value( "inspection" ).toString( );
      tmp[ "reminder" ] = query.value( "reminder" ).toString( );
      tmp[ "days_reminder" ] = query.value( "days_reminder" ).toString( );
      tmp[ "lenth" ] = query.value( "lenth" ).toString( );
      tmp[ "width" ] = query.value( "width" ).toString( );
      tmp[ "height" ] = query.value( "height" ).toString( );
      tmp[ "space" ] = query.value( "space" ).toString( );
      tmp[ "carring" ] = query.value( "carring" ).toString( );
      tmp[ "lift" ] = query.value( "lift" ).toString( );
      tmp[ "commentary" ] = query.value( "commentary" ).toString( );
      /*      tmp[ "__ThisSessionEdit__" ] =
                QLatin1String( "0" ); */ //поле для отметки было ли изменение
      data_[ tmp[ "vin" ] ] = tmp;
    }
  }
}
