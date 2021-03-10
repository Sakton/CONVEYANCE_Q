#ifndef THEDELEGATEFORMAAUTO_H
#define THEDELEGATEFORMAAUTO_H

#include <QWidget>

namespace Ui {
class TheDelegateFormaAuto;
}

class TheDelegateFormaAuto : public QWidget
{
  Q_OBJECT

 public:
  explicit TheDelegateFormaAuto(QWidget *parent = nullptr);
  ~TheDelegateFormaAuto();

 private:
  Ui::TheDelegateFormaAuto *ui;
};

#endif // THEDELEGATEFORMAAUTO_H
