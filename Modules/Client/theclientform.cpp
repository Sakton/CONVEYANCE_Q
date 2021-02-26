#include "theclientform.h"

#include <QDialogButtonBox>
#include <QSqlQuery>
#include <map>

#include "Modules/Country/thecountryform.h"
#include "Utility/CreatorDbConveyance/conveyancesqldatabase.h"
#include "ui_theclientform.h"

TheClientForm::TheClientForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheClientForm ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );  //удаление при закрытии если вызов через указатель
  ui->tabWidget->setCurrentIndex( 0 );
  readCountryFromDbAndSetup( );

  connect( ui->buttonBoxClient, QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &TheClientForm::slotClicked_Ok_Button ) );
  connect( ui->buttonBoxClient, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &TheClientForm::slotClicked_Cancel_Button ) );
  connect( ui->pushButtonAddCountryLegal, QOverload< bool >::of( &QPushButton::clicked ), this,
           QOverload<>::of( &TheClientForm::slotCallTheCountryForm ) );
  connect( ui->pushButtonAddLandMailing, QOverload< bool >::of( &QPushButton::clicked ), this,
           QOverload<>::of( &TheClientForm::slotCallTheCountryForm ) );
}

TheClientForm::~TheClientForm()
{
  qDebug( ) << "delete TheClientForm";
  delete ui;
}

void TheClientForm::slotClicked_Ok_Button( ) {
  std::map< QString, QString > clientData;

  clientData[ "сounterparty_nip" ] = ui->lineEditNip->text( );
  clientData[ "сounterparty_name" ] = ui->lineEditFirm->text( );
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

void TheClientForm::readCountryFromDbAndSetup( ) {
  //  ConveyanceSQLDatabase db;
  //  auto p_QueryAnswer = db.readAllTable( "country" );
  //  if ( p_QueryAnswer == nullptr ) return;
  //  QStringList list;
  //  while ( p_QueryAnswer->next( ) ) {
  //    list << p_QueryAnswer->value( "country_name" ).toString( );
  //  }
  //  ui->comboBoxLandLegal->clear( );
  //  ui->comboBoxLandLegal->addItems( list );
  //  ui->comboBoxLandMailing->clear( );
  //  ui->comboBoxLandMailing->addItems( list );
}

void TheClientForm::slotCallTheCountryForm( ) {
  auto p = new TheCountryForm;
  connect( p, QOverload<>::of( &TheCountryForm::signalInsertToDb ), this, QOverload<>::of( &TheClientForm::readCountryFromDbAndSetup ) );
  p->show( );
}
