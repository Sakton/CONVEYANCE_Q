#include "thedelegateformaauto.h"
#include "ui_thedelegateformaauto.h"

TheDelegateFormaAuto::TheDelegateFormaAuto( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheDelegateFormaAuto ) {
  ui->setupUi( this );
  QPixmap image;
  image.load( ":/image/volvo.jpg" );
  ui->label->resize( image.size( ) );
  ui->labelImg->setPixmap( image );
}

TheDelegateFormaAuto::~TheDelegateFormaAuto()
{
  delete ui;
}
