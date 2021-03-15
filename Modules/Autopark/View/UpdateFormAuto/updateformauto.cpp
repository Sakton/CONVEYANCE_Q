#include "updateformauto.h"
#include "ui_updateformauto.h"

UpdateFormAuto::UpdateFormAuto( QWidget *parent ) : QWidget( parent ), ui( new Ui::UpdateFormAuto ) { ui->setupUi( this ); }

UpdateFormAuto::~UpdateFormAuto()
{
  delete ui;
}
