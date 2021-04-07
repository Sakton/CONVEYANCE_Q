#ifndef MAINORDERFORM_H
#define MAINORDERFORM_H

#include <QWidget>

// class QSqlTableModel;
class ModelOrderData;

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
  void tableViewSettings( );
  void headerViewSettings( );

 private:
  Ui::MainOrderForm *ui;
  ModelOrderData *model;
};

#endif // MAINORDERFORM_H
