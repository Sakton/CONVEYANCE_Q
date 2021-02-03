#ifndef QUERYDRIVER_H
#define QUERYDRIVER_H
#include <QDebug>
#include <QPair>
#include <QString>
#include <map>

class QueryDriver {
 public:
  //  template < typename T, typename... Arg, template < typename... > class Container >
  //  static QString createTableQuery( const T &nameTable, const Container< Arg... > &data ) {
  //    // qDebug( ) << nameTable << data[ 0 ].first << " " << data[ 0 ].second;
  //    QString queryStr;

  //    return queryStr;
  //  }

  //  QString str {
  //      "CREATE TABLE adress ("
  //      "id SERIAL,"
  //      "type_adress text,"
  //      "index_adress text,"
  //      "sity_adress text,"
  //      "adress_adress text,"
  //      "land_adress text)" };

  //  static QString createTableQuery( const QString& tableName, std::map< QString, QString >& data ) {
  //    QString queryString = "CREATE TABLE " + tableName + " (";
  //    for ( auto& el : data ) {
  //      queryString += "'" + el.first + " " + el.second + ",";
  //    }
  //    queryString.chop( 1 );
  //    queryString += ")";
  //    return queryString;
  //  }
};

#endif // QUERYDRIVER_H
