#include "thecontactpersonform.h"
#include "ui_thecontactpersonform.h"

TheContactPersonForm::TheContactPersonForm(QWidget *parent) :
                                                                QWidget(parent),
                                                                ui(new Ui::TheContactPersonForm)
{
  ui->setupUi(this);
}

TheContactPersonForm::~TheContactPersonForm()
{
  delete ui;
}
