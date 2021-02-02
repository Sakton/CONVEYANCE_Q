#ifndef QUERYDRIVER_H
#define QUERYDRIVER_H
#include <QDebug>
#include <QPair>
#include <QString>

class QueryDriver {
 public:
  template < typename T, template < typename, typename > class Container, typename A, typename B >
  static QString createTableQuery( const T &nameTable, const Container< A, B > &data ) {
    qDebug( ) << nameTable /*<< *( data.begin( ) ).first  << " " << data.begin( ).second*/;
    return { };
  }
};

#endif // QUERYDRIVER_H
