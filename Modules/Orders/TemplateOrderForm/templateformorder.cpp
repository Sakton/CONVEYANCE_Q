#include "templateformorder.h"

#include <QDebug>

#include "ui_templateformorder.h"

TemplateFormOrder::TemplateFormOrder( QWidget *parent )
    : QWidget( parent ), ui( new Ui::TemplateFormOrder ) {
  ui->setupUi(this);
  setAttribute( Qt::WA_DeleteOnClose );
}

TemplateFormOrder::~TemplateFormOrder()
{
  qDebug( ) << "delete TemplateFormOrder::~TemplateFormOrder()";
  delete ui;
}
