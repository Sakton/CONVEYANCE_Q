#ifndef MAINFORMAUTOPARK_H
#define MAINFORMAUTOPARK_H

#include <QWidget>
#include "Utility/AllConstants.h"

namespace Ui {
class MainFormAutopark;
}

class QListWidgetItem;
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

 public slots:
  void slotItemPressed( QListWidgetItem* item );
  void slotItemClickedChangeButton( const QString& vin );
  void slotItemClickedDeleteButton( const QString& vin );
  void slotItemIsUpdates( /*const QString& vin*/ );

 private:
  Ui::MainFormAutopark* ui;
  Table data_;
  QListWidgetItem* selectedItem { nullptr };
  QString currentKey_Vin;
  UpdateFormAuto* updateWindow;
};

#endif // MAINFORMAUTOPARK_H
