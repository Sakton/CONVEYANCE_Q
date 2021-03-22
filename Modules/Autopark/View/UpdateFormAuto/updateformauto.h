#ifndef UPDATEFORMAUTO_H
#define UPDATEFORMAUTO_H

#include <QWidget>
#include "Utility/AllConstants.h"

namespace Ui {
class UpdateFormAuto;
}

class UpdateFormAuto : public QWidget
{
  Q_OBJECT

  using Line = AllConstatnts::Line;

 public:
  explicit UpdateFormAuto( QWidget* parent = nullptr );
  ~UpdateFormAuto( );

  void setDataInForm( Line& data );

 public slots:
  void slotClickedOkButton( );
  void slotClickedCancelButton( );

 signals:
  void signalDataUpdate( );

 private:
  Ui::UpdateFormAuto *ui;
};

#endif // UPDATEFORMAUTO_H
