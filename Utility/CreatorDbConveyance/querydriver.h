#ifndef QUERYDRIVER_H
#define QUERYDRIVER_H
#include <QDebug>
#include <QPair>
#include <QString>
#include <map>

class QueryDriver {
 public:
  using typeCollection = std::map< QString, QString >;
  static QString insertQueryString( const QString& tableName, const typeCollection& coll );
  static QString selectAll( const QString& tableName );
  QString selectQueryString( const typeCollection& coll );
  QString updateQueryString( const typeCollection& coll );
};

#endif // QUERYDRIVER_H
