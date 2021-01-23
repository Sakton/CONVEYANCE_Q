#include "theadressform.h"

#include <QDebug>
#include <QDialogButtonBox>
#include <map>

#include "ui_theadressform.h"

TheAdressForm::TheAdressForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAdressForm ) {
  ui->setupUi( this );

  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheAdressForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheAdressForm::slotClick_Cancel_Button ) );
}

TheAdressForm::~TheAdressForm( ) { delete ui; }

void TheAdressForm::slotClick_OK_Button( ) {
  qDebug( ) << "TheAdressForm::slotClick_OK_Button( )";
  std::map< QString, QString > adressData;
  adressData[ "adress" ] = ui->lineEditAdress->text( );

  for ( auto &el : adressData ) qDebug( ) << el.first << " --> " << el.second;
}

void TheAdressForm::slotClick_Cancel_Button( ) { this->close( ); }
