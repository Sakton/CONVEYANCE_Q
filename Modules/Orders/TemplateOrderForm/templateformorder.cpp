#include "templateformorder.h"

#include <QDebug>

#include "../OrderConstatnt/dbcolumnnames.h"
#include "Utility/ExchangeRates/exchangerates.h"
#include "ui_templateformorder.h"

//const QStringList TemplateFormOrder::PLOSHADKA = QStringList( "timo.com", "none" );

TemplateFormOrder::TemplateFormOrder( QWidget *parent ) :
    BaseTemplateForm( parent ), ui( new Ui::TemplateFormOrder ), cours { nullptr } {
    ui->setupUi( this );
    setAttribute( Qt::WA_DeleteOnClose );
    //   ui->comboBoxPlace->addItems( PLOSHADKA );

    cours = new ExchangeRates;
    connect( cours, QOverload< double >::of( &ExchangeRates::signalCurrentCours ), this, QOverload< double >::of( &TemplateFormOrder::slotCurrentCoursValut ) );
    cours->dateCours( QDate::currentDate( ) );
}

TemplateFormOrder::~TemplateFormOrder( ) {
    delete ui;
    cours->deleteLater( );
}

void TemplateFormOrder::slotCurrentCoursValut( double cours ) {
    ui->labelCours->setText( "1EU = " + QString::number( cours ) + " PL" );
}

void TemplateFormOrder::readDataOfForm( ) {
    add( /*"order_number_contract"*/ orders::NUMBER_CONTRACT, ui->lineEditContract->text( ) );
    add( /*"order_client"*/ orders::CLIENT, ui->comboBoxClient->currentText( ) );
    add( /*"order_price"*/ orders::PRICE, ui->lineEditPrice->text( ) );
    add( /*"order_valute"*/ orders::VALYTA, ui->comboBoxCurrency->currentText( ) );
    add( /*"order_driver"*/ orders::DRIVER, ui->comboBoxDriver->currentText( ) );
    add( /*"order_termin_oplaty"*/ orders::TERMIN_OPLATY, ui->comboBoxPaymentPeriod->currentText( ) );
    add( /*"order_exchange_rates_eu_pl"*/ orders::EXCHANGE, ui->labelCours->text( ) );
    add( /*"order_date_create"*/ orders::DATE_CREATE, ui->dateEditDate->date( ).toString( ) );
    add( /*"order_place"*/ orders::NET_PLOSCHADKA, ui->comboBoxPlace->currentText( ) );
    //add( "order_number_orders", ui->lineEditOrderNum->text( ) );
    //add();
}

void TemplateFormOrder::setDataInForm ( const TemplateFormOrder::Line &dataLine ) {
}

void TemplateFormOrder::clearForm( ) const {}
