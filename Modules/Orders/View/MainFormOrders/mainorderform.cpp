#include "mainorderform.h"

#include <QStyleOptionHeader>

#include "../WorkFormaOrder/workformorder.h"
#include "Modules/Orders/ModelOrder/modelorderdata.h"
#include "Utility/AllConstants.h"
#include "ui_mainorderform.h"

MainOrderForm::MainOrderForm( QWidget* parent )
    : QWidget( parent ),
      ui( new Ui::MainOrderForm ),
      model( new ModelOrderData ),
      workForm { nullptr } {
  ui->setupUi( this );
  tableViewSettings( );
  headerViewSettings( );

  connect( ui->pushButtonAddOrder,
           QOverload< bool >::of( &QPushButton::clicked ), this,
           QOverload<>::of( &MainOrderForm::slotClickOkButton ) );

  connect( ui->tableViewOrders,
           QOverload< const QModelIndex& >::of( &QTableView::doubleClicked ),
           this,
           QOverload< const QModelIndex& >::of(
               &MainOrderForm::slotClickedLineTable ) );
}

MainOrderForm::~MainOrderForm()
{
  delete ui;
}

void MainOrderForm::tableViewSettings( ) {
  ui->tableViewOrders->setModel( model );
  ui->tableViewOrders->setGridStyle( Qt::PenStyle::DashLine );
  //  ui->tableViewOrders->setColumnHidden( 0, true );
  ui->tableViewOrders->resizeColumnsToContents( );
}

void MainOrderForm::headerViewSettings( ) {
  // TODO!!! Костыль. Баг у Qt не позволяет выставить цвет ролью в модели
  // Мы сделали запрос, который нельзя удовлетворить, используя только
  // собственные стили (например, механизм тем Windows XP не позволяет нам
  // указывать цвет фона кнопки)
  QString styleCSS = "QHeaderView::section { background-color:" +
                     QLatin1String( AllConstatnts::COLOR_SECTION_HEADER_VIEW ) +
                     "; selection-color: " +
                     QLatin1String( AllConstatnts::COLOR_SECTION_HEADER_VIEW ) +
                     "; padding: 4px; "
                     "border: 1px solid yellow; }";
  auto horisontalHeader = ui->tableViewOrders->horizontalHeader( );
  horisontalHeader->setStyleSheet( styleCSS );
}

void MainOrderForm::slotClickOkButton( ) {
  workForm = new WorkFormOrder;
  workForm->setWindowTitle( "НОВЫЙ ОРДЕР" );
  workForm->show( );
  qDebug( ) << "slotClickOkButton";
}

void MainOrderForm::slotClickedLineTable( const QModelIndex& index ) {
  workForm = new WorkFormOrder;
  workForm->setWindowTitle( "ПРАВКА ОРДЕРА ПО ДОГОВОРУ ..." );
  workForm->show( );
  qDebug( ) << "row = " << index.row( );
}
