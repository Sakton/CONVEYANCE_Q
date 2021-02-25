#include "thepostform.h"

#include <QDialogButtonBox>
#include <map>

#include "ui_thepostform.h"

QString s1 { "this adding from db" };

ThePostForm::ThePostForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::ThePostForm ) {
  ui->setupUi( this );
  ui->comboBoxOrderPost->addItem( s1 );
  ui->comboBoxTypePost->addItem( s1 );
  ui->comboBoxOffice->addItem( s1 );

  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), this, QOverload<>::of( &ThePostForm::slotClick_OK_Button ) );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this, QOverload<>::of( &ThePostForm::slotClick_Cancel_Button ) );
}

ThePostForm::~ThePostForm()
{
  delete ui;
}

void ThePostForm::slotClick_OK_Button( ) {
  std::map< QString, QString > postData;
  postData[ "order_post" ] = ui->comboBoxOrderPost->currentText( );
  postData[ "code_post" ] = ui->lineEditCodePost->text( );
  postData[ "data_send" ] = ui->dateEditSend->date( ).toString( );
  postData[ "data_receiver" ] = ui->dateEditReceived->date( ).toString( );
  postData[ "answer_api" ] = ui->lineEditAnswer_API->text( );
  postData[ "type_post" ] = ui->comboBoxTypePost->currentText( );
  postData[ "post_ofice" ] = ui->comboBoxOffice->currentText( );
  postData[ "priority" ] = QString::number( ui->checkBoxPriority->checkState( ) );
  postData[ "delievered" ] = QString::number( ui->checkBoxDelivered->checkState( ) );

  for ( auto &el : postData ) qDebug( ) << el.first << " --> " << el.second;
}

void ThePostForm::slotClick_Cancel_Button( ) { this->close( ); }
