#include "thedataforcreatedbform.h"

#include <QDialogButtonBox>

#include "../CreatorDbConveyance/dbtablecreator.h"
#include "ui_thedataforcreatedbform.h"

TheDataForCreateDBForm::TheDataForCreateDBForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheDataForCreateDBForm ) {
  ui->setupUi( this );

  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &TheDataForCreateDBForm::slotClicked_OK_Button ) );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &TheDataForCreateDBForm::slotClicked_Cancel_Button ) );
}

TheDataForCreateDBForm::~TheDataForCreateDBForm()
{
  delete ui;
}

void TheDataForCreateDBForm::slotClicked_OK_Button( ) {
  // 1.читаю форму
  // 2.проверяю на ошибкии ввода
  // 3.делаю базу. (креатор базы сам делает таблицы)
}

void TheDataForCreateDBForm::slotClicked_Cancel_Button( ) {}
