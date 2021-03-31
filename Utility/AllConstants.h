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

// names DB
namespace NAME_TABLE {
static const char* AUTOPARK = "autopark";
}

//** name_poles tables "AUTOPARK"
static const char* NAME_BRAND { "name_brand" };
static const char* SERIES_BRAND { "series_brand" };
static const char* MARKA_BRAND { "marka_brand" };
static const char* ISSUE { "issue" };
static const char* AUTO_COUNTRY_NUMBER { "auto_counry_number" };
static const char* VIN { "vin" };
static const char* ECO { "eco" };
static const char* INSPECTION { "inspection" };

//** urls excange rates
static const char* URL_XML_ECB_EUROPA_EU =
    "https://www.ecb.europa.eu/stats/eurofxref/eurofxref-daily.xml";

static const char* NARODOWY_BANK_POLSKI =
    "http://api.nbp.pl/api/exchangerates/rates/a/";

static const char* ISO_CODE_EURO = "eur/";
static const char* ISO_CODE_PL_ZLOTY = "985";
static const char* ISO_CODE_USD_DOLLAR = "840";
static const char* FORMAT_JSON = "/?format=json";

}  // namespace AllConstatnts

#endif  // ALLCONSTANTS_H
