#include "mainformautopark.h"

#include <QListWidgetItem>
#include <QPushButton>
#include <QSqlError>
#include <QSqlQuery>
#include "Modules/Autopark/Delegat/MainDelegatAutopark/maindelegatewidgetautopark.h"
// #include "Modules/Autopark/View/InsertFormAuto/insertformauto.h"
#include "Modules/Autopark/View/UpdateFormAuto/updateformauto.h"
#include "Utility/AllConstants.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_mainformautopark.h"

MainFormAutopark::MainFormAutopark( QWidget* parent )
    : QWidget( parent ),
      ui( new Ui::MainFormAutopark ),
      selectedDelegateWidget { nullptr } {
  ui->setupUi( this );
  ui->listWidget->setSelectionMode( QAbstractItemView::NoSelection );

  connect( ui->pushButtonAdd, QOverload< bool >::of( &QPushButton::clicked ),
           this, QOverload<>::of( &MainFormAutopark::slotAddItem ) );

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

    connect( widget,
             QOverload< const QString& >::of(
                 &MainDelegateWidgetAutopark::signalClickedChangeButton ),
             this,
             QOverload< const QString& >::of(
                 &MainFormAutopark::slotItemClickedChangeButton ) );

    connect( widget,
             QOverload< const QString& >::of(
                 &MainDelegateWidgetAutopark::signalClickedDeleteButton ),
             this,
             QOverload< const QString& >::of(
                 &MainFormAutopark::slotItemClickedDeleteButton ) );

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
      data_[ tmp[ "vin" ] ] = tmp;
    }
  }
}

void MainFormAutopark::clearCurrents( ) {
  if ( updateWindow ) {
    updateWindow->close( );
    updateWindow->deleteLater( );
  }
  currentKey_Vin.clear( );
  updateWindow = nullptr;
  selectedDelegateWidget = nullptr;
}

void MainFormAutopark::slotItemClickedChangeButton( const QString& vin ) {
  // установка текущих значений
  currentKey_Vin = vin;
  selectedDelegateWidget =
      static_cast< MainDelegateWidgetAutopark* >( sender( ) );
  updateWindow = new UpdateFormAuto;
  // --
  connect( updateWindow, QOverload<>::of( &UpdateFormAuto::signalDataUpdate ),
           this, QOverload<>::of( &MainFormAutopark::slotItemIsUpdates ) );

  updateWindow->setDataInForm( data_.at( vin ) );
  data_.at( vin )[ "changed" ] = "true";
  updateWindow->setWindowTitle( "ОБНОВЛЕНИЕ ДАННЫX VIN: " + vin );
  updateWindow->setWindowModality( Qt::WindowModality::ApplicationModal );
  updateWindow->show( );
}

void MainFormAutopark::slotItemClickedDeleteButton( const QString& vin ) {
  // тут удаление из базы
  clearCurrents( );
}

void MainFormAutopark::slotItemIsUpdates( ) {
  data_.at( currentKey_Vin ) = updateWindow->getDataInForm( );
  selectedDelegateWidget->setData( data_.at( currentKey_Vin ) );
  qDebug( ) << QueryDriver::update( "autopark", data_.at( currentKey_Vin ),
                                    "vin=" + currentKey_Vin );
  // тут вставка в базу измененных элементов
}

void MainFormAutopark::slotAddItem( ) {
  qDebug( ) << "MainFormAutopark::slotAddItem()";
  updateWindow = new UpdateFormAuto;
  connect( updateWindow, QOverload<>::of( &UpdateFormAuto::signalDataUpdate ),
           this, QOverload<>::of( &MainFormAutopark::slotItemIsInsert ) );
  updateWindow->setWindowTitle( "ДОБАВЛЕНИЕ НОВОГО АВТОМОБИЛЯ" );
  updateWindow->show( );
}

void MainFormAutopark::slotItemIsInsert( ) {
  qDebug( ) << "MainFormAutopark::slotItemIsInsert";
  QSqlQuery query;
  QString qs =
      QueryDriver::insertQueryString( "autopark", data_.at( currentKey_Vin ) );
  if ( !query.exec( qs ) ) {
    qDebug( ) << "EERROR INSERT TO DB";
  }
}
