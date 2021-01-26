#include "thenoteform.h"

#include <QDebug>
#include <QDialogButtonBox>
#include <QStringList>
#include <map>

#include "ui_thenoteform.h"

const QStringList currency { "PLN", "EUR" };

TheNoteForm::TheNoteForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheNoteForm ) {
  ui->setupUi( this );
  ui->comboBoxCurrency->addItems( currency );
  ui->comboBoxContactor->addItem( "This Addig from DB" );
  ui->comboBoxInvoiceVat->addItem( "This Addig from DB" );

  connect( ui->buttonBoxNote, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheNoteForm::slotClick_Ok_Button ) );
  connect( ui->buttonBoxNote, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheNoteForm::slotClick_Cancel_Button ) );
}

TheNoteForm::~TheNoteForm( ) { delete ui; }

void TheNoteForm::slotClick_Ok_Button( ) {
  std::map< QString, QString > noteData;
  noteData[ "noteId" ] = ui->lineEditID->text( );
  noteData[ "noteData" ] = ui->dateEditDate->date( ).toString( );
  noteData[ "noteContactor" ] = ui->comboBoxContactor->currentText( );
  noteData[ "noteContract" ] = ui->lineEditContract->text( );
  noteData[ "noteInvoiceVat" ] = ui->comboBoxInvoiceVat->currentText( );
  noteData[ "noteRequiresData" ] = ui->dateEditDateRequisites->date( ).toString( );
  noteData[ "noteTermin" ] = ui->dateEditTermin->date( ).toString( );
  noteData[ "noteSumm" ] = ui->lineEditSum->text( );
  noteData[ "noteCurrency" ] = ui->comboBoxCurrency->currentText( );

  for ( auto &el : noteData ) qDebug( ) << el.first << " --> " << el.second;
}

void TheNoteForm::slotClick_Cancel_Button( ) { this->close( ); }
