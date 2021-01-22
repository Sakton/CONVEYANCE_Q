#include "theadressform.h"

// #include "ui_theadress.h"
#include "ui_theadressform.h"

TheAdressForm::TheAdressForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAdressForm ) {
  ui->setupUi(this);
}

TheAdressForm::~TheAdressForm( ) { delete ui; }
