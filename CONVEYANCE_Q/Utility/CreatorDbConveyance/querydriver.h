#ifndef QUERYDRIVER_H
#define QUERYDRIVER_H
#include <QDebug>
#include <QPair>
#include <QString>
#include <map>

class QueryDriver {
 public:
  using typeCollection = std::map< QString, QString >;
  QString insertQueryString( const QString& tableName, const typeCollection& coll );
  QString selectQueryString( const typeCollection& coll );
  QString updateQueryString( const typeCollection& coll );
};

#endif // QUERYDRIVER_H
