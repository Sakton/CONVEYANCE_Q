#ifndef QUERYDRIVER_H
#define QUERYDRIVER_H
#include <QDebug>
#include <QPair>
#include <QString>
#include "../AllConstants.h"

class QueryDriver {
 public:
  using TypeCollection = AllConstatnts::Line;
  using Para = AllConstatnts::Para;

  static QString insertQueryString( const QString& tableName,
                                    const TypeCollection& coll );
  static QString selectAll( const QString& tableName );
  static QString update( const QString& tableName,
                         const TypeCollection& collection,
                         const QString& wherePredicat );
  QString selectQueryString( const TypeCollection& coll );
  QString updateQueryString( const TypeCollection& coll );
};

#endif // QUERYDRIVER_H
