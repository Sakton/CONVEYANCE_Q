#ifndef THEAUTOMOBILFORM_H
#define THEAUTOMOBILFORM_H

#include <QDate>
#include <QWidget>

class QDate;

namespace Ui {
class TheAutomobilForm;
}

class TheAutomobilForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheAutomobilForm(QWidget *parent = nullptr);
  ~TheAutomobilForm( );

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );
  void slotCallAutobrandForm( );
  void slotReadBrand( );
  void slotReadSeries( int index );
  void slotReadModel( int index );
  void slotDateChanged( QDate date );

 private:
  static const QStringList ecoClasses;
  static const QStringList volumeNotation;
  Ui::TheAutomobilForm *ui;
};

#endif // THEAUTOMOBILFORM_H
