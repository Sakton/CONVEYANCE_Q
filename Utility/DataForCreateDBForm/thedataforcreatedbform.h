#ifndef THEDATAFORCREATEDBFORM_H
#define THEDATAFORCREATEDBFORM_H

#include <QWidget>

// TODO уточнить концепцию как и каким образом будет создание БД, или из установщика, или ручками?

namespace Ui {
class TheDataForCreateDBForm;
}

class TheDataForCreateDBForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheDataForCreateDBForm(QWidget *parent = nullptr);
  ~TheDataForCreateDBForm( );

 public slots:
  void slotClicked_OK_Button( );
  void slotClicked_Cancel_Button( );

 private:
  Ui::TheDataForCreateDBForm *ui;
};

#endif  // THEDATAFORCREATEDBFORM_H
