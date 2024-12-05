#pragma once
#include "sqlite3.h"
#include<vector>
#include<string>
using namespace std;
class dbManager
{
private:
	sqlite3* db;
public:
	dbManager();
	void open(const char* name);
	void close();
	void initialize();
	bool createApplianceListTable();
	bool addApplianceToList(const char* name, int powerUsage);
	bool createScheduleTable();
	bool addSchedule(int userID, const char* type, int unitsSaved);
	bool createUsersTable();
	bool addUser(const char* username, const char* password, int peakHoursStart, int peakHoursEnd, const char* meterPhaseType);
	bool createPowerTable();
	bool addPowerDetail(int userID, int targetUnits, int consumedUnits);
	void readApplianceData(std::vector<std::pair<int, std::string>>& appliances);
	bool createSelectedAppliacesTable();
	bool addselectedAppliances(int userID, int scheduleID, int applianceID, const char* applianceName, int priority, int quantity, int duration, int offsetId, int dayNumber = 0);
	bool deleteselectedappliances(int userID, int scheduleID);
	int readUserID(const char* username);
	int getCurrentSID(int userID, bool& isEmpty);
	void getScheduleGenData(int userID, std::vector<std::tuple<int, int, int, float, int>>& appliances, int dayNumber = 0);
	int getAppliancePower(int applianceID);
	int getTargetUnits(int userID);
	int getPeakHoursStart(int userID);
	int getPeakHoursEnd(int userID);
	int getApplianceID(const char* applianceName);
	const char* getApplianceName(int uid, int sid, int applianceIdOffset, System::String^& str);
	int getApplianceCount(int userID, int dayNumber = 0);
	std::vector<std::string> getApplianceNamesWithDuplicateAID(int userID, int scheduleID, int dayNumber = 0);
	void updateDuration(const char* applianceName, int newDuration);
	bool authenticateUser(const std::string& uname, const std::string& pass);
	bool insertIntoSchedules(int uid, const std::string& type, int unitsSaved, std::string date, int estimatedBill);
	void setConsumedUnits(int userID, int powerConsumed);
	int getConsumedUnits(int userID);
	bool createApplianceChangedTable();
	void setApplianceChanged(int value);
	int getApplianceChanged();
	void insertApplianceChanged();
	bool isApplianceChangedTableEmpty();
	void getScheduleTypeAndSavedUnits(int userId, int sid, int& unitsSaved, std::string& type);
	void getScheduleGenDataForHistory(int userID, int sid, std::vector<std::tuple<int, int, int, float, int>>& appliances);
	int getApplianceCountForHistory(int userId, int sid);
	std::string getScheduleDate(int uid, int sid);
	void setPeakHoursStart(int userID, int peakHoursStart);
	void setPeakHoursEnd(int userID, int peakHoursEnd);
	void setMeterPhaseType(int userID, std::string meterPhase);
	std::string getMeterPhaseType(int userID);
	void setTargetUnits(int userID, int targetUnits);
	void createAdminTable();
	void addAdmin(const char* username, const char* password);
	int getSingleMeterPrice();
	int getTripleMeterPrice();
	void setSingleMeterPrice(int singlePrice);
	void setTripleMeterPrice(int triplePrice);
	bool authenticateAdmin(const std::string& uname, const std::string& pass);
	int getAdminPeakHourStart();
	int getAdminPeakHourEnd();
	void setAdminPeakHourStart(int peakHourStart);
	void setAdminPeakHourEnd(int peakHourEnd);
	int readAdminID(const char* username);
	void getpeakhoursandmeter(int uid, int& start, int& end, string& meter);
	std::string* getAllApplianceNames(int& size);
	void deleteAppliance(const char* appliance);
	int getEstimatedBill(int userID, int SID);
	
};