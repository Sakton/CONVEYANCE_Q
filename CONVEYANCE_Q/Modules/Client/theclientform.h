#ifndef THECLIENTFORM_H
#define THECLIENTFORM_H

#include <QWidget>

namespace Ui {
class TheClientForm;
}

class TheClientForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheClientForm(QWidget *parent = nullptr);
  ~TheClientForm();

 private:
  Ui::TheClientForm *ui;
};

#endif // THECLIENTFORM_H
