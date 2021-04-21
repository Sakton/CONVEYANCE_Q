#include "mainwindowautopark.h"
#include "ui_mainwindowautopark.h"

MainWindowAutopark::MainWindowAutopark(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindowAutopark)
{
    ui->setupUi(this);
}

MainWindowAutopark::~MainWindowAutopark()
{
    delete ui;
}
