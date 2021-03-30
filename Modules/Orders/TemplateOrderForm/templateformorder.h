#ifndef TEMPLATEFORMORDER_H
#define TEMPLATEFORMORDER_H

#include <QWidget>

namespace Ui {
class TemplateFormOrder;
}

class TemplateFormOrder : public QWidget
{
  Q_OBJECT

 public:
  explicit TemplateFormOrder(QWidget *parent = nullptr);
  ~TemplateFormOrder();

 private:
  Ui::TemplateFormOrder *ui;
};

#endif // TEMPLATEFORMORDER_H
