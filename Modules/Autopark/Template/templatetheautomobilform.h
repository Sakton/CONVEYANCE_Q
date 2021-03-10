#ifndef TEMPLATETHEAUTOMOBILFORM_H
#define TEMPLATETHEAUTOMOBILFORM_H

#include <QDate>
#include <QWidget>

namespace Ui {
class TemplateTheAutomobilForm;
}

class TemplateTheAutomobilForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TemplateTheAutomobilForm(QWidget *parent = nullptr);
  ~TemplateTheAutomobilForm( );

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );
  void slotCallAutobrandForm( );
  void slotReadBrand( );
  void slotReadSeries( int index );
  void slotReadModel( int index );
  void slotDateChanged( QDate date );
  void slotVinValidate( const QString &vin );
  void slotVinValidate( );

 private:
  bool validateVin( const QString &vin );
  void showMessage( );

 private:
  static const QStringList ecoClasses;
  static const QStringList volumeNotation;
  Ui::TemplateTheAutomobilForm *ui;
};

#endif // TEMPLATETHEAUTOMOBILFORM_H