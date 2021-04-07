#ifndef MAINORDERFORM_H
#define MAINORDERFORM_H

#include <QWidget>

// class QSqlTableModel;
class ModelOrderData;
class WorkFormOrder;
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

 public slots:
  void slotClickOkButton( );
  void slotClickedLineTable( const QModelIndex &index );

 private:
  Ui::MainOrderForm *ui;
  ModelOrderData *model;
  WorkFormOrder *workForm;
};

#endif // MAINORDERFORM_H
