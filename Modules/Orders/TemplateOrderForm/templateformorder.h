#ifndef TEMPLATEFORMORDER_H
#define TEMPLATEFORMORDER_H

#include <QWidget>
#include <map>

#include "Bases/basetemplateform.h"
#include "Utility/AllConstants.h"

namespace Ui {
class TemplateFormOrder;
}

class TemplateFormOrder : public BaseTemplateForm {
  Q_OBJECT

  using Line = AllConstatnts::Line;

 public:
  explicit TemplateFormOrder( QWidget *parent = nullptr );
  ~TemplateFormOrder( );

  // IBaseForm interface
 public:
  void readDataOfForm( ) override;
  void setDataInForm( const Line &dataLine ) override;
  void clearForm( ) const override;

 private:
  Ui::TemplateFormOrder *ui;
};

#endif // TEMPLATEFORMORDER_H
