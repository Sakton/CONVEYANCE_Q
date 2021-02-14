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

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );
  void slotCallAddLandForm( );
  void slotInsertToDb( );

 private:
  QStringList lands( );

 private:
  Ui::TheAdressForm *ui;
};

#endif // THEADRESSFORM_H
