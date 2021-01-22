#ifndef THELANDFORM_H
#define THELANDFORM_H

#include <QWidget>

namespace Ui {
class TheLandForm;
}

class TheLandForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheLandForm(QWidget *parent = nullptr);
  ~TheLandForm();

 private:
  Ui::TheLandForm *ui;
};

#endif // THELANDFORM_H
