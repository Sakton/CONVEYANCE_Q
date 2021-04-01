#include "maindelegatewidgetautopark.h"
#include "ui_maindelegatewidgetautopark.h"

MainDelegateWidgetAutopark::MainDelegateWidgetAutopark( const Line& line,
                                                        QWidget* parent )
    : QWidget( parent ),
      ui( new Ui::MainDelegateWidgetAutopark ),
      data_ { line },
      boundItem { nullptr } {
  ui->setupUi( this );

  connect(
      ui->pushButtonChange, QOverload< bool >::of( &QPushButton::clicked ),
      this,
      QOverload<>::of( &MainDelegateWidgetAutopark::slotClickedChangeButton ) );

  connect(
      ui->pushButtonDelete, QOverload< bool >::of( &QPushButton::clicked ),
      this,
      QOverload<>::of( &MainDelegateWidgetAutopark::slotClickedDeleteButton ) );

  fill( );
}

MainDelegateWidgetAutopark::~MainDelegateWidgetAutopark()
{
  delete ui;
}

void MainDelegateWidgetAutopark::setImg( const QString& url ) {
  QPixmap img( url );
  ui->lblPixmap->resize( img.size( ) );
  ui->lblPixmap->setPixmap( img );
}

void MainDelegateWidgetAutopark::setData(
    const MainDelegateWidgetAutopark::Line& line ) {
  data_ = line;
  fill( );
}

void MainDelegateWidgetAutopark::setBoundListWidgetItem(
    QListWidgetItem* item ) {
  boundItem= item;
}

void MainDelegateWidgetAutopark::fill( ) {
  ui->labelVIN->setText( data_.at( "vin" ) );
  ui->labelBrandName->setText( data_.at( "name_brand" ) );
  ui->labelSeries->setText( data_.at( "series_brand" ) );
  ui->labelMarka->setText( data_.at( "marka_brand" ) );
  ui->labelGosNomer->setText( data_.at( "auto_counry_number" ) );
  //**
  // TODO ПАДАЕТ ТУТ, тк. нету члена at( "width" )
  // зполниять все поля независимо от чего
  ui->labelGabarity->setText( data_.at( "lenth" ) + "/" + data_.at( "width" ) +
                              "/" + data_.at( "height" ) );

  ui->labelSpace->setText( data_.at( "space" ) );
  ui->labelTonnag->setText( data_.at( "carring" ) );
  //**
  ui->labelDataIssue->setText( data_.at( "issue" ) );

  ui->labelEcoClass->setText( data_.at( "eco" ) );
  ui->labelTechInspection->setText( data_.at( "inspection" ) );

  if ( static_cast< Qt::CheckState >( data_.at( "reminder" ).toInt( ) ) ==
       Qt::CheckState::Checked ) {
    ui->labelReminder->setText( tr( "Включено" ) );
  } else {
    ui->labelReminder->setText( tr( "Отключено" ) );
  }

  if ( static_cast< Qt::CheckState >( data_.at( "lift" ).toInt( ) ) ==
       Qt::CheckState::Checked ) {
    ui->labelLift->setText( "Есть" );
  } else {
    ui->labelLift->setText( "Нет" );
  }

  ui->labelNote->setText( data_.at( "commentary" ) );
  ( data_.at( "commentary" ).isEmpty( ) ) ? ui->groupBoxNote->hide( )
                                          : ui->groupBoxNote->show( );
}

void MainDelegateWidgetAutopark::slotClickedChangeButton( ) {
  emit signalClickedChangeButton( data_.at( "vin" ) );
  emit signalBoundedListWidgetItem( boundItem );
}

void MainDelegateWidgetAutopark::slotClickedDeleteButton( ) {
  emit signalClickedDeleteButton( data_.at( "vin" ) );
  emit signalBoundedListWidgetItem( boundItem );
}
