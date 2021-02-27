#ifndef DBCREATOR_H
#define DBCREATOR_H

#include <QObject>

// класс создает базу данных
// TODO отделение класса ТУТ

class QProcess;

class DBCreator : public QObject {
  Q_OBJECT

 public:
  DBCreator( );
  void createDatabase(const QString &nameDataBase);

 public slots:
  void slotProessError( int error );
  void slotReadStdOut( );
  void slotStarted( );
  void slotFinished( );

 signals:
  void signalDataBaseCreated(bool ok);

 private:
  QProcess *process{nullptr};
};

#endif // DBCREATOR_H
