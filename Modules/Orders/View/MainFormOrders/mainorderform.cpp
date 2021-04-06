#include "mainorderform.h"

#include <QStyleOptionHeader>

#include "Modules/Orders/ModelOrder/modelorderdata.h"
#include "Utility/AllConstants.h"
#include "ui_mainorderform.h"

MainOrderForm::MainOrderForm( QWidget *parent )
    : QWidget( parent ),
      ui( new Ui::MainOrderForm ),
      model( new ModelOrderData ) {
  ui->setupUi( this );
  tableViewSettings( );
  headerViewSettings( );
}

MainOrderForm::~MainOrderForm()
{
  delete ui;
}

void MainOrderForm::modelInit( ) {
  // TODO странное поведение!!!

  //  model->setTable( QLatin1String( AllConstatnts::DB_SHEME ) + ".orders" );
  //  model->setEditStrategy( QSqlTableModel::OnManualSubmit );
  //  model->select( );

  //*******************************************************************************
  // TODO почему тут работает, а в самом классе нет
  // ******************************************************************************

  //  model->setHeaderData( 0, Qt::Horizontal, tr( "id" ) );
  //  model->setHeaderData( 1, Qt::Horizontal, tr( "Номер" ) );
  //  model->setHeaderData( 2, Qt::Horizontal, tr( "Клиент" ) );
  //  model->setHeaderData( 3, Qt::Horizontal, tr( "Цена" ) );
}

void MainOrderForm::tableViewSettings( ) {
  ui->tableViewOrders->setModel( model );
  ui->tableViewOrders->setGridStyle( Qt::PenStyle::DashLine );
  ui->tableViewOrders->setColumnHidden( 0, true );
  ui->tableViewOrders->resizeColumnsToContents( );
  // ui->tableViewOrders->set
}

void MainOrderForm::headerViewSettings( ) {
  auto palette = ui->tableViewOrders->horizontalHeader( )->palette( );
  palette.setColor( QPalette::ColorGroup::Normal, QPalette::ColorRole::Window,
                    Qt::red );
  ui->tableViewOrders->horizontalHeader( )->setPalette( palette );
}

// void MainOrderForm::headerViewSettings( ) {
//  //Свой хедер?
//  QHeaderView *header = ui->tableViewOrders->horizontalHeader( );
//  header->setDefaultAlignment( Qt::AlignmentFlag::AlignCenter );
//  header->setSectionResizeMode( QHeaderView::ResizeMode::ResizeToContents );
//}
