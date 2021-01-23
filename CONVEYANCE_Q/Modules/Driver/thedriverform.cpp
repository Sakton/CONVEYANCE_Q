#include "thedriverform.h"

#include <QCheckBox>
#include <QDebug>
#include <QDialogButtonBox>
#include <QStringList>
#include <map>

#include "ui_thedriverform.h"

const QStringList nationality { "Russian", "Ukranian", "Belarus", "Poland", "Germany", "Czhech" };

TheDriverForm::TheDriverForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheDriverForm ) {
  ui->setupUi( this );
  ui->comboBoxNationality->addItems( nationality );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::accepted ), this,
	   QOverload<>::of( &TheDriverForm::slotClick_OK_Button ) );
  connect( ui->buttonBox, QOverload<>::of( &QDialogButtonBox::rejected ), this,
	   QOverload<>::of( &TheDriverForm::slotClick_Cancel_Button ) );
}

TheDriverForm::~TheDriverForm()
{
  delete ui;
}

void TheDriverForm::slotClick_OK_Button( ) {
  std::map< QString, QString > dataForm;
  dataForm[ "familyDriver" ] = ui->lineEditFamily->text( );
  dataForm[ "phoneDriver" ] = ui->lineEditPhone->text( );
  dataForm[ "nationalityDriver" ] = ui->comboBoxNationality->currentText( );

  QString langugeData;
  for ( auto child : ui->groupBoxLanguage->children( ) ) {
    auto el = qobject_cast< QCheckBox * >( child );
    if ( el ) {
      if ( el->isChecked( ) ) {
	langugeData += el->text( );
	langugeData += "|";
      }
    }
  }
  langugeData.chop( 1 );
  dataForm[ "languageDriver" ] = langugeData;

  QString driverLicenseData;
  for ( auto child : ui->groupBoxDriveLicense->children( ) ) {
    auto el = qobject_cast< QCheckBox * >( child );
    if ( el ) {
      if ( el->isChecked( ) ) {
	driverLicenseData += el->text( );
	driverLicenseData += "|";
      }
    }
  }
  driverLicenseData.chop( 1 );
  dataForm[ "licenseDriver" ] = driverLicenseData;

  // TODO this data transfer
  for ( auto &el : dataForm ) qDebug( ) << el.first << " --> " << el.second;
}

void TheDriverForm::slotClick_Cancel_Button( ) { this->close( ); }
