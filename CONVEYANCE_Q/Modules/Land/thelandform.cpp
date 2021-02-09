#include "thelandform.h"

#include <QDialogButtonBox>
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
  qDebug( ) << "create LandForm";
}

TheLandForm::~TheLandForm()
{
  qDebug( ) << "delete LandForm";
  delete ui;
}

void TheLandForm::slotClick_OK_Button( ) {
  std::map< QString, QString > landData;
  landData[ "land_name" ] = ui->lineEditName->text( );
  landData[ "land_phonecode" ] = ui->lineEditPhoneCode->text( );
  landData[ "land_abbriviated" ] = ui->lineEditAbbreviated->text( );
  landData[ "land_vatrate" ] = ui->lineEditVatRate->text( );

  //  for ( auto &el : landData ) qDebug( ) << el.first << " ---> " << el.second;
  ConveyanceSQLDatabase db;
  QString que =
      "INSERT INTO land(land_abbriviated,land_name,land_phonecode,land_vatrate)VALUES('RUS','namesaassaas','095',13)"; /*QueryDriver::insertQueryString(
                                                                                                                            "land", landData
                                                                                                                            );*/
  qDebug( ) << que;
  if ( db.insertToDb( que /*QueryDriver::insertQueryString(  "land", landData*/ ) ) {
    qDebug( ) << "OK LAND";
  } else {
    qDebug( ) << "ERROR LAND";
  }
}

void TheLandForm::slotClick_Cancel_Button( ) {
  this->close( );
}
