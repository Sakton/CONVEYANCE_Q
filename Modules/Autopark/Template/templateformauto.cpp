#include "templateformauto.h"
#include <QDateEdit>
#include <QMessageBox>
#include "../Validator/validatorautodata.h"
#include "ui_templateformauto.h"

const QStringList TemplateFormAuto::ecoClasses = { QLatin1String( "Euro-4" ),
                                                   QLatin1String( "Euro-5" ),
                                                   QLatin1String( "Euro-6" ) };
const QStringList TemplateFormAuto::volumeNotation = { QLatin1String( "m3" ),
                                                       QLatin1String( "l3" ) };

const QLatin1String STYLESHEET_ERROR_VIN { "border: 2px dashed red;" };
const QLatin1String STYLESHEET_OK_VIN { "border: 2px solid green;" };

TemplateFormAuto::TemplateFormAuto( QWidget* parent )
    : QWidget( parent ), ui( new Ui::TemplateFormAuto ), autoData { {} } {
  ui->setupUi( this );
  ui->lineEditVIN->setStyleSheet( STYLESHEET_ERROR_VIN );
  ui->comboBoxEcoClass->addItems( ecoClasses );
  ui->comboBoxNotation->addItems( volumeNotation );
  ui->spinBoxCountDays->setToolTip( tr( "Remind Before" ) );
  ui->dateEditNextTechInspection->setDate(
      QDate::currentDate( ).addYears( 1 ) );
  ui->labelDayBefore->setText( QString::number(
      QDate::currentDate( ).daysTo( QDate::currentDate( ).addYears( 1 ) ) ) );

  connect(
      ui->lineEditVIN,
      QOverload< const QString& >::of( &QLineEdit::textChanged ), this,
      QOverload< const QString& >::of( &TemplateFormAuto::slotVinValidate ) );

  connect(
      ui->dateEditNextTechInspection,
      QOverload< QDate >::of( &QDateEdit::dateChanged ), this,
      QOverload< QDate >::of( &TemplateFormAuto::slotDateChangedNextTech ) );

  connect( ui->groupBoxRemind, QOverload< bool >::of( &QGroupBox::toggled ),
           ui->labelDayBefore, QOverload< bool >::of( &QLabel::setVisible ) );

  connect( ui->lineEditBrandAuto,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadBrand ) );

  connect( ui->lineEditSeriesAuto,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadSeries ) );

  connect( ui->lineEditModel, QOverload<>::of( &QLineEdit::editingFinished ),
           this, QOverload<>::of( &TemplateFormAuto::slotReadModel ) );

  connect( ui->lineEditGosNumber,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadGosNumber ) );

  connect( ui->lineEditVIN, QOverload<>::of( &QLineEdit::editingFinished ),
           this, QOverload<>::of( &TemplateFormAuto::slotReadVin ) );

  connect( ui->lineEditHeightCargoon,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadLenth ) );

  connect( ui->lineEditWidthCargon,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadWidth ) );

  connect( ui->lineEditHeightCargoon,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadHeight ) );

  connect( ui->lineEditHeightCargoon,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadHeight ) );

  connect( ui->lineEditMaximalCarring,
           QOverload<>::of( &QLineEdit::editingFinished ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadMaximalCarring ) );

  // TODO поменять сигнал из QPlainTextEdit
  connect( ui->plainTextEditComments,
           QOverload< bool >::of( &QPlainTextEdit::modificationChanged ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadComments ) );
}

TemplateFormAuto::~TemplateFormAuto( ) {
  delete ui;
}

void TemplateFormAuto::readConstDataForm( ) {
  autoData[ "eco" ] = ui->comboBoxEcoClass->currentText( );
  if ( ui->groupBoxOptions->isChecked( ) ) {
    autoData[ "lift" ] = QString::number( ui->checkBoxTatLift->checkState( ) );
  }

  if ( ui->groupBoxDates->isChecked( ) ) {
    autoData[ "issue" ] =
        ui->dateEditYearOfIssue->date( ).toString( Qt::ISODate );
    autoData[ "inspection" ] =
        ui->dateEditNextTechInspection->date( ).toString( Qt::ISODate );
  }

  if ( ui->groupBoxRemind->isChecked( ) ) {
    autoData[ "reminder" ] =
        QString::number( ui->checkBoxReminder->checkState( ) );
    autoData[ "days_reminder" ] =
        QString::number( ui->spinBoxCountDays->value( ) );
  }
}

const TemplateFormAuto::Line& TemplateFormAuto::dataForm( ) const {
  return autoData;
}

