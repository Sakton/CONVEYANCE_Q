#ifndef MAINDELEGATEWIDGETAUTOPARK_H
#define MAINDELEGATEWIDGETAUTOPARK_H

#include <QWidget>
#include "../../../../Utility/AllConstants.h"

class QListWidgetItem;

namespace Ui {
class MainDelegateWidgetAutopark;
}

class MainDelegateWidgetAutopark : public QWidget
{
  Q_OBJECT

  using Line = AllConstatnts::Line;

 public:
  explicit MainDelegateWidgetAutopark( const Line& line,
                                       QWidget* parent = nullptr );
  ~MainDelegateWidgetAutopark( );

  void setImg( const QString& url = "qrc:/image/empty_photo.jpg" );
  void setData( const Line& line );
  void setBoundListWidgetItem( QListWidgetItem* item );

 private:
  void fill( );
  void badDataMessage( );

 public slots:
  void slotClickedChangeButton( );
  void slotClickedDeleteButton( );

 signals:
  void signalClickedChangeButton( const QString& id );
  void signalClickedDeleteButton( const QString& id );
  void signalBoundedListWidgetItem( QListWidgetItem* item );

 private:
  Ui::MainDelegateWidgetAutopark* ui;
  Line data_;
  //связанный WidgetItem, для поиска конкретно этого делегата
  QListWidgetItem* boundItem { nullptr };
};

#endif // MAINDELEGATEWIDGETAUTOPARK_H
