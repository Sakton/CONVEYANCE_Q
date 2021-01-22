#include "theclientform.h"
#include "ui_theclientform.h"

TheClientForm::TheClientForm(QWidget *parent) :
                                                  QWidget(parent),
                                                  ui(new Ui::TheClientForm)
{
  ui->setupUi(this);
}

TheClientForm::~TheClientForm()
{
  delete ui;
}
