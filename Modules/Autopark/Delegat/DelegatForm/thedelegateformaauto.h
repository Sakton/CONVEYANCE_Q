#ifndef THEDELEGATEFORMAAUTO_H
#define THEDELEGATEFORMAAUTO_H

#include <QWidget>

// TODO подумать над архитектурой что то не то?

namespace Ui {
class TheDelegateFormaAuto;
}

class TheDelegateFormaAuto : public QWidget
{
  Q_OBJECT

 public:
  explicit TheDelegateFormaAuto( QWidget *parent = nullptr );
  void setData( const QString &name, const QString &seria, const QString &mark, const QString &days );
  void setKey( const QString &key );
  QString key( );

  ~TheDelegateFormaAuto( );

 private:
  QString key_;  //не нравится мне это
  Ui::TheDelegateFormaAuto *ui;
};

#endif // THEDELEGATEFORMAAUTO_H
