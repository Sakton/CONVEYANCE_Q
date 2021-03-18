#ifndef QUERYDRIVER_H
#define QUERYDRIVER_H
#include <QDebug>
#include <QPair>
#include <QString>
#include "../AllConstants.h"

class QueryDriver {
 public:
  using typeCollection = AllConstatnts::Line;
  using Para = AllConstatnts::Para;

  static QString insertQueryString( const QString& tableName, const typeCollection& coll );
  static QString selectAll( const QString& tableName );
  QString selectQueryString( const typeCollection& coll );
  QString updateQueryString( const typeCollection& coll );
};

#endif // QUERYDRIVER_H
