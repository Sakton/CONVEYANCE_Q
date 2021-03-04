#include "theautobrandform.h"

#include <QDialogButtonBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <map>

#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_theautobrandform.h"

TheAutoBrandForm::TheAutoBrandForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAutoBrandForm ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), this, QOverload<>::of( &TheAutoBrandForm::slotButtonOkClicked ) );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &TheAutoBrandForm::slotButtonCancelClicked ) );
}

TheAutoBrandForm::~TheAutoBrandForm()
{
  delete ui;
}

void TheAutoBrandForm::slotButtonOkClicked( ) {
  std::map< QString, QString > data;
  //проверка на пустоту в БД ( ограничение полей )
  data[ "name_brand" ] = ui->lineEditBrand->text( ).toUpper( ).trimmed( );
  data[ "series_brand" ] = ui->lineEditSeries->text( ).toUpper( ).trimmed( );
  data[ "marka_brand" ] = ui->lineEditMarka->text( ).toUpper( ).trimmed( );

  if ( !QSqlQuery( ).exec( QueryDriver::insertQueryString( "autobrand", data ) ) ) {
    QMessageBox::critical( nullptr, tr( "CRITICAL AUTOBRAND" ), tr( "ERROR INSERT TO DB" ) );
    this->close( );
  }
  emit signalInsertedToDatabase( );
  ui->lineEditBrand->clear( );
  ui->lineEditSeries->clear( );
  ui->lineEditMarka->clear( );
}

void TheAutoBrandForm::slotButtonCancelClicked( ) { this->close( ); }
