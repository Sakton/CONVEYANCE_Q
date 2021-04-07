#ifndef WORKFORMORDER_H
#define WORKFORMORDER_H

#include <QWidget>

namespace Ui {
class WorkFormOrder;
}

class WorkFormOrder : public QWidget
{
  Q_OBJECT

 public:
  explicit WorkFormOrder(QWidget *parent = nullptr);
  ~WorkFormOrder();

 private:
  Ui::WorkFormOrder *ui;
};

#endif // WORKFORMORDER_H
