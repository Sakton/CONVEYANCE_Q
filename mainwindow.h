#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QMdiSubWindow;
class QLabel;
class QWidget;

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
//  void slotAddTabWindow( );
  void slotCloseTabWindow( int );
  void slotCloseChildrenWidget( int index );
  void slotSetCurrentChildrenWidget( int index );
  void slotCloseChildrenWidgetOnTabClose( int index );
  
  void slotAddAutopark( int pos );
  void slotAddOrder( int pos );

 private:
  QToolBar *createTopToolBar( );
  void statusBarOperations( );
  bool searchOpensWindow(const QString &searchClassName); //проверяет открыто ли уже такое окошко

 protected:
  void mouseMoveEvent( QMouseEvent *event ) override;

 private:
  Ui::MainWindow *ui;
  QLabel *labelMouseX;
  QLabel *labelMouseY;
  QWidget *currentWidget;
};
#endif // MAINWINDOW_H
