#include "workformorder.h"
#include "Modules/Orders/ModelOrder/modelorderdata.h"
#include "Utility/AllConstants.h"
#include "ui_workformorder.h"
#include <QDialogButtonBox>

WorkFormOrder::WorkFormOrder( ModelOrderData *model, QWidget *parent ) :
    QWidget( parent ), ui( new Ui::WorkFormOrder ), model_ { model } {
    ui->setupUi( this );
    setAttribute( Qt::WA_DeleteOnClose );
    setWindowModality( Qt::WindowModality::ApplicationModal );
    connects( );
}

WorkFormOrder::~WorkFormOrder( ) {
    delete ui;
}

void WorkFormOrder::connects( ) {
    connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), this, QOverload<>::of( &WorkFormOrder::slotOkButton ) );
    connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this, QOverload<>::of( &WorkFormOrder::slotCancelButton ) );
}

void WorkFormOrder::slotOkButton( ) {
    using Line = AllConstatnts::LineHash;
    Line tmp;
    ui->templateFormOrder->readDataOfForm( tmp );
    if ( model_->insert( tmp ) )
        close( );
}

void WorkFormOrder::slotCancelButton( ) {
    close( );
}
