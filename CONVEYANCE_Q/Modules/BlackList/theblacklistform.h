#ifndef THEBLACKLISTFORM_H
#define THEBLACKLISTFORM_H

#include <QWidget>

namespace Ui {
class TheBlackListForm;
}

class TheBlackListForm : public QWidget {
  Q_OBJECT

 public:
  explicit TheBlackListForm( QWidget *parent = nullptr );
  ~TheBlackListForm( );

 private:
  Ui::TheBlackListForm *ui;
};

#endif // THEBLACKLISTFORM_H
