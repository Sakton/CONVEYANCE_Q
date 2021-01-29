#ifndef DBCONNECTCONSTANT_H
#define DBCONNECTCONSTANT_H
#include <QString>

namespace DBConnectConstatnt {

constexpr int regim { 0 };

// test base
const QString driverBase = "QPSQL";
const QString hostName { "localhost" };
const int port { 5432 };
const QString databaseName { "testdb" };
const QString userName { "postgres" };
const QString password { "123" };

// table Adress
// const QString

}  // namespace DBConnectConstatnt

#endif // DBCONNECTCONSTANT_H
