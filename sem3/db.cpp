#include "sqlite3.h"
#include <iostream>
#include "db.h"
#include<string>
#include<vector>
#include <tuple>
#include <msclr/marshal.h>
using namespace std;


dbManager::dbManager()
{
	db = nullptr;
}

void dbManager::open(const char* name) {
    int rc = sqlite3_open(name, & db);

    if (rc != SQLITE_OK) {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return;
    }
    else {
        cout << "Opened database successfully!" << endl;
    }
}

void dbManager::close() {
    sqlite3_close(db);
}

bool dbManager::createApplianceListTable() {
    string query = "CREATE TABLE IF NOT EXISTS Appliances ("
        "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
        "Name TEXT UNIQUE NOT NULL, "
        "Power INT NOT NULL);";
    std::cout << "hello";

    char* errorMessage = nullptr;
    int rc = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
        return false;
    }
    std::cout << "Appliances Table created successfully!" << std::endl;
    return true;
}

bool dbManager::addApplianceToList(const char* name, int powerUsage) {
    sqlite3_stmt* statement;
    
    string query = "INSERT INTO Appliances (Name, Power) VALUES (?,?) ON CONFLICT(Name) DO NOTHING";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for Adding appliance" << endl;
        return false;
    }

    sqlite3_bind_text(statement, 1, name, -1, SQLITE_STATIC);
    sqlite3_bind_int(statement, 2, powerUsage);

    if (sqlite3_step(statement) != SQLITE_DONE) {
        cout << "Error executing statement for Adding appliance" << endl;
        return false;
    }
    else {
        cout << "Data inserted successfully into Appliances table" << endl;
    }

    sqlite3_finalize(statement);
    return true;
}

bool dbManager::createScheduleTable() {
    string query = "CREATE TABLE IF NOT EXISTS Schedules ("
        "SID INTEGER PRIMARY KEY, "
        "UID INTEGER  NOT NULL, "
        "Type TEXT NOT NULL,"
        "UnitsSaved INT NOT NULL,"
        "FOREIGN KEY(UID) REFERENCES Users(UID));";

    char* errorMessage = nullptr;
    int rc = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
        return false;
    }
    std::cout << "Schedules Table created successfully!" << std::endl;
    return true;
}

bool dbManager::addSchedule(int userID, const char* type, int unitsSaved) {
    sqlite3_stmt* statement;

    int currentSID = getCurrentSID(userID);

    string query = "INSERT INTO Schedules (SID,UID, Type, UnitsSaved) VALUES (?,?,?, ?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for Adding schedule" << endl;
        return false;
    }

    sqlite3_bind_int(statement, 1, currentSID + 1);
    sqlite3_bind_int(statement, 2, userID);
    sqlite3_bind_text(statement, 3, type, -1, SQLITE_STATIC);
    sqlite3_bind_int(statement, 4, unitsSaved);

    if (sqlite3_step(statement) != SQLITE_DONE) {
        cout << "Error executing statement for Adding schedule" << endl;
        return false;
    }
    else {
        cout << "Data inserted successfully into schedule table" << endl;
    }

    sqlite3_finalize(statement);
    return true;
}

bool dbManager::createUsersTable() {
    string query = "CREATE TABLE IF NOT EXISTS Users ("
        "UID INTEGER PRIMARY KEY AUTOINCREMENT, "
        "Username TEXT UNIQUE NOT NULL,"
        "Password TEXT NOT NULL,"
        "PeakHourStart INT NOT NULL,"
        "PeakHourEnd INT NOT NULL,"
        "meterPhaseType TEXT NOT NULL);";

    char* errorMessage = nullptr;
    int rc = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
        return false;
    }
    std::cout << "Users Table created successfully!" << std::endl;
    return true;
}

bool dbManager::addUser(const char* username, const char* password, int peakHoursStart, int peakHoursEnd, const char* meterPhaseType) {
    sqlite3_stmt* statement;

   string query = "INSERT INTO Users (Username, Password, PeakHourStart, PeakHourEnd, meterPhaseType) VALUES (?,?,?,?,?) ON CONFLICT(Username) DO NOTHING";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for Adding User" << endl;
        return false;
    }

    sqlite3_bind_text(statement, 1, username, -1, SQLITE_STATIC);
    sqlite3_bind_text(statement, 2, password, -1, SQLITE_STATIC);
    sqlite3_bind_int(statement, 3, peakHoursStart);
    sqlite3_bind_int(statement, 4, peakHoursEnd);
    sqlite3_bind_text(statement, 5, meterPhaseType, -1, SQLITE_STATIC);

    if (sqlite3_step(statement) != SQLITE_DONE) {
        cout << "Error executing statement for Adding User" << endl;
        return false;
    }
    else {
        cout << "Data inserted successfully into User table" << endl;
    }

    sqlite3_finalize(statement);
    return true;
}

