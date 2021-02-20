#include "theorderform.h"

#include <QPushButton>
#include <map>

#include "ui_theorderform.h"

const QStringList place { "trans.eu", "timocom.com", "teleroute.com", QObject::tr( "Other" ) };
const QStringList currency { "PLN", "EUR" };
const QStringList period { "60 day", "55 day", "45 day", "35 day", "30 day", "14 day", "Unloading" };
const QStringList postPeriod { "5 day", "7 day", "10 day", "14 day", "20 day", "25 day", "30 day", "on e-mail" };

TheOrderForm::TheOrderForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheOrderForm ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );
  ui->comboBoxPlace->addItems( place );
  ui->comboBoxCurrency->addItems( currency );
  ui->comboBoxPeriod->addItems( period );
  ui->comboBoxDriver->addItem( "from DB" );
  ui->comboBoxContacts->addItem( "from DB" );
  ui->comboBoxCustomer->addItem( "from DB" );
  ui->comboBoxMaxTime->addItems( postPeriod );
  setAttribute( Qt::WA_DeleteOnClose );  //удаление при закрытии

  connect( ui->pushButtonOKForm, QOverload< bool >::of( &QPushButton::clicked ), this,
	   QOverload<>::of( &TheOrderForm::slotClick_OK_Button ) );
  connect( ui->pushButtonCancelForm, QOverload< bool >::of( &QPushButton::clicked ), this,
	   QOverload<>::of( &TheOrderForm::slotClick_Cancel_Button ) );
}

TheOrderForm::~TheOrderForm( ) { delete ui; }

void TheOrderForm::slotClick_OK_Button( ) {
  std::map< QString, QString > orderData;
  orderData[ "orderDate" ] = ui->dateEditDate->date( ).toString( );
  orderData[ "orderPlace" ] = ui->comboBoxPlace->currentText( );
  orderData[ "orderID" ] = ui->lineEditID->text( );
  orderData[ "orderContract" ] = ui->lineEditContract->text( );
  orderData[ "orderOrderNum" ] = ui->lineEditOrderNum->text( );
  orderData[ "orderCustomer" ] = ui->comboBoxCustomer->currentText( );
  orderData[ "orderDriver" ] = ui->comboBoxDriver->currentText( );
  orderData[ "orderContacts" ] = ui->comboBoxContacts->currentText( );
  orderData[ "orderPrice" ] = ui->lineEditPrice->text( );
  orderData[ "orderPeriod" ] = ui->comboBoxPeriod->currentText( );
  orderData[ "orderCurrency" ] = ui->comboBoxCurrency->currentText( );
  orderData[ "orderArrival" ] = ui->lineEditArrival->text( );
  orderData[ "orderRoute" ] = ui->lineEditArrival->text( );
  orderData[ "orderRate" ] = ui->lineEditRate->text( );
  orderData[ "orderMaxTime" ] = ui->comboBoxMaxTime->currentText( );
  orderData[ "orderCopyCMR" ] = QString::number( ui->checkBoxCopyCMR->checkState( ) );
  orderData[ "orderContractOriginal" ] = QString::number( ui->checkBoxContractOriginal->checkState( ) );
  orderData[ "orderTextNote" ] = ui->plainTextEditNotes->toPlainText( );

  // TODO this
  for ( auto &el : orderData ) qDebug( ) << el.first << " --> " << el.second;
}

void TheOrderForm::slotClick_Cancel_Button( ) { this->close( ); }
