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

void TemplateFormOrder::readDataOfForm( ) {
  add( "date_create", ui->dateEditDate->date( ).toString( ) );
  add( "place", ui->comboBoxPlace->currentText( ) );
  add( "number_contract", ui->lineEditContract->text( ) );
  add( "number_orders", ui->lineEditOrderNum->text( ) );
}

void TemplateFormOrder::setDataInForm(
    const TemplateFormOrder::Line &dataLine ) {}

void TemplateFormOrder::clearForm( ) const {}
