#ifndef UPDATEFORMAUTO_H
#define UPDATEFORMAUTO_H

#include <QWidget>

namespace Ui {
class UpdateFormAuto;
}

class UpdateFormAuto : public QWidget
{
  Q_OBJECT

 public:
  explicit UpdateFormAuto(QWidget *parent = nullptr);
  ~UpdateFormAuto();

 private:
  Ui::UpdateFormAuto *ui;
};

#endif // UPDATEFORMAUTO_H
