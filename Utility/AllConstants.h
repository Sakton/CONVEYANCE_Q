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
using Line = std::map< QString, QVariant >;
using Table = std::unordered_map< QString, Line >;

//** name_poles tables "AUTOPARK"
const char* NAME_BRAND { "name_brand" };
const char* SERIES_BRAND { "series_brand" };
const char* MARKA_BRAND { "marka_brand" };
const char* ISSUE { "issue" };
const char* AUTO_COUNTRY_NUMBER { "auto_counry_number" };
const char* VIN { "vin" };
const char* ECO { "eco" };
const char* INSPECTION { "inspection" };

}  // namespace AllConstatnts

#endif  // ALLCONSTANTS_H
