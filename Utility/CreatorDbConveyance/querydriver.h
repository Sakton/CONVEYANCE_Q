#ifndef QUERYDRIVER_H
#define QUERYDRIVER_H
#include <QDebug>
#include <QPair>
#include <QString>
#include <list>
#include "../AllConstants.h"

class QueryDriver {
 public:
  using TypeCollection = AllConstatnts::Line;
  using Para = AllConstatnts::Para;

  template < typename Container >
  static QString insertQueryString( const QString& tableName,
      const Container& coll ) {
      QString res = "INSERT INTO " + QLatin1String( AllConstatnts::DB_SHEME ) + "." + tableName + " ( ";
      res = std::accumulate( coll.begin( ), coll.end( ), res,
          []( const QString& tRes, const Para& el ) -> QString {
              return ( tRes + " " + el.first + "," );
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

  static QString
  selectAll( const QString& tableName );

  static QString update( const QString& tableName,
                         const TypeCollection& collection,
                         const QString& wherePredicat );

  static QString update( const QString& tableName,
                         const std::list< QString >& poles,
                         const std::list< QString >& values,
                         const QString& wherePredicat );

  static QString delRecord( const QString& tableName,
                            const QString& wherePredicat );

  QString selectQueryString( const TypeCollection& coll );
  QString updateQueryString( const TypeCollection& coll );
};

#endif // QUERYDRIVER_H
