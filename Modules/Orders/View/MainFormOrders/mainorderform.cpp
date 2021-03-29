#include "mainorderform.h"
#include "ui_mainorderform.h"

MainOrderForm::MainOrderForm( QWidget *parent )
    : QWidget( parent ), ui( new Ui::MainOrderForm ) {
  ui->setupUi(this);
}

MainOrderForm::~MainOrderForm()
{
  delete ui;
}