bool dbManager::createPowerTable() {
    string query = "CREATE TABLE IF NOT EXISTS PowerDetails ("
        "UID INTEGER UNIQUE NOT NULL, "
        "targetUnits INT NOT NULL,"
        "consumedUnits INT NOT NULL,"
        "estimatedBill INT NOT NULL,"
        "FOREIGN KEY(UID) REFERENCES Users(UID));";

    char* errorMessage = nullptr;
    int rc = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
        return false;
    }
    std::cout << "PowerDetails Table created successfully!" << std::endl;
    return true;
}

bool dbManager::addPowerDetail(int userID, int targetUnits, int consumedUnits, int estimatedBill) {
    sqlite3_stmt* statement;

    string query = "INSERT INTO PowerDetails (UID, targetUnits, consumedUnits, estimatedBill) VALUES (?,?,?,?) ON CONFLICT(UID) DO NOTHING";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for Adding PowerDetails" << endl;
        return false;
    }

    sqlite3_bind_int(statement, 1, userID);
    sqlite3_bind_int(statement, 2, targetUnits);
    sqlite3_bind_int(statement, 3, consumedUnits);
    sqlite3_bind_int(statement, 4, estimatedBill);

    if (sqlite3_step(statement) != SQLITE_DONE) {
        cout << "Error executing statement for Adding PowerDetails" << endl;
        return false;
    }
    else {
        cout << "Data inserted successfully into PowerDetails table" << endl;
    }

    sqlite3_finalize(statement);
    return true;
}

//review ---------------------
void dbManager::readApplianceData(std::vector<std::pair<int, std::string>>& appliances) {
    sqlite3_stmt* statement = nullptr;

    // Prepare and execute SQL query to fetch appliance data
    const char* applianceQuery = "SELECT ID, Name FROM Appliances";
    if (sqlite3_prepare_v2(db, applianceQuery, -1, &statement, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare appliance query: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    // Store appliance data in vector
    while (sqlite3_step(statement) == SQLITE_ROW) {
        int id = sqlite3_column_int(statement, 0);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(statement, 1));
        if (name != nullptr) {
            appliances.push_back({ id, name });
        }
    }

    sqlite3_finalize(statement);
}

bool dbManager::createSelectedAppliacesTable()
{
    string query = "CREATE TABLE IF NOT EXISTS SelectedAppliances ("
        "UID INTEGER NOT NULL, "
        "SID INTEGER NOT NULL, "
        "AID INTEGER NOT NULL,"
        "APPLIANCENAME TEXT NOT NULL,"
        "PRIORITY INTEGER NOT NULL,"
        "QUANTITY INTEGER NOT NULL,"
        "Duration INTEGER NOT NULL,"
        "offsetId INTEGER NOT NULL,"
        "FOREIGN KEY(UID) REFERENCES Users(UID),"
        "FOREIGN KEY(SID) REFERENCES Schedules(SID));";


    char* errorMessage = nullptr;
    int rc = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
        return false;
    }
    std::cout << "SelectedAppliances Table created successfully!" << std::endl;
    return true;
}

bool dbManager::addselectedAppliances(int userID, int scheduleID, int applianceID, const char* applianceName, int priority, int quantity, int duration, int offsetId)
{
    sqlite3_stmt* statement;

    string query = "INSERT INTO SelectedAppliances (UID, SID,AID,APPLIANCENAME,PRIORITY,QUANTITY, DURATION, offsetId) VALUES (?,?,?,?,?,?,?,?) ";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for Adding selected appliance" << endl;
        return false;
    }

    sqlite3_bind_int(statement, 1, userID);
    sqlite3_bind_int(statement, 2, scheduleID);
    sqlite3_bind_int(statement, 3, applianceID);
    sqlite3_bind_text(statement, 4, applianceName,-1,SQLITE_STATIC);
    sqlite3_bind_int(statement, 5, priority);
    sqlite3_bind_int(statement, 6, quantity);
    sqlite3_bind_int(statement, 7, duration);
    sqlite3_bind_int(statement, 8, offsetId);
   

    if (sqlite3_step(statement) != SQLITE_DONE) {
        cout << "Error executing statement for Adding selected appliance" << endl;
        return false;
    }
    else {
        cout << "Data inserted successfully into Selected Appliances table" << endl;
    }

    sqlite3_finalize(statement);
    return true;
}

