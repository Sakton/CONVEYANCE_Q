#include "workformorder.h"
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
    ui->templateFormOrder->readDataOfForm( );
    qDebug( ) << "WorkFormOrder::slotOkButton";
}

void WorkFormOrder::slotCancelButton( ) {
    qDebug( ) << "WorkFormOrder::slotCancelButton";
}
