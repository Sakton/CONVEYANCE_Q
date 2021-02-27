#ifndef DBTABLECREATOR_H
#define DBTABLECREATOR_H
#include <QObject>

#include "conveyancesqldatabase.h"

// отвечает за создание таблиц в созданной данных
// вызывается единожды при первом запуске приложения

class DBTableCreator : public QObject {
  Q_OBJECT
  // private:
 public:
  DBTableCreator();

 public:
  void createAllTableDb( /*const QString &userName, const QString &password*/ );
  bool dropTable( );
  ~DBTableCreator( );

 private:
  bool queryToDb( const QString &queryString );
  void createDatabase( );
  bool createUser( const QString &userName, const QString &password );
  void createShema( );
  bool createTableNationality( );
  bool createCounter( );
  bool createLandTable( );
  bool createAutoBrandTable( );
  bool createClientTable( );
  bool createAdressTable( );

 private:
  ConveyanceSQLDatabase db;
};

#endif // DBTABLECREATOR_H
