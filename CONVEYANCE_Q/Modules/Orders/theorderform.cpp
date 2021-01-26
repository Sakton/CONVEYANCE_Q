#include "theorderform.h"

#include <QPushButton>
#include <map>

#include "ui_theorderform.h"

const QStringList place { "trans.eu", "timocom.com", "teleroute.com", QObject::tr( "Other" ) };

TheOrderForm::TheOrderForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheOrderForm ) {
  ui->setupUi( this );
  ui->comboBoxPlace->addItems( place );

  connect( ui->pushButtonOKForm, QOverload< bool >::of( &QPushButton::clicked ), this,
	   QOverload<>::of( &TheOrderForm::slotClick_OK_Button ) );
  connect( ui->pushButtonCancelForm, QOverload< bool >::of( &QPushButton::clicked ), this,
	   QOverload<>::of( &TheOrderForm::slotClick_Cancel_Button ) );
}

TheOrderForm::~TheOrderForm( ) { delete ui; }

void TheOrderForm::slotClick_OK_Button( ) {
  std::map< QString, QString > orderData;
  orderData[ "orderDate" ] = ui->dateEditDate->date( ).toString( );
  // orderData[ "" ] = ui->

  // TODO this
  for ( auto &el : orderData ) qDebug( ) << el.first << " --> " << el.second;
}

void TheOrderForm::slotClick_Cancel_Button( ) { this->close( ); }
