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
  ~TheAutomobilForm();

 private:
  Ui::TheAutomobilForm *ui;
};

#endif // THEAUTOMOBILFORM_H
