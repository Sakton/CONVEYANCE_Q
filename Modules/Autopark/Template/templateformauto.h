#ifndef TEMPLATEFORMAUTO_H
#define TEMPLATEFORMAUTO_H

#include <QDate>
#include <QWidget>
// #include "Utility/AllConstants.h"
#include "Bases/basetemplateform.h"

// Одна запись, по сути это строка таблицы БД, в такой форме

namespace Ui {
class TemplateFormAuto;
}

class TemplateFormAuto : public BaseTemplateForm {
  Q_OBJECT

 public:
  explicit TemplateFormAuto( QWidget* parent = nullptr );
  ~TemplateFormAuto( );
  void setVinNoChange( ) const;

  // BaseTemplateForm interface
 public:
  void readDataOfForm( ) override;
  void setDataInForm( const Line& dataLine ) override;
  void clearForm( ) const override;

 public slots:
  void slotVinValidate( const QString& vin );

 private:
  static const QStringList ecoClasses;
  static const QStringList volumeNotation;
  Ui::TemplateFormAuto* ui;
};

#endif  // TEMPLATEFORMAUTO_H
