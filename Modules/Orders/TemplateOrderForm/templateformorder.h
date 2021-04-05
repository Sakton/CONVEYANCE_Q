#ifndef TEMPLATEFORMORDER_H
#define TEMPLATEFORMORDER_H

#include <QWidget>
#include <map>

#include "Utility/AllConstants.h"

namespace Ui {
class TemplateFormOrder;
}

class TemplateFormOrder : public QWidget
{
  Q_OBJECT

  using Line = AllConstatnts::Line;

 public:
  explicit TemplateFormOrder(QWidget *parent = nullptr);
  ~TemplateFormOrder( );

  void clearForm( );

 private:
  void read( );

 private:
  Ui::TemplateFormOrder *ui;
  Line data_;
};

#endif // TEMPLATEFORMORDER_H
