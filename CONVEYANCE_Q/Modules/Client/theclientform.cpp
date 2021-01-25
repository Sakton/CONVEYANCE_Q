#include "theclientform.h"

#include <QDialogButtonBox>
#include <map>

#include "ui_theclientform.h"

TheClientForm::TheClientForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheClientForm ) {
  ui->setupUi( this );

  connect( ui->buttonBoxClient, QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &TheClientForm::slotClicked_Ok_Button ) );
  connect( ui->buttonBoxClient, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &TheClientForm::slotClicked_Cancel_Button ) );
}

TheClientForm::~TheClientForm()
{
  delete ui;
}

void TheClientForm::slotClicked_Ok_Button( ) {
  std::map< QString, QString > clientData;

  clientData[ "clientNipData" ] = ui->lineEditNip->text( );
  clientData[ "clientFirmNameData" ] = ui->lineEditFirm->text( );
  //**Legal
  clientData[ "clientSityLegalData" ] = ui->lineEditCityLegal->text( );
  clientData[ "clientAdressLegalData" ] = ui->lineEditAdressLegal->text( );
  clientData[ "clientLandLegalData" ] = ui->comboBoxLandLegal->currentText( );
  clientData[ "clientIndexLegalData" ] = ui->lineEditIndexLegal->text( );
  //**Mailing
  clientData[ "clientSityMailData" ] = ui->lineEditCityMailing->text( );
  clientData[ "clientAdressMailingData" ] = ui->lineEditAdressMailing->text( );
  clientData[ "clientLandMailData" ] = ui->comboBoxLandMailing->currentText( );
  clientData[ "clientIndexMailData" ] = ui->lineEditIndexMailing->text( );

  for ( auto &el : clientData ) {
    qDebug( ) << el.first << " ---> " << el.second;
  }
}
void TheClientForm::slotClicked_Cancel_Button( ) { this->close( ); }
