#include "templateformorder.h"

#include <QDebug>

#include "../OrderConstatnt/dbcolumnnames.h"
#include "Utility/ExchangeRates/exchangerates.h"
#include "ui_templateformorder.h"

TemplateFormOrder::TemplateFormOrder( QWidget *parent ) :
    BaseTemplateForm( parent ), ui( new Ui::TemplateFormOrder ), cours { nullptr } {
    ui->setupUi( this );
    setAttribute( Qt::WA_DeleteOnClose );
    setDataToPloshcadka( );
    setDataToPaymentPeriod( );
    ui->comboBoxPlace->addItems( ploschadka );
    cours
        = new ExchangeRates;
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
    add( orders::DATE_CREATE, ui->dateEditDate->date( ).toString( ) );
    add( orders::NET_PLOSCHADKA, ui->comboBoxPlace->currentText( ) );
    add( orders::NUMBER_CONTRACT, ui->lineEditContract->text( ) );
    add( orders::NUMBER_ORDERS, ui->lineEditOrderNum->text( ) );
    add( orders::CLIENT, ui->comboBoxClient->currentText( ) );
    add( orders::CONTACTS, ui->comboBoxContacts->currentText( ) );
    add( orders::DRIVER, ui->comboBoxDriver->currentText( ) );
    add( orders::DOEZD, ui->lineEditArrival->text( ) );
    add( orders::ROUTE, ui->lineEditRoute->text( ) );
    add( orders::RATE, ui->lineEditRate->text( ) );
    add( orders::PRICE, ui->lineEditPrice->text( ) );
    add( orders::VALYTA, ui->comboBoxCurrency->currentText( ) );
    add( orders::EXCHANGE, ui->labelCours->text( ) );
    add( orders::PAYMENT_PERIOD, ui->comboBoxPaymentPeriod->currentText( ) );
    add( orders::POSTAL_TRANSFER, ui->comboBoxPostalTransferPeriod->currentText( ) );
    add( orders::SEND_TWO_COPY, QString::number( ui->checkBoxCopyCMR->checkState( ) ) );
    add( orders::SEND_ORIGINAL, QString::number( ui->checkBoxContractOriginal->checkState( ) ) );
    add( orders::NOTE, ui->plainTextEditNotes->toPlainText( ) );

    qDebug( ) << "data_ = " << data_;
}

void TemplateFormOrder::setDataInForm ( const TemplateFormOrder::Line &dataLine ) {
}

void TemplateFormOrder::clearForm( ) const {}

void TemplateFormOrder::setDataToPloshcadka( ) {
    ploschadka << "timo.com"
               << "none";
}

void TemplateFormOrder::setDataToPaymentPeriod( ) {
    paymentPeriod << "";
}

void TemplateFormOrder::setPostalTrasferPeriod( ) {
    postalPeriods << "";
}
