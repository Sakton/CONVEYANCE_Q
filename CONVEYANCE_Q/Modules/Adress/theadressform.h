#ifndef THEADRESSFORM_H
#define THEADRESSFORM_H

#include <QWidget>

namespace Ui {
class TheAdressForm;
}

class TheAdressForm : public QWidget {
  Q_OBJECT

 public:
  explicit TheAdressForm( QWidget *parent = nullptr );
  ~TheAdressForm( );

 private:
  Ui::TheAdressForm *ui;
};

#endif // THEADRESSFORM_H
