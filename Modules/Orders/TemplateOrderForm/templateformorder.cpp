#include "templateformorder.h"

#include <QDebug>

#include "Utility/ExchangeRates/exchangerates.h"
#include "ui_templateformorder.h"

TemplateFormOrder::TemplateFormOrder( QWidget *parent )
    : BaseTemplateForm( parent ), ui( new Ui::TemplateFormOrder ) {
  ui->setupUi(this);
  setAttribute( Qt::WA_DeleteOnClose );
  // TODO ПОЧЕМУ ТО НЕ РАБОАТЕТ
  ExchangeRates changeRates;
  connect( &changeRates,
           QOverload< double >::of( &ExchangeRates::signalDateCoursBankNBP ),
           this,
           QOverload< double >::of( &TemplateFormOrder::currentCoursValut ) );
  changeRates.dateCours( QDate::currentDate( ) );
}

TemplateFormOrder::~TemplateFormOrder()
{
  delete ui;
}

void TemplateFormOrder::currentCoursValut( double cours ) {
  qDebug( ) << "current cours = " << cours;
  ui->labelStavkaEur->setText( QString::number( cours ) );
}

void TemplateFormOrder::readDataOfForm( ) {
  add( "number_contract", ui->lineEditContract->text( ) );
  add( "client", ui->comboBoxClient->currentText( ) );
  add( "price", ui->lineEditPrice->text( ) );
  add( "valute", ui->comboBoxCurrency->currentText( ) );
  add( "driver", ui->comboBoxDriver->currentText( ) );
  add( "termin_oplaty", ui->comboBoxPaymentPeriod->currentText( ) );
  // add( "exchange_rates_eu_pl" )
  add( "date_create", ui->dateEditDate->date( ).toString( ) );
  add( "place", ui->comboBoxPlace->currentText( ) );
  add( "number_orders", ui->lineEditOrderNum->text( ) );
}

void TemplateFormOrder::setDataInForm(
    const TemplateFormOrder::Line &dataLine ) {}

void TemplateFormOrder::clearForm( ) const {}
