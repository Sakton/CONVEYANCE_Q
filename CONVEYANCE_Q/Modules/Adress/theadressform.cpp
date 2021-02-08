#include "theadressform.h"

#include <QDebug>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <QStringList>
#include <map>

#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
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
  //  adressData[ "contragentData" ] = ui->lineEditContragent->text( );
  adressData[ "type_adress" ] = ui->comboBoxTypeAdress->currentText( );
  adressData[ "index_adress" ] = ui->lineEditIndex->text( );
  adressData[ "sity_adress" ] = ui->lineEditSity->text( );
  adressData[ "adress_adress" ] = ui->lineEditAdress->text( );
  adressData[ "land_adress" ] = ui->lineEditLand->text( );

  QueryDriver qdriver;
  qDebug( ) << qdriver.insertQueryString( "adress", adressData );
  ConveyanceSQLDatabase db;
  bool resInsert = db.insertToDb( qdriver.insertQueryString( "adress", adressData ) );
  qDebug( ) << "resInsert = " << resInsert;
  if ( resInsert ) {
    //после успешной вставки очистка формы
    ui->lineEditContragent->clear( );
    ui->comboBoxTypeAdress->clear( );
    ui->lineEditIndex->clear( );
    ui->lineEditSity->clear( );
    ui->lineEditAdress->clear( );
    ui->lineEditLand->clear( );
  } else {
    QMessageBox box( QMessageBox::Icon::Critical, tr( "ERROR INSERT TO DB" ), tr( "WOW!! ERROR INSERT TO DB" ), QMessageBox::Ok );
    box.exec( );
    this->close( );
  }
}

void TheAdressForm::slotClick_Cancel_Button( ) { this->close( ); }
