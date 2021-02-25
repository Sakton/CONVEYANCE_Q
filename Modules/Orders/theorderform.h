#ifndef THEORDERFORM_H
#define THEORDERFORM_H

#include <QWidget>

namespace Ui {
class TheOrderForm;
}

class TheOrderForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheOrderForm(QWidget *parent = nullptr);
  ~TheOrderForm();

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );

 private:
  Ui::TheOrderForm *ui;
};

#endif // THEORDERFORM_H
