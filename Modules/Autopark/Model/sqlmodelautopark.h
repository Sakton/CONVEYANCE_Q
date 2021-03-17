#ifndef SQLMODELAUTOPARK_H
#define SQLMODELAUTOPARK_H

#include <QObject>
#include <map>
#include <unordered_map>

class SqlModelAutopark
{
  using Table = std::unordered_map< QString, std::map< QString, QVariant > >;

 public:
  SqlModelAutopark( );

 private:
  Table data_;
};

#endif // SQLMODELAUTOPARK_H
