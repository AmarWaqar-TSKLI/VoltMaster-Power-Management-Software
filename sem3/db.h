#pragma once
#include "sqlite3.h"
#include<vector>
#include<string>
class dbManager
{
private:
	sqlite3* db;
public:
	dbManager();
	void open(const char* name);
	void close();
	bool createApplianceListTable();
	bool addApplianceToList(const char* name, int powerUsage);
	bool createScheduleTable();
	bool addSchedule(int userID, const char* type, int unitsSaved);
	bool createUsersTable();
	bool addUser(const char* username, const char* password, int peakHoursStart, int peakHoursEnd, const char* meterPhaseType);
	bool createPowerTable();
	bool addPowerDetail(int userID, int targetUnits, int consumedUnits, int estimatedBill);
	void readApplianceData(dbManager& db, std::vector<std::pair<int, std::string>>& appliances);
	bool createSelectedAppliacesTable();
	bool addselectedAppliances(int userID, int scheduleID, int applianceID, const char* applianceName, int priority, int quantity);
	bool deleteselectedappliances(int userID, int scheduleID);
};