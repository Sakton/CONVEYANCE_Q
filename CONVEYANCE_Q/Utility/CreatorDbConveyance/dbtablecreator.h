#ifndef DBTABLECREATOR_H
#define DBTABLECREATOR_H
#include <vector>

#include "conveyancesqldatabase.h"
#include "querydriver.h"

// отвечает за создание всех таблиц в базе данных
// вызывается единожды при первом запуске приложения

class DBTableCreator {
 public:
  DBTableCreator( );
  bool createDb( );
  bool dropTable( );

 private:
  std::vector< QString > queries;
  ConveyanceSQLDatabase db;
};

#endif // DBTABLECREATOR_H
