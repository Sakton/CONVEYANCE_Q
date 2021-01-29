#ifndef CONVEYANCESQLDATABASE_H
#define CONVEYANCESQLDATABASE_H
#include <QObject>
#include <QSqlDatabase>

class ConveyanceSQLDatabase : public QObject {
  Q_OBJECT
 public:
  explicit ConveyanceSQLDatabase( );
  ~ConveyanceSQLDatabase( );

  bool openDb( );

 private:
  QSqlDatabase db;
};

#endif // CONVEYANCESQLDATABASE_H
