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

class TemplateFormOrder : public QWidget /*: public BaseTemplateForm*/ {
    Q_OBJECT

    using LineType = AllConstatnts::LineHash;

public:
    explicit TemplateFormOrder( QWidget *parent = nullptr );
    ~TemplateFormOrder( );

public slots:
    void slotCurrentCoursValut( double cours );

private slots:
    void slotSetStavkaEur( );

    // IBaseForm interface
public:
    //TODO может тут шаблон подумать
    void
    setDataInForm( const LineType &dataLine ) /*override*/;
    void clearForm( ) const /*override*/;

    void readDataOfForm( LineType &dataLine );

private:
    void setDataToPloshcadka( );
    void setValuta( );
    void setPeriodOplaty( );
    void setPostaPeriod( );
    void connections( );

private:
    Ui::TemplateFormOrder *ui;
    ExchangeRates *cours;
    QStringList ploschadka;
    QStringList valuta;
    QStringList periodOplaty;
    QStringList postaPeriod;
};

#endif // TEMPLATEFORMORDER_H
