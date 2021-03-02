#include "thecountryform.h"

#include <QDialogButtonBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <map>

#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_thecountryform.h"

TheCountryForm::TheCountryForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheCountryForm ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );  //удаляет при закрытии
  connect( ui->buttonBoxLand, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheCountryForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxLand, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheCountryForm::slotClick_Cancel_Button ) );
}

TheCountryForm::~TheCountryForm( ) {
  delete ui;
}

void TheCountryForm::slotClick_OK_Button( ) {
  std::map< QString, QString > countryData;
  countryData[ "name" ] = ui->lineEditName->text( );
  countryData[ "phonecode" ] = ui->lineEditPhoneCode->text( );
  countryData[ "abbriviated" ] = ui->lineEditAbbreviated->text( );
  countryData[ "nds_vat" ] = ui->lineEditVatRate->text( );
  ConveyanceSQLDatabase db;
  QSqlQuery query;
  if ( !query.exec( QueryDriver::insertQueryString( "country", countryData ) ) ) {
    QMessageBox::critical( this, "ERROR", "ERROR INSERT TO DB", QMessageBox::Ok );
  } else {
    emit signalInsertToDb( );  //сигнал что добавление в базу
  }
  this->close( );
}

void TheCountryForm::slotClick_Cancel_Button( ) { this->close( ); }
