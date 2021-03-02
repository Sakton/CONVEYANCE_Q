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

const QStringList typeAdress { QObject::tr( "Legal Adress" ), QObject::tr( "Mail Adress" ) };

TheAdressForm::TheAdressForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAdressForm ) {
  ui->setupUi( this );
  ui->comboBoxTypeAdress->addItems( typeAdress );
  ui->comboBoxCountry->addItems( country( ) );
  setAttribute( Qt::WA_DeleteOnClose );  //удаляет при закрытии

  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &TheAdressForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAdressForm, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &TheAdressForm::slotClick_Cancel_Button ) );
  connect( ui->pushButtonAddCountry, QOverload< bool >::of( &QPushButton::clicked ), this,
           QOverload<>::of( &TheAdressForm::slotCallAddLandForm ) );
}

TheAdressForm::~TheAdressForm( ) {
  delete ui;
}

void TheAdressForm::slotClick_OK_Button( ) {
  std::map< QString, QString > adressData;
  adressData[ "type" ] = ui->comboBoxTypeAdress->currentText( );
  adressData[ "index" ] = ui->lineEditIndex->text( );
  adressData[ "sity" ] = ui->lineEditSity->text( );
  adressData[ "adress" ] = ui->lineEditAdress->text( );
  adressData[ "country_name" ] = ui->comboBoxCountry->currentText( );

  ConveyanceSQLDatabase db;
  QSqlQuery query( db.database( ) );
  if ( query.exec( QueryDriver::insertQueryString( "adress", adressData ) ) ) {
    // после успешной вставки очистка формы
    ui->lineEditIndex->clear( );
    ui->lineEditSity->clear( );
    ui->lineEditAdress->clear( );
  } else {
    QMessageBox::critical( nullptr, tr( "ERROR INSERT TO DB" ), tr( "WOW!! ERROR INSERT TO DB" ) );
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
  ui->comboBoxCountry->addItems( country( ) );
}

QStringList TheAdressForm::country( ) {
  ConveyanceSQLDatabase db;
  QStringList lands;
  QSqlQuery query;
  if ( query.exec( QueryDriver::selectAll( "country" ) ) ) {
    while ( query.next( ) ) lands << query.value( "name" ).toString( );
    return lands;
  } else {
    QMessageBox::critical( nullptr, tr( "CRITICAL" ), tr( "NO READ FROM DB" ) );
  }
  return { };
}
