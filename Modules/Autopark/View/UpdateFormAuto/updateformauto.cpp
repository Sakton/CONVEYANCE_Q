#include "updateformauto.h"
#include <QDialogButtonBox>
#include "ui_updateformauto.h"

UpdateFormAuto::UpdateFormAuto( QWidget* parent )
    : QWidget( parent ), ui( new Ui::UpdateFormAuto ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );

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
  // ui->templateFormAuto->writeForm( data );
  ui->templateFormAuto->setDataInForm( data );
  ui->templateFormAuto->setVinNoChange( );
}

const UpdateFormAuto::Line& UpdateFormAuto::getDataInForm( ) const {
  return ui->templateFormAuto->dataForm( );
}

void UpdateFormAuto::slotClickedOkButton( ) {
  emit signalDataUpdate( );
}

void UpdateFormAuto::slotClickedCancelButton( ) {
  qDebug( ) << "UpdateFormAuto::slotClickedCancelButton";
}
