#include "thepaymentform.h"
#include "ui_thepaymentform.h"

ThePaymentForm::ThePaymentForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::ThePaymentForm ) {
  ui->setupUi(this);
}

ThePaymentForm::~ThePaymentForm()
{
  delete ui;
}

void ThePaymentForm::slotClick_OK_Button( ) {}

void ThePaymentForm::slotClick_Cancel_Button( ) { this->close( ); }
