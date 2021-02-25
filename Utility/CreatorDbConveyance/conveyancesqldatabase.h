#ifndef CONVEYANCESQLDATABASE_H
#define CONVEYANCESQLDATABASE_H
#include <QObject>
#include <QSqlDatabase>
#include <memory>

// отвечает за соединение с БД

class ConveyanceSQLDatabase {
 public:
  explicit ConveyanceSQLDatabase( );
  ~ConveyanceSQLDatabase( );

  bool openDb( );
  void closeDb( );

  //пробники
  //  bool insertToDb( const QString& q );
  //  std::unique_ptr< QSqlQuery > readAllTable( const QString& tableName );

  const QSqlDatabase& database( ) const;

 private:
  QSqlDatabase db;
};

#endif // CONVEYANCESQLDATABASE_H
