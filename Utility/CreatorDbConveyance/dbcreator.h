#ifndef DBCREATOR_H
#define DBCREATOR_H

#include <QObject>

// класс создает базу данных Зщ
// TODO отделение класса ТУТ

class QProcess;

class DBCreator : public QObject {
  Q_OBJECT

 public:
  DBCreator( );
  void createDatabase( const QString &nameDataBase, const QString &userPassword );

 public slots:
  void slotProessError( int error );
  void slotReadStdOut( );
  void slotStarted( );
  void slotFinished( );
  void testSlotDBCreated( bool res );

 signals:
  void signalDataBaseCreated( bool ok );

 private:
  QProcess *process { nullptr };
};

#endif // DBCREATOR_H