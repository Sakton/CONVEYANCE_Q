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

 public slots:
  void slotClicked_Ok_Button( );
  void slotClicked_Cancel_Button( );
  void readCountryFromDbAndSetup( );
  void slotCallTheCountryForm( );

 private:
  Ui::TheClientForm *ui;
};

#endif // THECLIENTFORM_H
