#include "theautomobilform.h"
#include "ui_theautomobilform.h"

TheAutomobilForm::TheAutomobilForm(QWidget *parent) :
                                                        QWidget(parent),
                                                        ui(new Ui::TheAutomobilForm)
{
  ui->setupUi(this);
}

TheAutomobilForm::~TheAutomobilForm()
{
  delete ui;
}
