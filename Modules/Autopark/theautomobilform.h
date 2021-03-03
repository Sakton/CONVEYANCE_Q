#ifndef THEAUTOMOBILFORM_H
#define THEAUTOMOBILFORM_H

#include <QWidget>

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
  void slotBrandChanged( int index );

 private:
  Ui::TheAutomobilForm *ui;
};

#endif // THEAUTOMOBILFORM_H
