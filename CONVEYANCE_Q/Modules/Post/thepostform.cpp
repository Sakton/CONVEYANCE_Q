#include "thepostform.h"
#include "ui_thepostform.h"

ThePostForm::ThePostForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::ThePostForm ) { ui->setupUi( this ); }

ThePostForm::~ThePostForm()
{
  delete ui;
}
