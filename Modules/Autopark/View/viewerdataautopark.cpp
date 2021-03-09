#include "viewerdataautopark.h"

#include "../theautomobilform.h"
#include "ui_viewerdataautopark.h"

ViewerDataAutopark::ViewerDataAutopark( QWidget *parent ) : QWidget( parent ), ui( new Ui::ViewerDataAutopark ) {
  ui->setupUi( this );
  connect( ui->theAutomobilForm, QOverload<>::of( &TheAutomobilForm::signalClickOkButton ), this,
           QOverload<>::of( &ViewerDataAutopark::slotClickOkButton ) );
  connect( ui->theAutomobilForm, QOverload<>::of( &TheAutomobilForm::signalClickedCancelButton ), this,
           QOverload<>::of( &ViewerDataAutopark::slotClickCancelButton ) );
}

ViewerDataAutopark::~ViewerDataAutopark()
{
  delete ui;
}

void ViewerDataAutopark::slotClickOkButton( ) { qDebug( ) << "ViewerDataAutopark::slotClickOkButton()"; }

void ViewerDataAutopark::slotClickCancelButton( ) {
  qDebug( ) << "ViewerDataAutopark::slotClickCancelButton( )";
  this->close( );
}
