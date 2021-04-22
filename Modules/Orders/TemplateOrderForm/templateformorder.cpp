#include "templateformorder.h"

#include <QDebug>

#include "../OrderConstatnt/dbcolumnnames.h"
#include "Utility/ExchangeRates/exchangerates.h"
#include "ui_templateformorder.h"

TemplateFormOrder::TemplateFormOrder( QWidget *parent ) :
    QWidget( parent ), /*BaseTemplateForm( parent ),*/ ui( new Ui::TemplateFormOrder ), cours { nullptr } {
    ui->setupUi( this );
    setAttribute( Qt::WA_DeleteOnClose );
    setDataToPloshcadka( );
    setValuta( );
    setPeriodOplaty( );
    setPostaPeriod( );
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

void TemplateFormOrder::setDataInForm( const LineType &dataLine ) {
}

void TemplateFormOrder::clearForm( ) const {}

void TemplateFormOrder::readDataOfForm( TemplateFormOrder::LineType &dataLine ) {
    dataLine[ orders::DATE_CREATE ] = ui->dateEditDate->date( ).toString( "dd-MM-yyyy" );
    dataLine[ orders::NET_PLOSCHADKA ] = ui->comboBoxPlace->currentText( );
    dataLine[ orders::NUMBER_CONTRACT ] = ui->lineEditContract->text( );
    dataLine[ orders::NUMBER_ORDERS ] = ui->lineEditOrderNum->text( );
    dataLine[ orders::CLIENT ] = ui->comboBoxClient->currentText( );
    dataLine[ orders::CONTACTS ] = ui->comboBoxContacts->currentText( );
    dataLine[ orders::DRIVER ] = ui->comboBoxDriver->currentText( );
    dataLine[ orders::DOEZD ] = ui->lineEditArrival->text( );
    dataLine[ orders::ROUTE ] = ui->lineEditRoute->text( );
    dataLine[ orders::RATE ] = ui->lineEditRate->text( );
    dataLine[ orders::PRICE ] = ui->lineEditPrice->text( );
    dataLine[ orders::VALYTA ] = ui->comboBoxCurrency->currentText( );
    dataLine[ orders::EXCHANGE ] = QString::number( cours->getCurrentCours( ) );
    dataLine[ orders::PAYMENT_PERIOD ] = ui->comboBoxPaymentPeriod->currentText( );
    dataLine[ orders::POSTAL_TRANSFER ] = ui->comboBoxPostalTransferPeriod->currentText( );
    dataLine[ orders::SEND_TWO_COPY ] = QString::number( ui->checkBoxCopyCMR->checkState( ) );
    dataLine[ orders::SEND_ORIGINAL ] = QString::number( ui->checkBoxContractOriginal->checkState( ) );
    dataLine[ orders::NOTE ] = ui->plainTextEditNotes->toPlainText( );
}

void TemplateFormOrder::setDataToPloshcadka( ) {
    ploschadka << "timo.com"
               << "none";
    ui->comboBoxPlace->addItems( ploschadka );
}

void TemplateFormOrder::setValuta( ) {
    valuta << "EUR"
           << "PL"
           << "EUR/PL";
    ui->comboBoxCurrency->addItems( valuta );
}

void TemplateFormOrder::setPeriodOplaty( ) {
    periodOplaty << "5"
                 << "10"
                 << "15"
                 << "30"
                 << "45"
                 << "60"
                 << "none";
    ui->comboBoxPaymentPeriod->addItems( periodOplaty );
}

void TemplateFormOrder::setPostaPeriod( ) {
    postaPeriod << "5"
                << "10"
                << "15"
                << "30"
                << "45"
                << "60"
                << "none";
    ui->comboBoxPostalTransferPeriod->addItems( postaPeriod );
}
