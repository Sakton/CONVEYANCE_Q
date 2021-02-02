#ifndef ABSTRACTDBFACTORY_H
#define ABSTRACTDBFACTORY_H
class AbstractCreateTableObject;
class AbstractInsertObject;
class AbstractSelectObject;
class AbstractUpdateObject;
class AbstractDeleteObject;

class AbstractDbFactory
{
 public:
  virtual ~AbstractDbFactory( );
  virtual AbstractCreateTableObject *createCreator( ) = 0;
  virtual AbstractInsertObject *createInserter( ) = 0;
  virtual AbstractSelectObject *createSelectioner( ) = 0;
  virtual AbstractUpdateObject *createUpdater( ) = 0;
  virtual AbstractDeleteObject *createDeleter( ) = 0;
};

#endif // ABSTRACTDBFACTORY_H
