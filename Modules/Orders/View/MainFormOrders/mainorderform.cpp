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

void MainOrderForm::tableViewSettings( ) {
  ui->tableViewOrders->setModel( model );
  ui->tableViewOrders->setGridStyle( Qt::PenStyle::DashLine );
  ui->tableViewOrders->setColumnHidden( 0, true );
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
                     "; padding: 4px; border: 2px solid #4ae1f0; }";
  auto horisontalHeader = ui->tableViewOrders->horizontalHeader( );
  horisontalHeader->setStyleSheet( styleCSS );
}
