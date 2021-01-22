#include "theorderform.h"
#include "ui_theorderform.h"

TheOrderForm::TheOrderForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheOrderForm ) { ui->setupUi( this ); }

TheOrderForm::~TheOrderForm( ) { delete ui; }
