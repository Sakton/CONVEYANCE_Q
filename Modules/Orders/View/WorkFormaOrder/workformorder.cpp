#include "workformorder.h"
#include "ui_workformorder.h"

WorkFormOrder::WorkFormOrder( QWidget *parent )
    : QWidget( parent ), ui( new Ui::WorkFormOrder ) {
  ui->setupUi(this);
  setAttribute( Qt::WA_DeleteOnClose );
  setWindowModality( Qt::WindowModality::ApplicationModal );
}

WorkFormOrder::~WorkFormOrder()
{
  delete ui;
}
