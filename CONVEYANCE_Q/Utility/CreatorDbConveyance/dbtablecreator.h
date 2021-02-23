#ifndef DBTABLECREATOR_H
#define DBTABLECREATOR_H
#include <QObject>
#include <vector>

#include "conveyancesqldatabase.h"
#include "querydriver.h"

// отвечает за создание всех таблиц в базе данных
// вызывается единожды при первом запуске приложения

class DBTableCreator : public QObject {
  Q_OBJECT

 public:
  DBTableCreator( );
  bool createDb( /*const QString &userName, const QString &password*/ );
  bool dropTable( );
  ~DBTableCreator( );

  // private:
  bool queryToDb( const QString &queryString );
  bool createDatabase( );
  bool createUser( const QString &userName, const QString &password );
  bool createShema( );
  bool createTableNationality( );
  bool createCounter( );
  bool createLandTable( );
  bool createAutoBrandTable( );
  bool createClientTable( );
  bool createAdressTable( );

 public slots:
  void slotProessError( );

 private:
  // std::vector< QString > queries;
  ConveyanceSQLDatabase db;
};

#endif // DBTABLECREATOR_H