bool dbManager::deleteselectedappliances(int userID, int scheduleID)
{
    sqlite3_stmt* statement;
    string query = "DELETE FROM SelectedAppliances WHERE UID = ? AND SID = ?";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing DELETE statement for removing previous data" << endl;
        return false;
    }

    sqlite3_bind_int(statement, 1, userID);
    sqlite3_bind_int(statement, 2, scheduleID);

    if (sqlite3_step(statement) != SQLITE_DONE) {
        cout << "Error executing DELETE statement" << endl;
        sqlite3_finalize(statement);
        return false;
    }

    sqlite3_finalize(statement);
}

int dbManager::readUserID(const char* username) {
    sqlite3_stmt* statement;
    string query = "SELECT UID from Users where Username = ?";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for reading User ID" << endl;
        return -1;
    }

    sqlite3_bind_text(statement, 1, username, -1, SQLITE_STATIC);

    // Store userID data
    int id = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
       id = sqlite3_column_int(statement, 0);
    }
    else {
        cout << "No Users found with the specified username: " << username << endl;
    }

    sqlite3_finalize(statement);
    return id;
}

int dbManager::getCurrentSID(int userID) {
    sqlite3_stmt* statement;
    string query = "SELECT MAX(SID) from Schedules where UID = (?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for reading Schedule ID from Schedules Table" << endl;
        return -1;
    }

    sqlite3_bind_int(statement, 1, userID);

    // Store userID data
    int id = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
        id = sqlite3_column_int(statement, 0);
    }

    sqlite3_finalize(statement);
    return id;
}

int dbManager::getAppliancePower(int applianceID) {
    sqlite3_stmt* statement;
    string query = "SELECT (Power) from Appliances where ID = (?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for reading Power from Appliance Table" << endl;
        return -1;
    }

    sqlite3_bind_int(statement, 1, applianceID);

    // Store applianceID data
    int id = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
        id = sqlite3_column_int(statement, 0);
    }
    else {
        return 0;
    }

    sqlite3_finalize(statement);
    return id;
}

void dbManager::getScheduleGenData(int userID, std::vector<std::tuple<int, int, int, float,int>>& appliances) {
    sqlite3_stmt* statement = nullptr;
    int currentScheduleID = getCurrentSID(userID);


    // Prepare and execute SQL query to fetch appliance data
    const char* applianceQuery = "SELECT offsetId, QUANTITY, Duration, PRIORITY FROM SelectedAppliances where UID = ? AND SID = ?";
    if (sqlite3_prepare_v2(db, applianceQuery, -1, &statement, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare query for gathering schedule generation data: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    sqlite3_bind_int(statement, 1, userID); 
    sqlite3_bind_int(statement, 2, currentScheduleID); 

    // Store appliance data in vector
    while (sqlite3_step(statement) == SQLITE_ROW) {
        int id = sqlite3_column_int(statement, 0);
        int quantity = sqlite3_column_int(statement, 1);
        int duration = sqlite3_column_int(statement, 2);
        int priority = sqlite3_column_int(statement, 3);
        int power = getAppliancePower(id);
        if (power != -1)
            appliances.push_back(std::make_tuple( id,quantity, duration, power, priority));
    }

    sqlite3_finalize(statement);
}

int dbManager::getTargetUnits(int userID) {
    sqlite3_stmt* statement;
    string query = "SELECT (targetUnits) from PowerDetails where UID = (?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for reading targetUnits from PowerDetails Table" << endl;
        return -1;
    }

    sqlite3_bind_int(statement, 1, userID);

    // Store targetUnits data
    int units = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
        units = sqlite3_column_int(statement, 0);
    }
    else {
        return 0;
    }

    sqlite3_finalize(statement);
    return units;
}

int dbManager::getPeakHoursStart(int userID) {
    sqlite3_stmt* statement;
    string query = "SELECT (PeakHourStart) from Users where UID = (?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for reading peakHoursStart from Users Table" << endl;
        return -1;
    }

    sqlite3_bind_int(statement, 1, userID);

    // Store peakHoursStart data
    int peakHoursStart = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
        peakHoursStart = sqlite3_column_int(statement, 0);
    }
    else {
        return 0;
    }

    sqlite3_finalize(statement);
    return peakHoursStart;
}

int dbManager::getPeakHoursEnd(int userID) {
    sqlite3_stmt* statement;
    string query = "SELECT (PeakHourEnd) from Users where UID = (?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for reading peakHoursEnd from Users Table" << endl;
        return -1;
    }

    sqlite3_bind_int(statement, 1, userID);

    // Store peakHoursStart data
    int peakHoursEnd = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
        peakHoursEnd = sqlite3_column_int(statement, 0);
    }
    else {
        return 0;
    }

    sqlite3_finalize(statement);
    return peakHoursEnd;
}

