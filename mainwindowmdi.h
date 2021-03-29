#ifndef MAINWINDOWMDI_H
#define MAINWINDOWMDI_H

#include <QMainWindow>

namespace Ui {
class MainWindowMdi;
}

class MainWindowMdi : public QMainWindow
{
  Q_OBJECT

 public:
  explicit MainWindowMdi(QWidget *parent = nullptr);
  ~MainWindowMdi();

 private:
  Ui::MainWindowMdi *ui;
};

#endif // MAINWINDOWMDI_H
