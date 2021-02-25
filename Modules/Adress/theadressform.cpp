#include "theadressform.h"

#include <QDebug>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <map>
#include <memory>

#include "Modules/Country/thecountryform.h"
#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_theadressform.h"

const QStringList typeAdress { "Legal Address", "Mailing Address" };

TheAdressForm::TheAdressForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAdressForm ) {
  ui->setupUi( this );
  ui->comboBoxTypeAdress->addItems( typeAdress );
  ui->comboBoxCountry->addItems( lands( ) );
  setAttribute( Qt::WA_DeleteOnClose );  //удаляет при закрытии

  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &TheAdressForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheAdressForm::slotClick_Cancel_Button ) );
  connect( ui->pushButtonAddCountry, QOverload< bool >::of( &QPushButton::clicked ), this,
           QOverload<>::of( &TheAdressForm::slotCallAddLandForm ) );
}

TheAdressForm::~TheAdressForm( ) {
  qDebug( ) << "delete TheAdressForm";
  delete ui;
}

void TheAdressForm::slotClick_OK_Button( ) {
  std::map< QString, QString > adressData;
  adressData[ "adress_type" ] = ui->comboBoxTypeAdress->currentText( );
  adressData[ "adress_index" ] = ui->lineEditIndex->text( );
  adressData[ "adress_sity" ] = ui->lineEditSity->text( );
  adressData[ "adress_adress" ] = ui->lineEditAdress->text( );
  adressData[ "adress_coutry" ] = ui->comboBoxCountry->currentText( );

  QueryDriver qdriver;
  qDebug( ) << qdriver.insertQueryString( "adress", adressData );
  ConveyanceSQLDatabase db;
  bool resInsert = db.insertToDb( qdriver.insertQueryString( "adress", adressData ) );
  qDebug( ) << "resInsert = " << resInsert;
  if ( resInsert ) {
    // после успешной вставки очистка формы
    // ui->lineEditContragent->clear( );
    ui->comboBoxTypeAdress->clear( );
    ui->lineEditIndex->clear( );
    ui->lineEditSity->clear( );
    ui->lineEditAdress->clear( );
    // ui->lineEditLand->clear( );
  } else {
    QMessageBox box( QMessageBox::Icon::Critical, tr( "ERROR INSERT TO DB" ), tr( "WOW!! ERROR INSERT TO DB" ), QMessageBox::Ok );
    box.exec( );
    this->close( );
  }
}

void TheAdressForm::slotClick_Cancel_Button( ) { this->close( ); }

void TheAdressForm::slotCallAddLandForm( ) {
  TheCountryForm *lf = new TheCountryForm;
  connect( lf, QOverload<>::of( &TheCountryForm::signalInsertToDb ), this, QOverload<>::of( &TheAdressForm::slotLoadCountry ) );
  lf->show( );
}

void TheAdressForm::slotLoadCountry( ) {
  ui->comboBoxCountry->clear( );
  ui->comboBoxCountry->addItems( lands( ) );
}

QStringList TheAdressForm::lands( ) {
  ConveyanceSQLDatabase db;
  auto res = db.readAllTable( "country" );
  if ( res == nullptr ) return { };
  QStringList lands;
  while ( res->next( ) ) lands << res->value( "country_name" ).toString( );
  return lands;
}
