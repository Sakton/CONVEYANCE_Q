#ifndef MAINFORMAUTOPARK_H
#define MAINFORMAUTOPARK_H

#include <QWidget>
#include "Utility/AllConstants.h"

namespace Ui {
class MainFormAutopark;
}

class MainDelegateWidgetAutopark;
class UpdateFormAuto;
class QListWidgetItem;

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
  void addWidget( const Line& line );

 public slots:
  void slotItemClickedChangeButton( const QString& id );
  void slotItemClickedDeleteButton( const QString& id );
  void slotItemIsUpdates( /*const QString& vin*/ );
  void slotAddItem( );
  void slotItemIsInsert( );
  void slotSetCurrentSelectedItem( QListWidgetItem* item );

 private:
  Ui::MainFormAutopark* ui;
  Table data_;
  MainDelegateWidgetAutopark* selectedDelegateWidget { nullptr };
  QString currentKey;
  UpdateFormAuto* updateWindow;
  QListWidgetItem* currentSelectedItemWidget;  // пока не нужен но вдруг
};

#endif // MAINFORMAUTOPARK_H
