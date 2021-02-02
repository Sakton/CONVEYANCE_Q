#ifndef CONVEYANCESQLDATABASE_H
#define CONVEYANCESQLDATABASE_H
#include <QObject>
#include <QSqlDatabase>

// отвечает за соединение с БД

class ConveyanceSQLDatabase {
 public:
  explicit ConveyanceSQLDatabase( );
  ~ConveyanceSQLDatabase( );

  bool openDb( );

  //  bool insertToDb( const QString &q );
  //  bool updateToDb( const QString &q );
  //  bool selectFromDb( const QString &q );

  const QSqlDatabase& database( ) const;

 private:
  QSqlDatabase db;
};

#endif // CONVEYANCESQLDATABASE_H
