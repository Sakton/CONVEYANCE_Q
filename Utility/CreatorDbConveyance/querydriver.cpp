#include "querydriver.h"
#include <numeric>

//идея не очень,
QString QueryDriver::insertQueryString( const QString &tableName, const QueryDriver::typeCollection &coll ) {
  QString res = "INSERT INTO " + QLatin1String( AllConstatnts::DB_SHEME ) +
                "." + tableName + "(";
  res = std::accumulate( coll.begin( ), coll.end( ), res,
                         []( const QString& tRes, const Para& el ) -> QString {
                           return ( tRes + "\"" + el.first + "\"," );
                         } );
  res.chop( 1 );
  res += ")VALUES(";
  res = std::accumulate( coll.begin( ), coll.end( ), res,
                         []( const QString& tRes, const Para& el ) {
                           return ( tRes + "'" + el.second + "'," );
                         } );
  res.chop( 1 );
  res += ");";
  return res;
}

QString QueryDriver::selectAll( const QString &tableName ) {
  return QString( "SELECT * FROM " ) +
         QLatin1String( AllConstatnts::DB_SHEME ) + "." + tableName + ";";
}
