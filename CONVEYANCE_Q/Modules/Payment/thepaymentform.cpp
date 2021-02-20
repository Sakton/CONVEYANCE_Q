#include "thepaymentform.h"

#include <QDialogButtonBox>
#include <map>

#include "ui_thepaymentform.h"

QString s { "this adding from db" };

ThePaymentForm::ThePaymentForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::ThePaymentForm ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );
  ui->comboBoxCounter->addItem( s );
  ui->comboBoxBaseDocument->addItem( s );

  connect( ui->buttonBoxPayment, QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &ThePaymentForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxPayment, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &ThePaymentForm::slotClick_Cancel_Button ) );
}

ThePaymentForm::~ThePaymentForm()
{
  delete ui;
}

void ThePaymentForm::slotClick_OK_Button( ) {
  std::map< QString, QString > dataPost;
  dataPost[ "datePayment" ] = ui->dateEditPayment->date( ).toString( );
  dataPost[ "counterParty" ] = ui->comboBoxCounter->currentText( );
  dataPost[ "baseDocument" ] = ui->comboBoxBaseDocument->currentText( );
  dataPost[ "numberDocument" ] = ui->lineEditNumberDocument->text( );
  dataPost[ "dateReceipt" ] = ui->dateEditDateReceipt->date( ).toString( );
  dataPost[ "gross" ] = ui->lineEditGross->text( );
  dataPost[ "currencyGross" ] = ui->comboBoxCurrencyGross->currentText( );
  if ( ui->groupBoxSplitPayment->isChecked( ) ) {
    dataPost[ "net" ] = ui->lineEditNet->text( );
    dataPost[ "currency_net" ] = ui->comboBoxCurrencyNet->currentText( );
    dataPost[ "vat" ] = ui->lineEditVAT->text( );
    dataPost[ "currency_vat" ] = ui->comboBoxCurrencyVat->currentText( );
  }

  for ( auto &el : dataPost ) qDebug( ) << el.first << " --> " << el.second;
}

void ThePaymentForm::slotClick_Cancel_Button( ) { this->close( ); }
