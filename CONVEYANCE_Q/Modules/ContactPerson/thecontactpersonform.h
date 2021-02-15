#ifndef THECONTACTPERSONFORM_H
#define THECONTACTPERSONFORM_H

#include <QWidget>

namespace Ui {
class TheContactPersonForm;
}

class TheContactPersonForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheContactPersonForm(QWidget *parent = nullptr);
  ~TheContactPersonForm();

 private:
  Ui::TheContactPersonForm *ui;
};

#endif // THECONTACTPERSONFORM_H
