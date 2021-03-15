#include "insertformauto.h"
#include "ui_insertformauto.h"

InsertFormAuto::InsertFormAuto( QWidget *parent ) : QWidget( parent ), ui( new Ui::InsertFormAuto ) { ui->setupUi( this ); }

InsertFormAuto::~InsertFormAuto()
{
  delete ui;
}
