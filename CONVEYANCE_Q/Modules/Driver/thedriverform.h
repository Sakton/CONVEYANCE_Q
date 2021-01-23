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
  ~TheDriverForm( );

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );

 private:
  Ui::TheDriverForm *ui;
};

#endif // THEDRIVERFORM_H
