#ifndef THECOUNTRYFORM_H
#define THECOUNTRYFORM_H

#include <QWidget>

namespace Ui {
class TheCountryForm;
}

class TheCountryForm : public QWidget {
  Q_OBJECT

 public:
  explicit TheCountryForm( QWidget *parent = nullptr );
  ~TheCountryForm( );

 public slots:
  void slotClick_OK_Button( );
  void slotClick_Cancel_Button( );

 private:
  QStringList readLands( );

 signals:
  void signalInsertToDb( );

 private:
  Ui::TheCountryForm *ui;
};

#endif // THECOUNTRYFORM_H
