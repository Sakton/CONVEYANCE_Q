#ifndef CONVEYANCESQLDATABASE_H
#define CONVEYANCESQLDATABASE_H
#include <QObject>
#include <QSqlDatabase>
#include <memory>

// отвечает за соединение с БД

class ConveyanceSQLDatabase {
 public:
  explicit ConveyanceSQLDatabase();
  ~ConveyanceSQLDatabase( );

  bool openDb( );
  void closeDb( );

  const QSqlDatabase& database( ) const;

 private:
  QSqlDatabase db;
};

#endif // CONVEYANCESQLDATABASE_H
