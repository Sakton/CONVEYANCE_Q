#ifndef ABSTRACTDBTABLECREATOR_H
#define ABSTRACTDBTABLECREATOR_H


class AbstractDBtableCreator
{
 private:
  // virtual bool createDB( ) = 0;
  virtual bool createAdressTable( ) = 0;
  virtual bool createAutoParkTable( ) = 0;
  virtual bool createBlackListTable( ) = 0;
  virtual bool createClientTable( ) = 0;
  virtual bool createDriverTable( ) = 0;
  virtual bool createLandTable( ) = 0;
  virtual bool createNoteTable( ) = 0;
  virtual bool createOrdersTable( ) = 0;
  virtual bool createPaymentTable( ) = 0;
  virtual bool createPostTable( ) = 0;
};

#endif // ABSTRACTDBTABLECREATOR_H
