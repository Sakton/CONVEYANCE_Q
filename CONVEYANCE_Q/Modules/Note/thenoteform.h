#ifndef THENOTEFORM_H
#define THENOTEFORM_H

#include <QWidget>

namespace Ui {
class TheNoteForm;
}

class TheNoteForm : public QWidget {
  Q_OBJECT

 public:
  explicit TheNoteForm( QWidget *parent = nullptr );
  ~TheNoteForm( );

 private:
  Ui::TheNoteForm *ui;
};

#endif // THENOTEFORM_H
