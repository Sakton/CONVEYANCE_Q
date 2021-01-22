#include "theblacklistform.h"

#include "ui_theblacklistform.h"

TheBlackListForm::TheBlackListForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheBlackListForm ) {
  ui->setupUi( this );
}

TheBlackListForm::~TheBlackListForm( ) { delete ui; }
