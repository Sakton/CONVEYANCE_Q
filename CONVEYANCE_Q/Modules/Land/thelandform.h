#ifndef THELANDFORM_H
#define THELANDFORM_H

#include <QWidget>

namespace Ui {
class TheLandForm;
}

class TheLandForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheLandForm(QWidget *parent = nullptr);
  ~TheLandForm( );

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );

 private:
  QStringList readLands( );

 signals:

 private:
  Ui::TheLandForm *ui;
};

#endif // THELANDFORM_H
