#include "mainformautopark.h"

#include <QListWidgetItem>
#include <QMessageBox>
#include <QPushButton>
#include <QSqlError>
#include <QSqlQuery>
#include "Modules/Autopark/Delegat/MainDelegatAutopark/maindelegatewidgetautopark.h"
#include "Modules/Autopark/View/UpdateFormAuto/updateformauto.h"
#include "Utility/AllConstants.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_mainformautopark.h"

MainFormAutopark::MainFormAutopark( QWidget* parent )
    : QWidget( parent ),
      ui( new Ui::MainFormAutopark ),
      selectedDelegateWidget { nullptr },
      currentSelectedItemWidget { nullptr } {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );

  ui->listWidget->setSelectionMode( QAbstractItemView::NoSelection );

  connect( ui->pushButtonAdd, QOverload< bool >::of( &QPushButton::clicked ),
           this, QOverload<>::of( &MainFormAutopark::slotAddItem ) );
  read( );
  fill( );
}

MainFormAutopark::~MainFormAutopark()
{
  qDebug( ) << "DELETE MainFormAutopark::~MainFormAutopark()";
  updateWindow->deleteLater( );
  delete ui;
}

void MainFormAutopark::addWidget( const Line& line ) {
  QListWidgetItem* item = new QListWidgetItem( ui->listWidget );
  MainDelegateWidgetAutopark* widget =
      new MainDelegateWidgetAutopark( line, ui->listWidget );
  widget->setBoundListWidgetItem( item );

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

  connect( widget,
           QOverload< QListWidgetItem* >::of(
               &MainDelegateWidgetAutopark::signalBoundedListWidgetItem ),
           this,
           QOverload< QListWidgetItem* >::of(
               &MainFormAutopark::slotSetCurrentSelectedItem ) );

  item->setSizeHint( widget->sizeHint( ) );
  ui->listWidget->setItemWidget( item, widget );
}

void MainFormAutopark::fill( ) {
  for ( auto& el : data_ ) {
    addWidget( el.second );
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

void MainFormAutopark::clearCurrents( ) {  // ??? для чего его сделал?
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
  updateWindow->setWindowTitle( "ОБНОВЛЕНИЕ ДАННЫX VIN: " + vin );
  updateWindow->setWindowModality( Qt::WindowModality::ApplicationModal );
  updateWindow->show( );
}

void MainFormAutopark::slotItemClickedDeleteButton( const QString& vin ) {
  // тут удаление из базы
  QString s = tr( "ЗАПИСЬ С VIN " ) + vin + tr( " БУДЕТ УДАЛЕНА" );
  int clickButton =
      QMessageBox::warning( nullptr, tr( "ПРЕДУПРЕЖДЕНИЕ О УДАЛЕНИИ" ), s );
  if ( clickButton == QMessageBox::StandardButton::Ok ) {
    QSqlQuery query;
    QString   qs=
        QueryDriver::delRecord( "autopark", QString( "vin='" + vin + "'" ) );
    if ( !query.exec( qs ) )
      QMessageBox::critical( nullptr, tr( "CRITICAL" ),
                             query.lastError( ).text( ) );
    data_.erase( vin );
    ui->listWidget->clear( );
    fill( );
    currentSelectedItemWidget= nullptr;
  }
}

void MainFormAutopark::slotItemIsUpdates( ) {
  data_.at( currentKey_Vin ) = updateWindow->getDataInForm( );
  selectedDelegateWidget->setData( data_.at( currentKey_Vin ) );

  Line& refLine = data_.at( currentKey_Vin );

  QString qs = QueryDriver::update(
      "autopark",
      { "name_brand", "series_brand", "marka_brand", "issue",
        "auto_counry_number", "eco", "inspection", "reminder", "days_reminder",
        "lenth", "width", "height", "space", "carring", "lift", "commentary" },
      { refLine.at( "name_brand" ), refLine.at( "series_brand" ),
        refLine.at( "marka_brand" ), refLine.at( "issue" ),
        refLine.at( "auto_counry_number" ), refLine.at( "eco" ),
        refLine.at( "inspection" ), refLine.at( "reminder" ),
        refLine.at( "days_reminder" ), refLine.at( "lenth" ),
        refLine.at( "width" ), refLine.at( "height" ), refLine.at( "space" ),
        refLine.at( "carring" ), refLine.at( "lift" ),
        refLine.at( "commentary" ) },
      "vin='" + currentKey_Vin + "'" );
  QSqlQuery query;

  if ( !query.exec( qs ) ) {
    QMessageBox::critical( nullptr, "CRITICAL ERROR UPDATE",
                           query.lastError( ).text( ) );
  }
  updateWindow->close( );
}

void MainFormAutopark::slotAddItem( ) {
  updateWindow = new UpdateFormAuto;
  connect( updateWindow, QOverload<>::of( &UpdateFormAuto::signalDataUpdate ),
           this, QOverload<>::of( &MainFormAutopark::slotItemIsInsert ) );
  updateWindow->setWindowTitle( "ДОБАВЛЕНИЕ НОВОГО АВТОМОБИЛЯ" );
  updateWindow->show( );
}

void MainFormAutopark::slotItemIsInsert( ) {
  Line line = updateWindow->getDataInForm( );
  data_[ line.at( "vin" ) ] = line;
  QSqlQuery query;
  QString qs = QueryDriver::insertQueryString( "autopark", line );
  if ( !query.exec( qs ) ) {
    QMessageBox::critical( nullptr, "CRITICAL ERROR INSERT",
                           query.lastError( ).text( ) );
  }
  updateWindow->close( );
  addWidget( line );
}

void MainFormAutopark::slotSetCurrentSelectedItem( QListWidgetItem* item ) {
  currentSelectedItemWidget= item;
}
