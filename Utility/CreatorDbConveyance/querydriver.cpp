#include "querydriver.h"
#include <numeric>

QString QueryDriver::insertQueryString(
    const QString& tableName,
    const QueryDriver::TypeCollection& coll ) {
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

QString QueryDriver::update( const QString& tableName,
                             const QueryDriver::TypeCollection& collection,
                             const QString& wherePredicat ) {
  QString qs = "UPDATE ";
  qs += tableName + " SET ";
  //  for ( auto& elem : collection )
  //    qs += ;
  qs = std::accumulate( collection.cbegin( ), collection.cend( ), qs,
                        []( const QString& s, const Para& el ) {
                          return s + ( el.first + "=" + el.second + "," );
                        } );
  qs.chop( 1 );
  qs += " ";
  qs += "WHERE " + wherePredicat + ";";
  return qs;
}
