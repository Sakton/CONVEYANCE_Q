#include "thelandform.h"

#include <QDialogButtonBox>
#include <map>

#include "ui_thelandform.h"

TheLandForm::TheLandForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheLandForm ) {
  ui->setupUi( this );
  connect( ui->buttonBoxLand, QOverload<>::of( &QDialogButtonBox::accepted ), this, QOverload<>::of( &TheLandForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxLand, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &TheLandForm::slotClick_Cancel_Button ) );
}

TheLandForm::~TheLandForm()
{
  delete ui;
}

void TheLandForm::slotClick_OK_Button( ) {
  std::map< QString, QString > landData;
  landData[ "nameLand" ] = ui->lineEditName->text( );
  landData[ "phoneCodeLand" ] = ui->lineEditPhoneCode->text( );
  landData[ "abbreviatedLand" ] = ui->lineEditAbbreviated->text( );
  landData[ "vatRateLand" ] = ui->lineEditVatRate->text( );

  for ( auto &el : landData ) qDebug( ) << el.first << " ---> " << el.second;
}

void TheLandForm::slotClick_Cancel_Button( ) { this->close( ); }
