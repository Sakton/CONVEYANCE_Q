#ifndef TEMPLATEFORMAUTO_H
#define TEMPLATEFORMAUTO_H

#include <QDate>

#include "Bases/basetemplateform.h"

namespace Ui {
class TemplateFormAuto;
}

class TemplateFormAuto : public BaseTemplateForm {
  Q_OBJECT

 public:
  explicit TemplateFormAuto( QWidget* parent = nullptr );
  ~TemplateFormAuto( );

  // BaseTemplateForm interface
 public:
  void readDataOfForm( ) override;
  void setDataInForm( const Line& dataLine ) override;
  void clearForm( ) const override;

 public slots:
  void slotVinValidate( const QString& vin );
  void slotDateNextTechInspectionChange( QDate date );

 private:
  static const QStringList ecoClasses;
  static const QStringList volumeNotation;
  Ui::TemplateFormAuto* ui;
};

#endif  // TEMPLATEFORMAUTO_H
