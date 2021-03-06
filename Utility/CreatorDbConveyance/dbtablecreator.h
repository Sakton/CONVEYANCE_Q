#ifndef DBTABLECREATOR_H
#define DBTABLECREATOR_H
#include <QObject>

#include "conveyancesqldatabase.h"

// отвечает за создание таблиц в созданной данных
// вызывается единожды при первом запуске приложения

class DBTableCreator : public QObject {
  Q_OBJECT
 public:
  DBTableCreator( );

 public:
  void createAllTableDb( );
  bool dropTable( );

 private:
  bool queryToDb( const QString &queryString );
  void createDatabase( );
  bool createUser( const QString &userName, const QString &password );
  void createShema( );
  void createTableCountry( );
  void createAdressTable( );
  void createAutoparkTable( );
  //  void createBrandAuto( );
};

#endif // DBTABLECREATOR_H
