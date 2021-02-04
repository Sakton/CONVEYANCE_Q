#ifndef DBTABLECREATOR_H
#define DBTABLECREATOR_H
#include "abstractdbtablecreator.h"
#include "conveyancesqldatabase.h"
#include "querydriver.h"

// отвечает за создание всех таблиц в базе данных
// вызывается единожды при инсталляции приложения

class DBTableCreator : public AbstractDBtableCreator {
 public:
  DBTableCreator( );
  bool createDb( /*const QString &nameDb, const QString &nameUser, const QString &password*/ );
  bool dropTable( );

 private:
  bool createAdressTable( ) override;
  bool createAutoParkTable( ) override;
  bool createBlackListTable( ) override;
  bool createClientTable( ) override;
  bool createDriverTable( ) override;
  bool createLandTable( ) override;
  bool createNoteTable( ) override;
  bool createOrdersTable( ) override;
  bool createPaymentTable( ) override;
  bool createPostTable( ) override;

 private:
  ConveyanceSQLDatabase db;
};

#endif // DBTABLECREATOR_H
