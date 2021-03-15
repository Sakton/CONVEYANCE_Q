#include "templateformauto.h"
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
    : QWidget( parent ), ui( new Ui::TemplateFormAuto ) {
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
  // connect(  ); //пересчет дней при изменении даты, это не зависящее свойство
}

TemplateFormAuto::~TemplateFormAuto( ) {
  delete ui;
}

std::map< QString, QString > TemplateFormAuto::readForm( ) const {
  std::map< QString, QString > autoData;
  autoData[ "name_brand" ] = ui->lineEditBrandAuto->text( );
  autoData[ "series_brand" ] = ui->lineEditSeriesAuto->text( );
  autoData[ "marka_brand" ] = ui->lineEditModel->text( );
  autoData[ "issue" ] =
      ui->dateEditYearOfIssue->date( ).toString( Qt::ISODate );
  autoData[ "vin" ] = ui->lineEditVIN->text( ).toUpper( );
  autoData[ "eco" ] = ui->comboBoxEcoClass->currentText( );
  autoData[ "inspection" ] =
      ui->dateEditNextTechInspection->date( ).toString( Qt::ISODate );
  autoData[ "reminder" ] =
      QString::number( ui->checkBoxReminder->checkState( ) );
  autoData[ "auto_counry_number" ] = ui->lineEditGosNumber->text( );
  autoData[ "days_reminder" ] =
      QString::number( ui->spinBoxCountDays->value( ) );
  if ( ui->groupBoxCargoonOptions->isChecked( ) ) {
    autoData[ "lenth" ] = ui->lineEditLenthCargon->text( );
    autoData[ "width" ] = ui->lineEditWidthCargon->text( );
    autoData[ "height" ] = ui->lineEditHeightCargoon->text( );
    autoData[ "space" ] = ui->lineEditWolumeCargon->text( );
    autoData[ "carring" ] = ui->lineEditMaximalCarring->text( );
    autoData[ "lift" ] = QString::number( ui->checkBoxTatLift->checkState( ) );
  }
  autoData[ "commentary" ] = ui->plainTextEditComments->toPlainText( );
  return autoData;
}

void TemplateFormAuto::writeForm( const std::map< QString, QString >& data ) {
  ui->lineEditBrandAuto->setText( data.at( "name_brand" ) );
  ui->lineEditSeriesAuto->setText( data.at( "series_brand" ) );
  ui->lineEditModel->setText( data.at( "marka_brand" ) );
  ui->dateEditYearOfIssue->setDate(
      QDate::fromString( data.at( "issue" ), Qt::ISODate ) );
  ui->lineEditVIN->setText( data.at( "vin" ) );
  ui->lineEditGosNumber->setText( data.at( "auto_counry_number" ) );
  ui->comboBoxEcoClass->setCurrentText( data.at( "eco" ) );
  ui->dateEditNextTechInspection->setDate(
      QDate::fromString( data.at( "inspection" ), Qt::ISODate ) );
  ui->checkBoxReminder->setCheckState(
      static_cast< Qt::CheckState >( data.at( "reminder" ).toInt( ) ) );
  ui->spinBoxCountDays->setValue( data.at( "days_reminder" ).toInt( ) );
}

void TemplateFormAuto::slotVinValidate( const QString& vin ) {
  // WP0ZZZ99ZTS392124
  // SJNFBAF15U6433557
  // XUFJA696JD3009672
  ( ValidatorAutoData::validateVin( vin ) )
      ? ui->lineEditVIN->setStyleSheet( STYLESHEET_OK_VIN )
      : ui->lineEditVIN->setStyleSheet( STYLESHEET_ERROR_VIN );
}
