#ifndef MAINORDERFORM_H
#define MAINORDERFORM_H

#include <QWidget>

namespace Ui {
class MainOrderForm;
}

class MainOrderForm : public QWidget
{
  Q_OBJECT

 public:
  explicit MainOrderForm( QWidget *parent = nullptr );
  ~MainOrderForm( );

 private:
  Ui::MainOrderForm *ui;
};

#endif // MAINORDERFORM_H
