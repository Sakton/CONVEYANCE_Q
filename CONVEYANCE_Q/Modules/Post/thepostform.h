#ifndef THEPOSTFORM_H
#define THEPOSTFORM_H

#include <QWidget>

namespace Ui {
class ThePostForm;
}

class ThePostForm : public QWidget
{
  Q_OBJECT

 public:
  explicit ThePostForm(QWidget *parent = nullptr);
  ~ThePostForm();

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );

 private:
  Ui::ThePostForm *ui;
};

#endif // THEPOSTFORM_H