void TemplateFormAuto::writeForm( const TemplateFormAuto::Line& data ) const {
  ui->lineEditBrandAuto->setText( data.at( "name_brand" ).toString( ) );
  ui->lineEditSeriesAuto->setText( data.at( "series_brand" ).toString( ) );
  ui->lineEditModel->setText( data.at( "marka_brand" ).toString( ) );
  ui->dateEditYearOfIssue->setDate(
      QDate::fromString( data.at( "issue" ).toString( ), Qt::ISODate ) );
  ui->lineEditVIN->setText( data.at( "vin" ).toString( ) );
  ui->lineEditGosNumber->setText( data.at( "auto_counry_number" ).toString( ) );
  ui->comboBoxEcoClass->setCurrentText( data.at( "eco" ).toString( ) );
  ui->dateEditNextTechInspection->setDate(
      QDate::fromString( data.at( "inspection" ).toString( ), Qt::ISODate ) );
  ui->checkBoxReminder->setCheckState(
      static_cast< Qt::CheckState >( data.at( "reminder" ).toInt( ) ) );
  ui->spinBoxCountDays->setValue( data.at( "days_reminder" ).toInt( ) );
  ui->lineEditLenthCargon->setText( data.at( "lenth" ).toString( ) );
  ui->lineEditWidthCargon->setText( data.at( "width" ).toString( ) );
  ui->lineEditHeightCargoon->setText( data.at( "height" ).toString( ) );
  ui->lineEditWolumeCargon->setText( data.at( "space" ).toString( ) );
  ui->lineEditMaximalCarring->setText( data.at( "carring" ).toString( ) );
  ui->checkBoxTatLift->setCheckState(
      static_cast< Qt::CheckState >( data.at( "lift" ).toInt( ) ) );
  ui->plainTextEditComments->setPlaceholderText(
      data.at( "commentary" ).toString( ) );
}

void TemplateFormAuto::clearForm( ) {
  ui->lineEditBrandAuto->clear( );
  ui->lineEditSeriesAuto->clear( );
  ui->lineEditModel->clear( );
  //  ui->dateEditYearOfIssue->clear( );
  ui->lineEditVIN->clear( );
  ui->lineEditGosNumber->clear( );
  ui->checkBoxReminder->setCheckState( Qt::CheckState::Unchecked );
  ui->spinBoxCountDays->setValue( 0 );
  ui->lineEditLenthCargon->clear( );
  ui->lineEditWidthCargon->clear( );
  ui->lineEditHeightCargoon->clear( );
  ui->lineEditWolumeCargon->clear( );
  ui->lineEditMaximalCarring->clear( );
  ui->plainTextEditComments->clear( );
}

void TemplateFormAuto::slotVinValidate( const QString& vin ) {
  // WP0ZZZ99ZTS392124
  // SJNFBAF15U6433557
  // XUFJA696JD3009672
  ( ValidatorAutoData::validateVin( vin ) )
      ? ui->lineEditVIN->setStyleSheet( STYLESHEET_OK_VIN )
      : ui->lineEditVIN->setStyleSheet( STYLESHEET_ERROR_VIN );
}

void TemplateFormAuto::slotDateChangedNextTech( QDate d ) {
  ui->labelDayBefore->setText(
      QString::number( QDate::currentDate( ).daysTo( d ) ) );
}

void TemplateFormAuto::slotReadBrand( ) {
  //Валидатинг
  autoData[ "name_brand" ] = ui->lineEditBrandAuto->text( );
  qDebug( ) << R"("autoData[ "name_brand" ] = ")" << autoData[ "name_brand" ];
}

void TemplateFormAuto::slotReadSeries( ) {
  autoData[ "series_brand" ] = ui->lineEditSeriesAuto->text( );
  qDebug( ) << R"("autoData[ "series_brand" ] = ")"
            << autoData[ "series_brand" ];
}

void TemplateFormAuto::slotReadModel( ) {
  autoData[ "marka_brand" ] = ui->lineEditModel->text( );
  qDebug( ) << R"("autoData[ "marka_brand" ] = ")" << autoData[ "marka_brand" ];
}

void TemplateFormAuto::slotReadGosNumber( ) {
  autoData[ "auto_counry_number" ] = ui->lineEditGosNumber->text( );
  qDebug( ) << R"("autoData[ "auto_counry_number" ] = ")"
            << autoData[ "auto_counry_number" ];
}

void TemplateFormAuto::slotReadVin( ) {
  QString vin = ui->lineEditVIN->text( ).toUpper( );
  if ( !ValidatorAutoData::validateVin( vin ) ) {
    QMessageBox::critical( this, "Error vin", "Проверь ВИН" );
  } else {
    autoData[ "vin" ] = vin;
    qDebug( ) << R"(autoData[ "vin" ] = )" << autoData[ "vin" ];
  }
}

void TemplateFormAuto::slotReadLenth( ) {
  autoData[ "lenth" ] = ui->lineEditLenthCargon->text( );
  qDebug( ) << R"("autoData[ "lenth" ] = ")" << autoData[ "lenth" ];
}

void TemplateFormAuto::slotReadWidth( ) {
  autoData[ "width" ] = ui->lineEditWidthCargon->text( );
  qDebug( ) << R"("autoData[ "width" ] = ")" << autoData[ "width" ];
}

void TemplateFormAuto::slotReadHeight( ) {
  autoData[ "height" ] = ui->lineEditHeightCargoon->text( );
  qDebug( ) << R"("autoData[ "height" ] = ")" << autoData[ "height" ];
}

void TemplateFormAuto::slotReadSpace( ) {
  autoData[ "space" ] = ui->lineEditWolumeCargon->text( );
  qDebug( ) << R"("autoData[ "space" ] = ")" << autoData[ "space" ];
}

void TemplateFormAuto::slotReadMaximalCarring( ) {
  autoData[ "carring" ] = ui->lineEditMaximalCarring->text( );
  qDebug( ) << R"("autoData[ "carring" ] = ")" << autoData[ "carring" ];
}

void TemplateFormAuto::slotReadComments( ) {
  autoData[ "commentary" ] = ui->plainTextEditComments->placeholderText( );
  qDebug( ) << R"("autoData[ "commentary" ] = ")" << autoData[ "commentary" ];
}
