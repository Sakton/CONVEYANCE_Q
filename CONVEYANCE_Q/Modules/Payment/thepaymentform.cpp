#include "thepaymentform.h"

#include <map>

#include "ui_thepaymentform.h"

ThePaymentForm::ThePaymentForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::ThePaymentForm ) {
  ui->setupUi(this);
}

ThePaymentForm::~ThePaymentForm()
{
  delete ui;
}

void ThePaymentForm::slotClick_OK_Button( ) {
  std::map< QString, QString > dataPost;
  dataPost[ "datePayment" ] = ui->dateEditPayment->date( ).toString( );
  dataPost[ "counterParty" ] = ui->comboBoxCounter->currentText( );
  // dataPost[ "" ]
}

void ThePaymentForm::slotClick_Cancel_Button( ) { this->close( ); }
