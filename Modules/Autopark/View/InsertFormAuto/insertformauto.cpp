#include "insertformauto.h"
#include <QDialogButtonBox>
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

  qDebug( ) << qs;

  query.exec( QueryDriver::insertQueryString(
      QLatin1String( "autopark" ), ui->templateFormAuto->dataForm( ) ) );
}

void InsertFormAuto::slotButtonRejected( ) {}
