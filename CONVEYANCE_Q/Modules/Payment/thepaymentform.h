#ifndef THEPAYMENTFORM_H
#define THEPAYMENTFORM_H

#include <QWidget>

namespace Ui {
class ThePaymentForm;
}

class ThePaymentForm : public QWidget
{
  Q_OBJECT

 public:
  explicit ThePaymentForm(QWidget *parent = nullptr);
  ~ThePaymentForm();

 private:
  Ui::ThePaymentForm *ui;
};

#endif // THEPAYMENTFORM_H
