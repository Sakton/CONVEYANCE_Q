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
  ~InsertFormAuto( );

 public slots:
  void slotButtonAccepted( );
  void slotButtonRejected( );

 private:
  Ui::InsertFormAuto *ui;
};

#endif // INSERTFORMAUTO_H
