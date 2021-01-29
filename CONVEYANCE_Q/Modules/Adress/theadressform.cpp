#include "theadressform.h"

#include <QDebug>
#include <QDialogButtonBox>
#include <QStringList>
#include <map>

#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "ui_theadressform.h"

const QStringList typeAdress { "Legal Address", "Mailing Address" };

TheAdressForm::TheAdressForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAdressForm ) {
  ui->setupUi( this );
  ui->comboBoxTypeAdress->addItems( typeAdress );

  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheAdressForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheAdressForm::slotClick_Cancel_Button ) );
}

TheAdressForm::~TheAdressForm( ) { delete ui; }

void TheAdressForm::slotClick_OK_Button( ) {
  std::map< QString, QString > adressData;
  adressData[ "contragentData" ] = ui->lineEditContragent->text( );
  adressData[ "typeAdressData" ] = ui->comboBoxTypeAdress->currentText( );
  adressData[ "indexData" ] = ui->lineEditIndex->text( );
  adressData[ "sityData" ] = ui->lineEditSity->text( );
  adressData[ "adressData" ] = ui->lineEditAdress->text( );
  adressData[ "landData" ] = ui->lineEditLand->text( );
  //  for ( auto &el : adressData ) qDebug( ) << el.first << " --> " << el.second;

  ConveyanceSQLDatabase db;
  if ( !db.openDb( ) ) {
    qDebug( ) << "ERROR OPEN DB";
  } else {
    qDebug( ) << "DB OK";
  }
}

void TheAdressForm::slotClick_Cancel_Button( ) { this->close( ); }