int dbManager::getApplianceID(const char* applianceName) {
    sqlite3_stmt* statement;
    string query = "SELECT (ID) from Appliances where Name = (?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for reading appliance ID from Appliance Table" << endl;
        return -1;
    }

    sqlite3_bind_text(statement, 1, applianceName, -1, SQLITE_STATIC);

    // Store ApplianceID data
    int applianceID = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
        applianceID = sqlite3_column_int(statement, 0);
    }
    else {
        return -1;
    }

    sqlite3_finalize(statement);
    return applianceID;
}

const char* dbManager::getApplianceName(int applianceId,System::String^& str) {
    sqlite3_stmt* statement;


    string query = "SELECT APPLIANCENAME FROM SelectedAppliances WHERE offsetId = ?";  // Query to select Name based on ID

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement: " << sqlite3_errmsg(db) << endl;  // Log any error
        return nullptr;
    }

    sqlite3_bind_int(statement, 1, applianceId);  // Bind the applianceId to the first parameter (index 1)

    const char* name = nullptr;
    
    if (sqlite3_step(statement) == SQLITE_ROW) {
        name = reinterpret_cast<const char*>(sqlite3_column_text(statement, 0));
        str = msclr::interop::marshal_as<System::String^>(name);
    }
    else {
        cout << "No appliance found with offsetId: " << applianceId << endl;  // Handle case where no row is returned
    }

    sqlite3_finalize(statement);

    return name;  // Return the appliance name or nullptr if not found
}

int dbManager::getApplianceCount(int userID) {
    sqlite3_stmt* statement = nullptr;
    int currentScheduleID = getCurrentSID(userID);


    // Prepare and execute SQL query to fetch appliance data
    const char* applianceQuery = "SELECT COUNT(*) FROM SelectedAppliances where UID = ? AND SID = ?";
    if (sqlite3_prepare_v2(db, applianceQuery, -1, &statement, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare query for gathering appliance count data: " << sqlite3_errmsg(db) << std::endl;
        return -1;
    }

    sqlite3_bind_int(statement, 1, userID);
    sqlite3_bind_int(statement, 2, currentScheduleID);

    // Store appliance Count data
    int applianceCount = -1;
    if (sqlite3_step(statement) == SQLITE_ROW) {
        applianceCount = sqlite3_column_int(statement, 0);
    }
    else {
        return -1;
    }

    sqlite3_finalize(statement);
    return applianceCount;
}


std::vector<std::string> dbManager::getApplianceNamesWithDuplicateAID() {
    sqlite3_stmt* statement = nullptr;
    std::vector<std::string> applianceNames;

    // SQL query to find duplicate AIDs and get their corresponding appliance names
    const char* query = R"(
        SELECT APPLIANCENAME 
        FROM SelectedAppliances 
        WHERE AID IN (
            SELECT AID 
            FROM SelectedAppliances 
            GROUP BY AID 
            HAVING COUNT(AID) > 1
        )
    )";

    if (sqlite3_prepare_v2(db, query, -1, &statement, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare query for finding duplicate AIDs: " << sqlite3_errmsg(db) << std::endl;
        return applianceNames;
    }

    // Iterate through rows and store appliance names in the vector
    while (sqlite3_step(statement) == SQLITE_ROW) {
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(statement, 0));
        if (name) {
            applianceNames.push_back(std::string(name));
        }
    }

    sqlite3_finalize(statement);

    return applianceNames;
}

void dbManager::updateDuration(const char* applianceName, int newDuration) {
    sqlite3_stmt* statement = nullptr;

    // SQL query to update the duration of the appliance with the given name
    const char* updateQuery = "UPDATE SelectedAppliances SET Duration = ? WHERE APPLIANCENAME = ?";

    // Prepare the query
    if (sqlite3_prepare_v2(db, updateQuery, -1, &statement, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare update query: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    // Bind the new duration and appliance name to the query
    sqlite3_bind_int(statement, 1, newDuration); // Bind the new duration
    sqlite3_bind_text(statement, 2, applianceName, -1, SQLITE_STATIC); // Bind the appliance name

    // Execute the query to update the record
    if (sqlite3_step(statement) != SQLITE_DONE) {
        std::cerr << "Failed to execute update query: " << sqlite3_errmsg(db) << std::endl;
    }
    else {
        std::cout << "Updated duration for appliance: " << applianceName << " to " << newDuration << " hours." << std::endl;
    }

    // Finalize the statement to clean up
    sqlite3_finalize(statement);
}


