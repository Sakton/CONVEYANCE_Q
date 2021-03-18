#ifndef ALLCONSTANTS_H
#define ALLCONSTANTS_H
#include <QLatin1String>
#include <QString>
#include <map>
#include <unordered_map>

namespace AllConstatnts {

//** file settings
static const char* nameFileSettingsApplication = "config.ini";
// key's settings

//** db
static const char* DRIVER_BASE { "QPSQL" };
static const char* HOST_NAME { "localhost" };
static const int PORT = 5432;
static const char* USER_NAME { "postgres" };
static const char* DB_NAME { "conveyance_db" };
static const char* PASSWORD { "postgres" };
static const char* DB_SHEME { "conveyance" };

//** types
using Para = std::pair< QString, QString >;
using Line = std::map< QString, QString >;
using Table = std::unordered_map< QString, Line >;

//** name_poles tables "AUTOPARK"
static const char* NAME_BRAND { "name_brand" };
static const char* SERIES_BRAND { "series_brand" };
static const char* MARKA_BRAND { "marka_brand" };
static const char* ISSUE { "issue" };
static const char* AUTO_COUNTRY_NUMBER { "auto_counry_number" };
static const char* VIN { "vin" };
static const char* ECO { "eco" };
static const char* INSPECTION { "inspection" };

}  // namespace AllConstatnts

#endif  // ALLCONSTANTS_H
