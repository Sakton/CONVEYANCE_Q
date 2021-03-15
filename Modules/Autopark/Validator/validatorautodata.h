#ifndef VALIDATORAUTODATA_H
#define VALIDATORAUTODATA_H
#include <QString>

class ValidatorAutoData
{
 public:
  ValidatorAutoData();
  static bool validateVin( const QString& vin );
};

#endif // VALIDATORAUTODATA_H
