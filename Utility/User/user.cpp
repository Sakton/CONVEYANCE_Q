#include "user.h"

#include <QDataStream>
#include <QException>
#include <QFile>

User::User() {
  parameters["typeParam1"] = "valueParameters1";
  parameters["typeParam2"] = "valueParameters2";
}

bool User::saveUser( const QString &path ) {
  QFile file( path );
  if ( !file.open( QFile::WriteOnly ) ) {
    // throw
  }
  QDataStream dataStream;
  return true;
}

bool User::readUser(const QString &path) { return 1; }
