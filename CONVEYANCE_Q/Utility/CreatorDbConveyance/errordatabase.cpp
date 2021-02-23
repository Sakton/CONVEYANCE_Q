#include "errordatabase.h"

ErrorDatabase::ErrorDatabase( const QString &str ) : std::exception( str.toStdString( ).c_str( ) ) {}

const char *ErrorDatabase::what( ) const { return std::exception::what( ); }

ErrorCreateDatabase::ErrorCreateDatabase( const QString &str ) : ErrorDatabase( str ) {}
