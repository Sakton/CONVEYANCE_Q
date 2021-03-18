#include "insertformauto.h"
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include "../../../../Utility/CreatorDbConveyance/querydriver.h"
#include "../../Template/templateformauto.h"
#include "ui_insertformauto.h"

InsertFormAuto::InsertFormAuto( QWidget* parent )
    : QWidget( parent ), ui( new Ui::InsertFormAuto ) {
  ui->setupUi( this );

  setAttribute( Qt::WA_DeleteOnClose );

  connect( ui->buttonBoxAutomobileAdding,
           QOverload<>::of( &QDialogButtonBox::accepted ), this,
           QOverload<>::of( &InsertFormAuto::slotButtonAccepted ) );

  connect( ui->buttonBoxAutomobileAdding,
           QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &InsertFormAuto::slotButtonRejected ) );
}

InsertFormAuto::~InsertFormAuto()
{
  delete ui;
}

void InsertFormAuto::slotButtonAccepted( ) {
  ui->templateFormAuto->readConstDataForm( );
  QSqlQuery query;
  QString qs = QueryDriver::insertQueryString(
      QLatin1String( "autopark" ), ui->templateFormAuto->dataForm( ) );
  if ( !query.exec( QueryDriver::insertQueryString(
           QLatin1String( "autopark" ),
           ui->templateFormAuto->dataForm( ) ) ) ) {
    QMessageBox::critical( this, "ERROR INSERT", query.lastError( ).text( ) );
  }
}

void InsertFormAuto::slotButtonRejected( ) {
  this->close( );
}
