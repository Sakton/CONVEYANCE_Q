#include "maindelegatewidgetautopark.h"
#include "ui_maindelegatewidgetautopark.h"

MainDelegateWidgetAutopark::MainDelegateWidgetAutopark( const Line& line,
                                                        QWidget* parent )
    : QWidget( parent ),
      ui( new Ui::MainDelegateWidgetAutopark ),
      data_ { line } {
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

void MainDelegateWidgetAutopark::fill( ) {
  ui->labelVIN->setText( data_.at( "vin" ) );
  ui->labelBrandName->setText( data_.at( "name_brand" ) );
  ui->labelSeries->setText( data_.at( "series_brand" ) );
  ui->labelMarka->setText( data_.at( "marka_brand" ) );
  ui->labelGosNomer->setText( data_.at( "auto_counry_number" ) );
  //**
  ui->labelGabarity->setText( data_.at( "lenth" ) + "/" + data_.at( "width" ) +
                              "/" + data_.at( "height" ) );

  ui->labelSpace->setText( data_.at( "space" ) );
  ui->labelTonnag->setText( data_.at( "carring" ) );
  //**
  ui->labelDataIssue->setText( data_.at( "issue" ) );
  //  ui->comboBoxEcoClass->setCurrentText( data.at( "eco" ) );
  ui->labelTechInspection->setText( data_.at( "inspection" ) );
  //  ui->checkBoxReminder->setCheckState(
  //      static_cast< Qt::CheckState >( data.at( "reminder" ).toInt( ) ) );
  if ( static_cast< Qt::CheckState >( data_.at( "reminder" ).toInt( ) ) ==
       Qt::CheckState::Checked ) {
    ui->labelReminder->setText( tr( "Включено" ) );
  }
  //  ui->checkBoxTatLift->setCheckState(
  //      static_cast< Qt::CheckState >( data.at( "lift" ).toInt( ) ) );
  //**
  ui->labelNote->setText( data_.at( "commentary" ) );
  if ( data_.at( "commentary" ).isEmpty( ) ) {
    //если в комментах ничего нет то и скроем его
    ui->groupBoxNote->hide( );
  }
}

void MainDelegateWidgetAutopark::slotClickedChangeButton( ) {
  emit signalClickedChangeButton( data_.at( "vin" ) );
}

void MainDelegateWidgetAutopark::slotClickedDeleteButton( ) {
  emit signalClickedDeleteButton( data_.at( "vin" ) );
}
