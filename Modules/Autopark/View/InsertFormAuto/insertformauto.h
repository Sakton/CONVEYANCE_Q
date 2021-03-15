#ifndef INSERTFORMAUTO_H
#define INSERTFORMAUTO_H

#include <QWidget>

namespace Ui {
class InsertFormAuto;
}

class InsertFormAuto : public QWidget
{
  Q_OBJECT

 public:
  explicit InsertFormAuto(QWidget *parent = nullptr);
  ~InsertFormAuto();

 private:
  Ui::InsertFormAuto *ui;
};

#endif // INSERTFORMAUTO_H
