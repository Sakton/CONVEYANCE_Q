#include "maindelegatewidgetautopark.h"

#include <QDate>
#include <QMessageBox>
#include <stdexcept>

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
  try {
    ui->labelVIN->setText( data_.at( "vin" ) );
    ui->labelBrandName->setText( data_.at( "name_brand" ) );
    ui->labelSeries->setText( data_.at( "series_brand" ) );
    ui->labelMarka->setText( data_.at( "marka_brand" ) );
    ui->labelGosNomer->setText( data_.at( "auto_counry_number" ) );
    //**
    ui->labelGabarity->setText( data_.at( "lenth" ) + "/" +
                                data_.at( "width" ) + "/" +
                                data_.at( "height" ) );
    ui->labelSpace->setText( data_.at( "space" ) );
    ui->labelTonnag->setText( data_.at( "carring" ) );
    //**
    ui->labelDataIssue->setText( data_.at( "issue" ) );
    ui->labelEcoClass->setText( data_.at( "eco" ) );
    ui->labelTechInspection->setText( data_.at( "inspection" ) );
    ui->labelDayTo->setText( QString::number( QDate::currentDate( ).daysTo(
        QDate::fromString( data_.at( "inspection" ), Qt::ISODate ) ) ) );

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
  } catch ( std::out_of_range& ) {
    badDataMessage( );
  }
}

void MainDelegateWidgetAutopark::badDataMessage( ) {
  QMessageBox::critical( nullptr, "BAD DATA", "BAD DATA CLOSE" );
  exit( 1 );
}

void MainDelegateWidgetAutopark::slotClickedChangeButton( ) {
  try {
    emit signalClickedChangeButton( data_.at( "id" ) );
    emit signalBoundedListWidgetItem( boundItem );
  } catch ( std::out_of_range& ) {
    badDataMessage( );
  }
}

void MainDelegateWidgetAutopark::slotClickedDeleteButton( ) {
  try {
    emit signalClickedDeleteButton( data_.at( "id" ) );
    emit signalBoundedListWidgetItem( boundItem );
  } catch ( std::out_of_range& ) {
    badDataMessage( );
  }
}
