#ifndef MAINFORMAUTOPARK_H
#define MAINFORMAUTOPARK_H

#include <QWidget>
#include "Utility/AllConstants.h"

namespace Ui {
class MainFormAutopark;
}

class MainDelegateWidgetAutopark;
class UpdateFormAuto;

class MainFormAutopark : public QWidget
{
  Q_OBJECT

  using Table = AllConstatnts::Table;
  using Line = AllConstatnts::Line;

 public:
  explicit MainFormAutopark(QWidget *parent = nullptr);
  ~MainFormAutopark( );

 private:
  void fill( );
  void read( );
  void clearCurrents( );

 public slots:
  void slotItemClickedChangeButton( const QString& vin );
  void slotItemClickedDeleteButton( const QString& vin );
  void slotItemIsUpdates( /*const QString& vin*/ );
  void slotAddItem( );
  void slotItemIsInsert( );

 private:
  Ui::MainFormAutopark* ui;
  Table data_;
  MainDelegateWidgetAutopark* selectedDelegateWidget { nullptr };
  QString currentKey_Vin;
  UpdateFormAuto* updateWindow;
};

#endif // MAINFORMAUTOPARK_H
