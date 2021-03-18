#ifndef MAINDELEGATEWIDGETAUTOPARK_H
#define MAINDELEGATEWIDGETAUTOPARK_H

#include <QWidget>
#include "../../../../Utility/AllConstants.h"

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

 private:
  void fill( );

 private:
  Ui::MainDelegateWidgetAutopark* ui;
  Line data_;
};

#endif // MAINDELEGATEWIDGETAUTOPARK_H
