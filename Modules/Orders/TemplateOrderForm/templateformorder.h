#ifndef TEMPLATEFORMORDER_H
#define TEMPLATEFORMORDER_H

#include <QWidget>
#include <map>

#include "Bases/basetemplateform.h"
#include "Utility/AllConstants.h"

namespace Ui {
class TemplateFormOrder;
}

class ExchangeRates;

class TemplateFormOrder : public BaseTemplateForm {
  Q_OBJECT

  using Line = AllConstatnts::Line;

 public:
  explicit TemplateFormOrder( QWidget *parent = nullptr );
  ~TemplateFormOrder( );

 public slots:
  void slotCurrentCoursValut( double cours );

  // IBaseForm interface
 public:
  void readDataOfForm( ) override;
  void setDataInForm( const Line &dataLine ) override;
  void clearForm( ) const override;

  private:
  void setDataToPloshcadka( );
  void setDataToPaymentPeriod( );
  void setPostalTrasferPeriod( );

  private:
  Ui::TemplateFormOrder *ui;
  ExchangeRates *cours;
  QStringList ploschadka;
  QStringList paymentPeriod;
  QStringList postalPeriods;
};

#endif // TEMPLATEFORMORDER_H
