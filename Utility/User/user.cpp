#include "user.h"

#include <QDataStream>
#include <QException>
#include <QFile>

User::User()
{
  
}

bool User::saveUser( const QString &path ) {
  QFile file( path );
  if ( !file.open( QFile::WriteOnly ) ) {
    // throw
  }
  QDataStream dataStream;
}

bool User::readUser( const QString &path ) {}
