#ifndef USER_H
#define USER_H
#include <QString>
#include <map>
// пользователь представляется как администратор базы данных
// или тот под кем будет вход в базу. или пользователь приложения

class QFile;

class User {
 public:
  User();

  bool saveUser( const QString &path );
  bool readUser(const QString &path);

  // TODO ТУТ сериализация
 private:
  std::map< QString, QString > parameters;
};

#endif // USER_H
