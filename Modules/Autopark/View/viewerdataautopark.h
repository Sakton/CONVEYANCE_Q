#ifndef VIEWERDATAAUTOPARK_H
#define VIEWERDATAAUTOPARK_H

#include <QWidget>

namespace Ui {
class ViewerDataAutopark;
}

class ViewerDataAutopark : public QWidget
{
  Q_OBJECT

 public:
  explicit ViewerDataAutopark(QWidget *parent = nullptr);
  ~ViewerDataAutopark( );

 public slots:
  void slotClickCancelButton( );

 private:
  Ui::ViewerDataAutopark *ui;
};

#endif // VIEWERDATAAUTOPARK_H
