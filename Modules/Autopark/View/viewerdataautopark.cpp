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
  setMouseTracking( true );
  //  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), ui->templateTheAutomobilForm,
  //           QOverload<>::of( &TemplateTheAutomobilForm::slotClick_OK_Button ) );

  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this,
           QOverload<>::of( &ViewerDataAutopark::slotClickCancelButton ) );
  connect( ui->listWidgetAuto, QOverload< QListWidgetItem * >::of( &QListWidget::itemClicked ), this,
           QOverload< QListWidgetItem * >::of( &ViewerDataAutopark::slotClickedAutoItem ) );
  readAutosFromDb( );
  setElementsWidget( );
}

ViewerDataAutopark::~ViewerDataAutopark()
{
  delete ui;
}

void ViewerDataAutopark::slotClickCancelButton( ) {
  this->close( );
}

void ViewerDataAutopark::slotClickedOkButton( ) {
  // TODO вставка всех изменений в БД
}

void ViewerDataAutopark::slotClickedAutoItem( QListWidgetItem *item ) {
  currentDelegate = qobject_cast< TheDelegateFormaAuto * >( item->listWidget( )->itemWidget( item ) );
  if ( currentDelegate ) {
    QString vin = currentDelegate->key( );
    auto dataMap = autobase[ vin ];
    ui->templateTheAutomobilForm->setData( dataMap );
  }
}

void ViewerDataAutopark::setElementsWidget( ) {
  for ( auto &el : autobase ) {
    auto &t = el.second;  //сама карта
    auto elem = new TheDelegateFormaAuto;
    elem->setData( t[ "name_brand" ], t[ "auto_counry_number" ] );
    elem->setKey( t[ "vin" ] );  //установка идентификатора (key)
    auto item = new QListWidgetItem;
    item->setSizeHint( elem->size( ) );
    ui->listWidgetAuto->addItem( item );
    ui->listWidgetAuto->setItemWidget( item, elem );
  }
  ui->labelCountAutos->setText( QString::number( autobase.size( ) ) );
}

void ViewerDataAutopark::readAutosFromDb( ) {
  QSqlQuery query;
  if ( query.exec( "SELECT * FROM " + QLatin1String( AllConstatnts::dbSheme ) + ".autopark;" ) ) {
    while ( query.next( ) ) {
      MapAuto tmp;
      // TODO может список полей в БД
      tmp[ "name_brand" ] = query.value( "name_brand" ).toString( );
      tmp[ "series_brand" ] = query.value( "series_brand" ).toString( );
      tmp[ "marka_brand" ] = query.value( "marka_brand" ).toString( );
      tmp[ "issue" ] = query.value( "issue" ).toString( );
      tmp[ "auto_counry_number" ] = query.value( "auto_counry_number" ).toString( );
      tmp[ "vin" ] = query.value( "vin" ).toString( );
      tmp[ "eco" ] = query.value( "eco" ).toString( );
      tmp[ "inspection" ] = query.value( "inspection" ).toString( );
      tmp[ "reminder" ] = query.value( "reminder" ).toString( );
      tmp[ "days_reminder" ] = query.value( "days_reminder" ).toString( );
      tmp[ "lenth" ] = query.value( "lenth" ).toString( );
      tmp[ "width" ] = query.value( "width" ).toString( );
      tmp[ "height" ] = query.value( "height" ).toString( );
      tmp[ "space" ] = query.value( "space" ).toString( );
      tmp[ "carring" ] = query.value( "carring" ).toString( );
      tmp[ "lift" ] = query.value( "lift" ).toString( );
      tmp[ "commentary" ] = query.value( "commentary" ).toString( );
      tmp[ "__ThisSessionEdit__" ] = QLatin1String( "0" );  //поле для отметки было ли изменение
      autobase[ tmp[ "vin" ] ] = tmp;
    }
  } else {
    qDebug( ) << query.lastError( ).text( );
  }
}

void ViewerDataAutopark::saveChangesToDb( ) {
  QString qs = "UPDATE " + QLatin1String( AllConstatnts::dbSheme ) + ".autopark SET ";
  //
}
