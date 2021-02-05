#include "querydriver.h"

#include <numeric>

QString QueryDriver::insertQueryString( const QString &tableName, const QueryDriver::typeCollection &coll ) {
  using para = std::pair< QString, QString >;
  QString res = "INSERT INTO " + tableName + "(";
  res = std::accumulate( coll.begin( ), coll.end( ), res,
                         []( const QString &tRes, const para &el ) -> QString { return ( tRes + el.first + "," ); } );
  res.chop( 1 );
  res += ")VALUES(";
  res = std::accumulate( coll.begin( ), coll.end( ), res,
                         []( const QString &tRes, const para &el ) { return ( tRes + "'" + el.second + "'," ); } );
  res.chop( 1 );
  res += ")";
  return res;
}
