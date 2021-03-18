#ifndef MAINFORMAUTOPARK_H
#define MAINFORMAUTOPARK_H

#include <QWidget>
#include "Utility/AllConstants.h"

namespace Ui {
class MainFormAutopark;
}

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

 private:
  Ui::MainFormAutopark* ui;
  Table data_;
};

#endif // MAINFORMAUTOPARK_H
