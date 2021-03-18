#include "maindelegatewidgetautopark.h"
#include "ui_maindelegatewidgetautopark.h"

MainDelegateWidgetAutopark::MainDelegateWidgetAutopark( const Line& line,
                                                        QWidget* parent )
    : QWidget( parent ),
      ui( new Ui::MainDelegateWidgetAutopark ),
      data_ { line } {
  ui->setupUi(this);
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

void MainDelegateWidgetAutopark::fill( ) {
  ui->labelVIN->setText( data_.at( "vin" ) );
  ui->labelBrandName->setText( data_.at( "name_brand" ) );
  ui->labelSeries->setText( data_.at( "series_brand" ) );
  ui->labelMarka->setText( data_.at( "marka_brand" ) );
  ui->labelGosNomer->setText( data_.at( "auto_counry_number" ) );
  //**
  ui->labelLenth->setText( data_.at( "lenth" ) );
  ui->labelWidth->setText( data_.at( "width" ) );
  ui->labelHeight->setText( data_.at( "height" ) );
  ui->labelSpace->setText( data_.at( "space" ) );
  ui->labelTonnag->setText( data_.at( "carring" ) );
  //**
  ui->labelDataIssue->setText( data_.at( "issue" ) );
  //  ui->comboBoxEcoClass->setCurrentText( data.at( "eco" ) );
  ui->labelTechInspection->setText( data_.at( "inspection" ) );
  //  ui->checkBoxReminder->setCheckState(
  //      static_cast< Qt::CheckState >( data.at( "reminder" ).toInt( ) ) );
  ui->labelReminder->setText( data_.at( "days_reminder" ) );
  //  ui->checkBoxTatLift->setCheckState(
  //      static_cast< Qt::CheckState >( data.at( "lift" ).toInt( ) ) );
  //**
  ui->labelNote->setText( data_.at( "commentary" ) );
}
