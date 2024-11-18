#include "sqlite3.h"
#include <iostream>
#include "db.h"
#include<string>
#include<vector>
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
        "SID INTEGER PRIMARY KEY AUTOINCREMENT, "
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

    string query = "INSERT INTO Schedules (UID, Type, UnitsSaved) VALUES (?,?, ?)";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr) != SQLITE_OK) {
        cout << "Error preparing statement for Adding schedule" << endl;
        return false;
    }

    sqlite3_bind_int(statement, 1, userID);
    sqlite3_bind_text(statement, 2, type, -1, SQLITE_STATIC);
    sqlite3_bind_int(statement, 3, unitsSaved);

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

   // string query = "DELETE FROM Users";
   string query = "INSERT INTO Users (Username, Password, PeakHourStart, PeakHourEnd, meterPhaseType) VALUES (?,?,?,?,?)";

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
        "UID INTEGER NOT NULL, "
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

    string query = "INSERT INTO PowerDetails (UID, targetUnits, consumedUnits, estimatedBill) VALUES (?,?,?,?)";

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

void dbManager::readApplianceData(dbManager& db, std::vector<std::pair<int, std::string>>& appliances) {
    sqlite3* database = nullptr;
    sqlite3_stmt* statement = nullptr;

    // Open the database
    if (sqlite3_open("test.db", &database) != SQLITE_OK) {
        std::cerr << "Failed to open the database: " << sqlite3_errmsg(database) << std::endl;
        return;
    }

    // Prepare and execute SQL query to fetch appliance data
    const char* applianceQuery = "SELECT ID, Name FROM Appliances";
    if (sqlite3_prepare_v2(database, applianceQuery, -1, &statement, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare appliance query: " << sqlite3_errmsg(database) << std::endl;
        sqlite3_close(database);
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

    // Finalize and close
    sqlite3_finalize(statement);
    sqlite3_close(database);
}
bool dbManager::addselectedAppliances(int userID, int scheduleID, int applianceID, const char* applianceName, int priority, int quantity)
{
    sqlite3_stmt* statement;

    string query = "INSERT INTO SelectedAppliances (UID, SID,AID,APPLIANCENAME,PRIORITY,QUANTITY) VALUES (?,?,?,?,?,?) ";

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
bool dbManager::createSelectedAppliacesTable()
{
    string query = "CREATE TABLE IF NOT EXISTS SelectedAppliances ("
        "UID INTEGER NOT NULL, "
        "SID INTEGER NOT NULL, "
        "AID INTEGER NOT NULL,"
        "APPLIANCENAME TEXT NOT NULL,"
        "PRIORITY INTEGER NOT NULL,"
        "QUANTITY INTEGER NOT NULL,"
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