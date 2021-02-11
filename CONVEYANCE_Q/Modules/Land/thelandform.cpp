#include "thelandform.h"

#include <QDialogButtonBox>
#include <QMessageBox>
#include <map>

#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "Utility/CreatorDbConveyance/querydriver.h"
#include "ui_thelandform.h"

TheLandForm::TheLandForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheLandForm ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );  //удаляет при закрытии
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
  landData[ "land_name" ] = ui->lineEditName->text( );
  landData[ "land_phonecode" ] = ui->lineEditPhoneCode->text( );
  landData[ "land_abbriviated" ] = ui->lineEditAbbreviated->text( );
  landData[ "land_vatrate" ] = ui->lineEditVatRate->text( );

  ConveyanceSQLDatabase db;
  if ( !db.insertToDb( QueryDriver::insertQueryString( "land", landData ) ) )
    QMessageBox::critical( this, "ERROR", "ERROR INSRT TO DB", QMessageBox::Ok );
  this->close( );
}

void TheLandForm::slotClick_Cancel_Button( ) {
  this->close( );
}
