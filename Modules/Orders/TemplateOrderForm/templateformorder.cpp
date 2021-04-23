#include "templateformorder.h"

#include <QDate>
#include <QDebug>
#include <stdexcept>

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
    connections( );
    cours->dateCours( QDate::currentDate( ) );
}

TemplateFormOrder::~TemplateFormOrder( ) {
    delete ui;
    cours->deleteLater( );
}

void TemplateFormOrder::slotCurrentCoursValut( double cours ) {
    ui->labelCours->setText( "1EU = " + QString::number( cours ) + " PL" );
}

void TemplateFormOrder::slotSetStavkaEur( ) {
    double stavka = ui->lineEditRate->text( ).toDouble( );
    QString stavkaStr = QString::number( stavka / cours->getCurrentCours( ) );
    stavkaStr.chop( 3 );
    ui->labelStavkaEur->setText( stavkaStr );
}

void TemplateFormOrder::setDataInForm( const LineType &dataLine ) {
    try {
        ui->dateEditDate->setDate( QDate::fromString( dataLine.at( orders::DATE_CREATE ), "dd-MM-yyyy" ) );
        ui->comboBoxPlace->setCurrentText( dataLine.at( orders::NET_PLOSCHADKA ) );
        ui->lineEditContract->setText( dataLine.at( orders::NUMBER_CONTRACT ) );
        ui->lineEditOrderNum->setText( dataLine.at( orders::NUMBER_ORDERS ) );
        ui->comboBoxClient->setCurrentText( dataLine.at( orders::CLIENT ) );
        ui->comboBoxContacts->setCurrentText( dataLine.at( orders::CONTACTS ) );
        ui->comboBoxDriver->setCurrentText( dataLine.at( orders::DRIVER ) );
        ui->lineEditArrival->setText( dataLine.at( orders::DOEZD ) );
        ui->lineEditRoute->setText( dataLine.at( orders::ROUTE ) );
        ui->lineEditRate->setText( dataLine.at( orders::RATE ) );
        ui->lineEditPrice->setText( dataLine.at( orders::PRICE ) );
        ui->comboBoxCurrency->setCurrentText( dataLine.at( orders::VALYTA ) );
        ui->labelCours->setText( dataLine.at( orders::EXCHANGE ) );
        ui->comboBoxPaymentPeriod->setCurrentText( dataLine.at( orders::PAYMENT_PERIOD ) );
        ui->comboBoxPostalTransferPeriod->setCurrentText( dataLine.at( orders::POSTAL_TRANSFER ) );
        ui->checkBoxCopyCMR->setCheckState( static_cast< Qt::CheckState >( dataLine.at( orders::SEND_TWO_COPY ).toInt( ) ) );
        ui->checkBoxContractOriginal->setCheckState( static_cast< Qt::CheckState >( dataLine.at( orders::SEND_ORIGINAL ).toInt( ) ) );
        ui->plainTextEditNotes->setPlainText( dataLine.at( orders::NOTE ) );
    } catch ( std::out_of_range &e ) {
        qDebug( ) << "ERROR TemplateFormOrder::setDataInForm " << e.what( );
    }
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

void TemplateFormOrder::connections( ) {
    cours = new ExchangeRates;
    connect( cours, QOverload< double >::of( &ExchangeRates::signalCurrentCours ), this, QOverload< double >::of( &TemplateFormOrder::slotCurrentCoursValut ) );
    connect( ui->lineEditRate, QOverload<>::of( &QLineEdit::editingFinished ), this, QOverload<>::of( &TemplateFormOrder::slotSetStavkaEur ) );
}
