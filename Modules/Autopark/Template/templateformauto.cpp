#include "templateformauto.h"
#include <QDateEdit>
#include <QMessageBox>
#include <QPlainTextEdit>
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
    : BaseTemplateForm( parent ), ui( new Ui::TemplateFormAuto ) {
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
           QOverload<>::of( &QPlainTextEdit::textChanged ), this,
           QOverload<>::of( &TemplateFormAuto::slotReadComments ) );
}

TemplateFormAuto::~TemplateFormAuto( ) {
  delete ui;
}

// void TemplateFormAuto::readConstDataForm( ) {
//  autoData[ "eco" ] = ui->comboBoxEcoClass->currentText( );
//  if ( ui->groupBoxOptions->isChecked( ) ) {
//    autoData[ "lift" ] = QString::number( ui->checkBoxTatLift->checkState( )
//    );
//  }

//  if ( ui->groupBoxDates->isChecked( ) ) {
//    autoData[ "issue" ] =
//        ui->dateEditYearOfIssue->date( ).toString( Qt::ISODate );
//    autoData[ "inspection" ] =
//        ui->dateEditNextTechInspection->date( ).toString( Qt::ISODate );
//  }

//  if ( ui->groupBoxRemind->isChecked( ) ) {
//    autoData[ "reminder" ] =
//        QString::number( ui->checkBoxReminder->checkState( ) );
//    autoData[ "days_reminder" ] =
//        QString::number( ui->spinBoxCountDays->value( ) );
//  }
//}

void TemplateFormAuto::readConstDataForm( ) {
  add( "eco", ui->comboBoxEcoClass->currentText( ) );
  if ( ui->groupBoxOptions->isChecked( ) )
    add( "lift", QString::number( ui->checkBoxTatLift->checkState( ) ) );

  if ( ui->groupBoxDates->isChecked( ) ) {
    add( "issue", ui->dateEditYearOfIssue->date( ).toString( Qt::ISODate ) );
    add( "inspection",
         ui->dateEditNextTechInspection->date( ).toString( Qt::ISODate ) );
  }

  if ( ui->groupBoxRemind->isChecked( ) ) {
    add( "reminder", QString::number( ui->checkBoxReminder->checkState( ) ) );
    add( "days_reminder", QString::number( ui->spinBoxCountDays->value( ) ) );
  }
}

// const TemplateFormAuto::Line& TemplateFormAuto::dataForm( ) {
//  read( );
//  return autoData;
//}

// void TemplateFormAuto::setDataInForm( const TemplateFormAuto::Line& data ) {
//  setData( data );
//  ui->lineEditBrandAuto->setText( val( "name_brand" ) );
//  ui->lineEditSeriesAuto->setText( autoData.at( "series_brand" ) );
//  ui->lineEditModel->setText( autoData.at( "marka_brand" ) );
//  ui->dateEditYearOfIssue->setDate(
//      QDate::fromString( autoData.at( "issue" ), Qt::ISODate ) );
//  ui->lineEditVIN->setText( autoData.at( "vin" ) );
//  ui->lineEditGosNumber->setText( autoData.at( "auto_counry_number" ) );
//  ui->comboBoxEcoClass->setCurrentText( autoData.at( "eco" ) );
//  ui->dateEditNextTechInspection->setDate(
//      QDate::fromString( autoData.at( "inspection" ), Qt::ISODate ) );
//  ui->checkBoxReminder->setCheckState(
//      static_cast< Qt::CheckState >( autoData.at( "reminder" ).toInt( ) ) );
//  ui->spinBoxCountDays->setValue( autoData.at( "days_reminder" ).toInt( ) );
//  ui->lineEditLenthCargon->setText( autoData.at( "lenth" ) );
//  ui->lineEditWidthCargon->setText( autoData.at( "width" ) );
//  ui->lineEditHeightCargoon->setText( autoData.at( "height" ) );
//  ui->lineEditWolumeCargon->setText( autoData.at( "space" ) );
//  ui->lineEditMaximalCarring->setText( autoData.at( "carring" ) );
//  ui->checkBoxTatLift->setCheckState(
//      static_cast< Qt::CheckState >( autoData.at( "lift" ).toInt( ) ) );
//  ui->plainTextEditComments->setPlaceholderText( autoData.at( "commentary" )
//  );
//}

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

void TemplateFormAuto::readDataOfForm( ) { read( ); }

void TemplateFormAuto::read( ) {
  slotReadBrand( );
  slotReadSeries( );
  slotReadModel( );
  slotReadGosNumber( );
  slotReadVin( );
  slotReadLenth( );
  slotReadWidth( );
  slotReadHeight( );
  slotReadSpace( );
  slotReadMaximalCarring( );
  slotReadComments( );
  readConstDataForm( );
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
  add( "name_brand", ui->lineEditBrandAuto->text( ) );
}

void TemplateFormAuto::slotReadSeries( ) {
  add( "series_brand", ui->lineEditSeriesAuto->text( ) );
}

void TemplateFormAuto::slotReadModel( ) {
  add( "marka_brand", ui->lineEditModel->text( ) );
}

void TemplateFormAuto::slotReadGosNumber( ) {
  add( "auto_counry_number", ui->lineEditGosNumber->text( ) );
}

void TemplateFormAuto::slotReadVin( ) {
  QString vin = ui->lineEditVIN->text( ).toUpper( );
  if ( !ValidatorAutoData::validateVin( vin ) ) {
    QMessageBox::critical( this, "Error vin", "Проверь ВИН" );
  } else {
    add( "vin", vin );
  }
}

void TemplateFormAuto::slotReadLenth( ) {
  add( "lenth", ui->lineEditLenthCargon->text( ) );
}

void TemplateFormAuto::slotReadWidth( ) {
  add( "width", ui->lineEditWidthCargon->text( ) );
}

void TemplateFormAuto::slotReadHeight( ) {
  add( "height", ui->lineEditHeightCargoon->text( ) );
}

void TemplateFormAuto::slotReadSpace( ) {
  add( "space", ui->lineEditWolumeCargon->text( ) );
}

void TemplateFormAuto::slotReadMaximalCarring( ) {
  add( "carring", ui->lineEditMaximalCarring->text( ) );
}

void TemplateFormAuto::slotReadComments( ) {
  qDebug( ) << "commentary1 = "
            << ui->plainTextEditComments->placeholderText( );
  add( "commentary", ui->plainTextEditComments->toPlainText( ) );
  qDebug( ) << "commentary2 = "
            << ui->plainTextEditComments->placeholderText( );
}
