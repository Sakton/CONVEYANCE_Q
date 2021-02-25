#include "theblacklistform.h"

#include <QDialogButtonBox>
#include <map>

#include "ui_theblacklistform.h"

const QStringList recovery { QObject::tr( "Recovery TransEU" ), QObject::tr( "Recovery Timo" ),
			     QObject::tr( "Delay Of Payment" ), QObject::tr( "Not Payment" ), QObject::tr( "Other" ) };

TheBlackListForm::TheBlackListForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheBlackListForm ) {
  setAttribute( Qt::WA_DeleteOnClose );  // del on close
  ui->setupUi( this );
  ui->comboBoxWhy->addItems( recovery );

  connect( ui->buttonBoxBlackList, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheBlackListForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxBlackList, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheBlackListForm::slotClick_Cancel_Button ) );
}

TheBlackListForm::~TheBlackListForm( ) { delete ui; }

void TheBlackListForm::slotClick_OK_Button( ) {
  std::map< QString, QString > blackListData;
  blackListData[ "companyNameBlackList" ] = ui->lineEditName->text( );
  blackListData[ "companyNIPBlackList" ] = ui->lineEditNIP->text( );
  blackListData[ "sityBlackList" ] = ui->lineEditSity->text( );
  blackListData[ "dateAddBlackList" ] = ui->dateEditAdd->date( ).toString( );
  blackListData[ "noteBlackList" ] = ui->plainTextEditNote->toPlainText( );
  blackListData[ "whyBlackList" ] = ui->comboBoxWhy->currentText( );

  for ( auto &el : blackListData ) qDebug( ) << el.first << " --> " << el.second;

  // TODO this adding to DB
}

void TheBlackListForm::slotClick_Cancel_Button( ) { this->close( ); }
