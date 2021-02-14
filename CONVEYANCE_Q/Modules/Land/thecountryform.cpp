#include "thecountryform.h"

#include <QDialogButtonBox>
#include <QMessageBox>
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

TheCountryForm::~TheCountryForm( ) { delete ui; }

void TheCountryForm::slotClick_OK_Button( ) {
  std::map< QString, QString > countryData;
  countryData[ "country_name" ] = ui->lineEditName->text( );
  countryData[ "country_phonecode" ] = ui->lineEditPhoneCode->text( );
  countryData[ "country_abbriviated" ] = ui->lineEditAbbreviated->text( );
  countryData[ "country_vatrate" ] = ui->lineEditVatRate->text( );
  ConveyanceSQLDatabase db;
  if ( !db.insertToDb( QueryDriver::insertQueryString( "country", countryData ) ) ) {
    QMessageBox::critical( this, "ERROR", "ERROR INSERT TO DB", QMessageBox::Ok );
    this->close( );
  }
  emit signalInsertToDb( );  //сигнал что добавление в базу
  //очистка формы, подготовка к новым вводам
  ui->lineEditName->clear( );
  ui->lineEditPhoneCode->clear( );
  ui->lineEditAbbreviated->clear( );
  ui->lineEditVatRate->clear( );
}

void TheCountryForm::slotClick_Cancel_Button( ) { this->close( ); }
