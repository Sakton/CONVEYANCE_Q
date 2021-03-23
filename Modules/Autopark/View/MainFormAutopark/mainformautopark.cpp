#include "mainformautopark.h"

#include <QListWidgetItem>
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
      selectedItem { nullptr } {
  ui->setupUi( this );
  ui->listWidget->setSelectionMode( QAbstractItemView::NoSelection );
  connect(
      ui->listWidget,
      QOverload< QListWidgetItem* >::of( &QListWidget::itemClicked ), this,
      QOverload< QListWidgetItem* >::of( &MainFormAutopark::slotItemPressed ) );
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

void MainFormAutopark::slotItemPressed( QListWidgetItem* item ) {
  selectedItem = item;
}

void MainFormAutopark::slotItemClickedChangeButton( const QString& vin ) {
  currentKey_Vin = vin;
  UpdateFormAuto* updateForm = new UpdateFormAuto( );

  connect( updateForm, QOverload<>::of( &UpdateFormAuto::signalDataUpdate ),
           this, QOverload<>::of( &MainFormAutopark::slotItemIsUpdates ) );

  //  qDebug( ) << data_.at( vin );

  updateForm->setDataInForm( data_.at( vin ) );
  updateForm->setWindowModality( Qt::WindowModality::ApplicationModal );
  updateForm->show( );
}

void MainFormAutopark::slotItemClickedDeleteButton( const QString& vin ) {
  // qDebug( ) << "MainFormAutopark::slotItemClickedDeleteButton " << vin;
}

void MainFormAutopark::slotItemIsUpdates( ) {
  qDebug( ) << "MainFormAutopark::slotItemIsUpdates";
  // TODO краш!!!
  data_[ currentKey_Vin ] = updateWindow->getDataInForm( );
  //  qDebug( ) << data_.at( "12345678998765432" );
  auto delegate = static_cast< MainDelegateWidgetAutopark* >(
      ui->listWidget->itemWidget( selectedItem ) );
  delegate->setData( data_.at( currentKey_Vin ) );
  updateWindow->close( );
}
