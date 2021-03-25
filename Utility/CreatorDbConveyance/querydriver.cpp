#include "querydriver.h"
#include <numeric>

QString QueryDriver::insertQueryString(
    const QString& tableName,
    const QueryDriver::TypeCollection& coll ) {
  QString res = "INSERT INTO " + QLatin1String( AllConstatnts::DB_SHEME ) +
                "." + tableName + " ( ";
  res = std::accumulate( coll.begin( ), coll.end( ), res,
                         []( const QString& tRes, const Para& el ) -> QString {
                           return ( tRes + "\"" + el.first + "\"," );
                         } );
  res.chop( 1 );
  res += " ) VALUES ( ";
  res = std::accumulate( coll.begin( ), coll.end( ), res,
                         []( const QString& tRes, const Para& el ) {
                           return ( tRes + "'" + el.second + "'," );
                         } );
  res.chop( 1 );
  res += " );";
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
  qs += QLatin1String( AllConstatnts::DB_SHEME ) + "." + tableName + " SET ";
  qs = std::accumulate( collection.cbegin( ), collection.cend( ), qs,
                        []( const QString& s, const Para& el ) {
                          return s + ( el.first + "=" + el.second + "," );
                        } );
  qs.chop( 1 );
  qs += " ";
  qs += "WHERE " + wherePredicat + ";";
  return qs;
}

QString QueryDriver::update( const QString& tableName,
                             const std::list< QString >& poles,
                             const std::list< QString >& values,
                             const QString& wherePredicat ) {
  if ( poles.size( ) != values.size( ) )
    return { };
  QString qs = "UPDATE " + QString( AllConstatnts::DB_SHEME );
  qs += "." + tableName + " SET (";
  qs = std::accumulate( poles.cbegin( ), poles.cend( ), qs,
                        []( const QString& str, const QString& pole ) {
                          return ( str + pole + "," );
                        } );
  qs.chop( 1 );
  qs += " ) ";
  qs += "= ( ";
  qs = std::accumulate( values.cbegin( ), values.cend( ), qs,
                        []( const QString& str, const QString& el ) {
                          return ( str + "'" + el + "'" + "," );
                        } );
  qs.chop( 1 );
  qs += " ) WHERE ";
  qs += wherePredicat + ";";
  return qs;
}

QString QueryDriver::delRecord( const QString& tableName,
                                const QString& wherePredicat ) {
  QString qs = "DELETE FROM " + QLatin1String( AllConstatnts::DB_SHEME ) + "." +
               tableName + " WHERE " + wherePredicat;
  return qs;
}
