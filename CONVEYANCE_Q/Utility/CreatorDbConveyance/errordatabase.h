#ifndef ERRORDATABASE_H
#define ERRORDATABASE_H
#include <QString>

#include "exception"

class ErrorDatabase : public std::exception {
 public:
  explicit ErrorDatabase( const QString& str );

  // exception interface
 public:
  const char* what( ) const override;
};

class ErrorCreateDatabase : public ErrorDatabase {
  explicit ErrorCreateDatabase( const QString& str );
};

#endif // ERRORDATABASE_H
