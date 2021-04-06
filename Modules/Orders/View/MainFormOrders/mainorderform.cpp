#include "mainorderform.h"

#include <QSqlTableModel>

#include "Utility/AllConstants.h"
#include "ui_mainorderform.h"

MainOrderForm::MainOrderForm( QWidget *parent )
    : QWidget( parent ),
      ui( new Ui::MainOrderForm ),
      model( new QSqlTableModel ) {
  ui->setupUi( this );
  model->setTable( QLatin1String( AllConstatnts::DB_SHEME ) + ".orders" );
  model->setEditStrategy( QSqlTableModel::OnManualSubmit );
  model->select( );
  model->setHeaderData( 0, Qt::Horizontal, tr( "id" ) );
  model->setHeaderData( 1, Qt::Horizontal, tr( "number" ) );
  model->setHeaderData( 2, Qt::Horizontal, tr( "client" ) );
  model->setHeaderData( 3, Qt::Horizontal, tr( "price" ) );

  ui->tableViewOrders->setModel( model );
}

MainOrderForm::~MainOrderForm()
{
  delete ui;
}
