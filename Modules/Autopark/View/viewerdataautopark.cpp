#include "viewerdataautopark.h"

#include <QDialogButtonBox>

#include "../Delegat/delegateauto.h"
#include "../Model/modellistauto.h"
#include "../theautomobilform.h"
#include "ui_viewerdataautopark.h"

ViewerDataAutopark::ViewerDataAutopark( QWidget *parent ) : QWidget( parent ), ui( new Ui::ViewerDataAutopark ) {
  ui->setupUi( this );

  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), ui->templateTheAutomobilForm,
           QOverload<>::of( &TemplateTheAutomobilForm::slotClick_OK_Button ) );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &ViewerDataAutopark::slotClickCancelButton ) );

  ui->listView->setModel( new ModelListAuto( this ) );
  ui->listView->setItemDelegate( new DelegateAuto( this ) );
}

ViewerDataAutopark::~ViewerDataAutopark()
{
  delete ui;
}

void ViewerDataAutopark::slotClickCancelButton( ) {
  qDebug( ) << "ViewerDataAutopark::slotClickCancelButton( )";
  this->close( );
}
