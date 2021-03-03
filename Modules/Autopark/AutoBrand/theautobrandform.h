#ifndef THEAUTOBRANDFORM_H
#define THEAUTOBRANDFORM_H

#include <QWidget>

namespace Ui {
class TheAutoBrandForm;
}

class TheAutoBrandForm : public QWidget
{
  Q_OBJECT

 public:
  explicit TheAutoBrandForm(QWidget *parent = nullptr);
  ~TheAutoBrandForm( );

 public slots:
  void slotButtonOkClicked( );
  void slotButtonCancelClicked( );

 signals:
  void signalInsertedToDatabase( );

 private:
  Ui::TheAutoBrandForm *ui;
};

#endif // THEAUTOBRANDFORM_H
