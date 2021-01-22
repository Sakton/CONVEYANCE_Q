#ifndef THEDRIVERFORM_H
#define THEDRIVERFORM_H

#include <QWidget>

namespace Ui {
class TheDriverForm;
}

class TheDriverForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheDriverForm(QWidget *parent = nullptr);
  ~TheDriverForm();

 private:
  Ui::TheDriverForm *ui;
};

#endif // THEDRIVERFORM_H
