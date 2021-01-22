#include "thelandform.h"
#include "ui_thelandform.h"

TheLandForm::TheLandForm(QWidget *parent) :
                                              QWidget(parent),
                                              ui(new Ui::TheLandForm)
{
  ui->setupUi(this);
}

TheLandForm::~TheLandForm()
{
  delete ui;
}
