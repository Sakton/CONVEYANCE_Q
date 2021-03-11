#include "viewerdataautopark.h"

#include <QDialogButtonBox>
#include <QSqlError>
#include <QSqlQuery>

#include "../Delegat/DelegatForm/thedelegateformaauto.h"
#include "../Delegat/delegateauto.h"
#include "../Model/modellistauto.h"
#include "../theautomobilform.h"
#include "Utility/AllConstants.h"
#include "ui_viewerdataautopark.h"

ViewerDataAutopark::ViewerDataAutopark( QWidget *parent ) : QWidget( parent ), ui( new Ui::ViewerDataAutopark ) {
  ui->setupUi( this );

  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), ui->templateTheAutomobilForm,
           QOverload<>::of( &TemplateTheAutomobilForm::slotClick_OK_Button ) );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &ViewerDataAutopark::slotClickCancelButton ) );
  setElementsWidget( );
}

ViewerDataAutopark::~ViewerDataAutopark()
{
  delete ui;
}

void ViewerDataAutopark::slotClickCancelButton( ) {
  qDebug( ) << "ViewerDataAutopark::slotClickCancelButton( )";
  this->close( );
}

void ViewerDataAutopark::setElementsWidget( ) {
  QSqlQuery query;
  if ( query.exec( "SELECT name_brand, series_brand, marka_brand, days_before FROM " + QLatin1String( AllConstatnts::dbSheme ) +
                   ".autopark;" ) ) {
    while ( query.next( ) ) {
      auto item = new QListWidgetItem;
      ui->listWidgetAuto->addItem( item );
      auto elem = new TheDelegateFormaAuto;
      item->setSizeHint( elem->size( ) );
      elem->setData( query.value( "name_brand" ).toString( ), query.value( "series_brand" ).toString( ),
                     query.value( "marka_brand" ).toString( ), query.value( "days_before" ).toString( ) );
      // connect(item, QOverload<>);
      ui->listWidgetAuto->setItemWidget( item, elem );
    }
    ui->labelCountAutos->setText( QString::number( ui->listWidgetAuto->count( ) ) );
  } else {
    qDebug( ) << query.lastError( ).text( );
  }
}
