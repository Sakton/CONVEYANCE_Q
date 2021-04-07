#include "templateformorder.h"

#include <QDebug>

#include "ui_templateformorder.h"

TemplateFormOrder::TemplateFormOrder( QWidget *parent )
    : BaseTemplateForm( parent ), ui( new Ui::TemplateFormOrder ) {
  ui->setupUi(this);
  setAttribute( Qt::WA_DeleteOnClose );
}

TemplateFormOrder::~TemplateFormOrder()
{
  qDebug( ) << "delete TemplateFormOrder::~TemplateFormOrder()";
  delete ui;
}

void TemplateFormOrder::readDataOfForm( ) {}

void TemplateFormOrder::setDataInForm(
    const TemplateFormOrder::Line &dataLine ) {}

void TemplateFormOrder::clearForm( ) const {}
