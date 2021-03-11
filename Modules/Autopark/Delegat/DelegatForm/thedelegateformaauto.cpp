#include "thedelegateformaauto.h"
#include "ui_thedelegateformaauto.h"

TheDelegateFormaAuto::TheDelegateFormaAuto( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheDelegateFormaAuto ), key_ { } {
  ui->setupUi( this );
  QPixmap image;
  image.load( ":/image/volvo.jpg" );
  ui->labelImg->resize( image.size( ) );
  ui->labelImg->setPixmap( image );
}

void TheDelegateFormaAuto::setData( const QString &name, const QString &seria, const QString &mark, const QString &days ) {
  ui->labelNameBrand->setText( name );
  ui->labelSeria->setText( seria );
  ui->labelMark->setText( mark );
  ui->labelDays->setText( days );
}

void TheDelegateFormaAuto::setKey( const QString &key ) { this->key_ = key; }

QString TheDelegateFormaAuto::key( ) { return this->key_; }

TheDelegateFormaAuto::~TheDelegateFormaAuto()
{
  delete ui;
}
