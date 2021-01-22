#include "thedriverform.h"
#include "ui_thedriverform.h"

TheDriverForm::TheDriverForm(QWidget *parent) :
						  QWidget(parent),
						  ui(new Ui::TheDriverForm)
{
  ui->setupUi(this);
}

TheDriverForm::~TheDriverForm()
{
  delete ui;
}
