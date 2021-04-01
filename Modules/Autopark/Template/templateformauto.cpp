#include "templateformauto.h"
#include <QDateEdit>
#include <QMessageBox>
#include <QPlainTextEdit>
#include "../Validator/validatorautodata.h"
#include "ui_templateformauto.h"

const QStringList TemplateFormAuto::ecoClasses = { QLatin1String { "Euro-4" },
                                                   QLatin1String { "Euro-5" },
                                                   QLatin1String { "Euro-6" } };
const QStringList TemplateFormAuto::volumeNotation = { QLatin1String { "m3" },
                                                       QLatin1String { "l3" } };

const QLatin1String STYLESHEET_ERROR_VIN { "border: 2px dashed red;" };
const QLatin1String STYLESHEET_OK_VIN { "border: 2px solid green;" };

TemplateFormAuto::TemplateFormAuto( QWidget* parent )
    : BaseTemplateForm( parent ), ui { new Ui::TemplateFormAuto } {
  setAttribute( Qt::WA_DeleteOnClose );
  ui->setupUi( this );
  ui->lineEditVIN->setStyleSheet( STYLESHEET_ERROR_VIN );
  ui->comboBoxEcoClass->addItems( ecoClasses );
  ui->comboBoxNotation->addItems( volumeNotation );
  ui->spinBoxCountDays->setToolTip( tr( "Remind Before" ) );
  ui->dateEditNextTechInspection->setDate(
      QDate::currentDate( ).addYears( 1 ) );
  ui->labelDayBefore->setText( QString::number(
      QDate::currentDate( ).daysTo( QDate::currentDate( ).addYears( 1 ) ) ) );
  ui->plainTextEditComments->setLineWrapMode( QPlainTextEdit::WidgetWidth );
  ui->plainTextEditComments->setOverwriteMode( false );
  connect(
      ui->lineEditVIN,
      QOverload< const QString& >::of( &QLineEdit::textChanged ), this,
      QOverload< const QString& >::of( &TemplateFormAuto::slotVinValidate ) );
}

TemplateFormAuto::~TemplateFormAuto( ) {
  delete ui;
}

void TemplateFormAuto::setDataInForm( const TemplateFormAuto::Line& data ) {
  setData( data );
  ui->lineEditBrandAuto->setText( val( "name_brand" ) );
  ui->lineEditSeriesAuto->setText( val( "series_brand" ) );
  ui->lineEditModel->setText( val( "marka_brand" ) );
  ui->dateEditYearOfIssue->setDate(
      QDate::fromString( val( "issue" ), Qt::ISODate ) );
  ui->lineEditVIN->setText( val( "vin" ) );
  ui->lineEditGosNumber->setText( val( "auto_counry_number" ) );
  ui->comboBoxEcoClass->setCurrentText( val( "eco" ) );
  ui->dateEditNextTechInspection->setDate(
      QDate::fromString( val( "inspection" ), Qt::ISODate ) );
  ui->checkBoxReminder->setCheckState(
      static_cast< Qt::CheckState >( val( "reminder" ).toInt( ) ) );
  ui->spinBoxCountDays->setValue( val( "days_reminder" ).toInt( ) );
  ui->lineEditLenthCargon->setText( val( "lenth" ) );
  ui->lineEditWidthCargon->setText( val( "width" ) );
  ui->lineEditHeightCargoon->setText( val( "height" ) );
  ui->lineEditWolumeCargon->setText( val( "space" ) );
  ui->lineEditMaximalCarring->setText( val( "carring" ) );
  ui->checkBoxTatLift->setCheckState(
      static_cast< Qt::CheckState >( val( "lift" ).toInt( ) ) );
  ui->plainTextEditComments->setPlaceholderText( val( "commentary" ) );
}

void TemplateFormAuto::clearForm( ) const {
  ui->lineEditBrandAuto->clear( );
  ui->lineEditSeriesAuto->clear( );
  ui->lineEditModel->clear( );
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

void TemplateFormAuto::setVinNoChange( ) const {
  ui->lineEditVIN->setEnabled( false );
}

void TemplateFormAuto::readDataOfForm( ) {
  add( "name_brand", ui->lineEditBrandAuto->text( ) );
  add( "series_brand", ui->lineEditSeriesAuto->text( ) );
  add( "marka_brand", ui->lineEditModel->text( ) );
  add( "auto_counry_number", ui->lineEditGosNumber->text( ) );
  add( "vin", ui->lineEditVIN->text( ).toUpper( ) );
  add( "lenth", ui->lineEditLenthCargon->text( ) );
  add( "width", ui->lineEditWidthCargon->text( ) );
  add( "height", ui->lineEditHeightCargoon->text( ) );
  add( "space", ui->lineEditWolumeCargon->text( ) );
  add( "carring", ui->lineEditMaximalCarring->text( ) );
  add( "commentary", ui->plainTextEditComments->toPlainText( ) );
  add( "eco", ui->comboBoxEcoClass->currentText( ) );
  add( "lift", QString::number( ui->checkBoxTatLift->checkState( ) ) );
  add( "issue", ui->dateEditYearOfIssue->date( ).toString( Qt::ISODate ) );
  add( "inspection",
       ui->dateEditNextTechInspection->date( ).toString( Qt::ISODate ) );
  add( "reminder", QString::number( ui->checkBoxReminder->checkState( ) ) );
  add( "days_reminder", QString::number( ui->spinBoxCountDays->value( ) ) );
}

void TemplateFormAuto::slotVinValidate( const QString& vin ) {
  // WP0ZZZ99ZTS392124
  // SJNFBAF15U6433557
  // XUFJA696JD3009672
  qDebug( ) << vin;
  ( ValidatorAutoData::validateVin( vin ) )
      ? ui->lineEditVIN->setStyleSheet( STYLESHEET_OK_VIN )
      : ui->lineEditVIN->setStyleSheet( STYLESHEET_ERROR_VIN );
}
