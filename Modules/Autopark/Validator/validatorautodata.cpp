#include "validatorautodata.h"
#include <QRegularExpression>

ValidatorAutoData::ValidatorAutoData( ) {}

bool ValidatorAutoData::validateVin( const QString& vin ) {
  QRegularExpression re( "[A-HJ-NPR-Z0-9]{17}" );
  return re.match( vin.toUpper( ) ).hasMatch( ) && vin.size( ) == 17;
}
