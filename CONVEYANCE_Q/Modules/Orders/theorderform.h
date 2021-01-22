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

 private:
  Ui::TheOrderForm *ui;
};

#endif // THEORDERFORM_H
