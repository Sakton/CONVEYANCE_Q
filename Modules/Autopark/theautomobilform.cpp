#include "theautomobilform.h"

#include <QDebug>
#include <map>

#include "ui_theautomobilform.h"

TheAutomobilForm::TheAutomobilForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheAutomobilForm ) {
  ui->setupUi( this );
  setAttribute( Qt::WA_DeleteOnClose );
  connect( ui->buttonBoxAutomobileAdding, QOverload<>::of( &QDialogButtonBox::accepted ), ui->templateTheAutomobilForm,
           QOverload<>::of( &TemplateTheAutomobilForm::slotClick_OK_Button ) );
  connect( ui->buttonBoxAutomobileAdding, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &TheAutomobilForm::slotClick_Cancel_Button ) );
}

TheAutomobilForm::~TheAutomobilForm( ) { delete ui; }

void TheAutomobilForm::slotClick_Cancel_Button( ) { this->close( ); }
