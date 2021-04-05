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
  enum class State { INSERT, UPDATE };
  explicit UpdateFormAuto( QWidget* parent = nullptr );
  ~UpdateFormAuto( );

  void setDataInForm( const Line& data );
  const Line& getDataInForm( ) const;
  void setState( const State& value );

 public slots:
  void slotClickedOkButton( );
  void slotClickedCancelButton( );

 signals:
  void signalDataUpdate( );
  void signalNewData( );

 private:
  Ui::UpdateFormAuto* ui;
  State state;
};

#endif // UPDATEFORMAUTO_H
