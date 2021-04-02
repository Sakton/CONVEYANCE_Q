#include "updateformauto.h"
#include <QDialogButtonBox>
#include "ui_updateformauto.h"

UpdateFormAuto::UpdateFormAuto( QWidget* parent )
    : QWidget( parent ), ui( new Ui::UpdateFormAuto ), state { State::INSERT } {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );
  setWindowModality( Qt::WindowModality::ApplicationModal );

  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &UpdateFormAuto::slotClickedOkButton ) );

  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &UpdateFormAuto::slotClickedCancelButton ) );
}

UpdateFormAuto::~UpdateFormAuto()
{
  delete ui;
}

void UpdateFormAuto::setDataInForm( const Line& data ) {
  ui->templateFormAuto->setDataInForm( data );
}

const UpdateFormAuto::Line& UpdateFormAuto::getDataInForm( ) const {
  return ui->templateFormAuto->dataForm( );
}

void UpdateFormAuto::slotClickedOkButton( ) {
  emit( state == State::INSERT ) ? signalNewData( ) : signalDataUpdate( );
}
void UpdateFormAuto::slotClickedCancelButton( ) { close( ); }
void UpdateFormAuto::setState( const State& value ) { state = value; }
