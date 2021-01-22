#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QMdiSubWindow;
class QLabel;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow( );

 public slots:
  void slotAddTabWindow( );
  void slotCloseTabWindow( int );

 private:
  QToolBar *createTopToolBar( );
  void statusBarOperations( );

 protected:
  void mouseMoveEvent( QMouseEvent *event ) override;

 private:
  Ui::MainWindow *ui;
  QLabel *labelMouseX;
  QLabel *labelMouseY;
};
#endif // MAINWINDOW_H
