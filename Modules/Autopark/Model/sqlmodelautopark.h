#ifndef SQLMODELAUTOPARK_H
#define SQLMODELAUTOPARK_H

#include <QObject>
#include "../../../Utility/AllConstants.h"

class SqlModelAutopark
{
  using Table = AllConstatnts::Table;

 public:
  SqlModelAutopark( );

 private:
  void selectAll( );

  Table& dataTable( );
  const Table& dataTable( ) const;

 private:
  Table data_;
};

#endif // SQLMODELAUTOPARK_H
