#ifndef IBASEFORM_H
#define IBASEFORM_H
#include "Utility/AllConstants.h"

class IBaseForm {
 public:
  using Line = AllConstatnts::Line;
  virtual void readDataOfForm( ) = 0;
  virtual void setDataInForm( const Line &dataLine ) = 0;
  virtual void clearForm( ) const = 0;
};

#endif // IBASEFORM_H
