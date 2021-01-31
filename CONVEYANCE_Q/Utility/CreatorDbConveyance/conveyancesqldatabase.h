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
  bool createTableAdress( );
  bool createTableAutopark( );
  bool createTableBlackList( );
  bool createTableClient( );
  bool createTableDriver( );
  bool createTableLand( );
  bool createTableNote( );
  bool createTableOrders( );
  bool createTablePayment( );
  bool createTablePost( );

  bool deleteTableAdress( );
  bool deleteTableAutopark( );

  bool insertToDb( const QString &q );
  bool updateToDb( const QString &q );
  bool selectFromDb( const QString &q );

 private:
  QSqlDatabase db;
};

#endif // CONVEYANCESQLDATABASE_H
