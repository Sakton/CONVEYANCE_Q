#ifndef DBTABLECREATOR_H
#define DBTABLECREATOR_H
#include "conveyancesqldatabase.h"
#include "querydriver.h"

// отвечает за создание всех таблиц в базе данных
// вызывается единожды при инсталляции приложения

class DBTableCreator
{
 public:
  DBTableCreator( );
  bool createDb( );

 private:
  bool createAdressTable( );
  bool createAutoParkTable( );
  bool createBlackListTable( );
  bool createClientTable( );
  bool createDriverTable( );
  bool createLandTable( );
  bool createNoteTable( );
  bool createOrdersTable( );
  bool createPaymentTable( );
  bool createPostTable( );

 private:
  ConveyanceSQLDatabase db;
};

#endif // DBTABLECREATOR_H
