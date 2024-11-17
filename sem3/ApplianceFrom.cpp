//#include "HomeForm.h"

//#include "ApplianceFrom.h"
//#include "db.h"
//#include<iostream>
//#include<vector>
//using namespace System;
//using namespace System::Windows::Forms;
//[STAThreadAttribute]
//int main(array<String^>^ args) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	sem3::ApplianceFrom form;
//	Application::Run(% form);
//
//	dbManager db;
//	db.open("test.db");
//
//	db.createApplianceListTable();
//	db.addApplianceToList("Fridge", 450);
//	db.addApplianceToList("AC", 350);
//	db.addApplianceToList("TV", 150);
//	db.addApplianceToList("Charger", 50);
//	db.addApplianceToList("Computer", 10);
//	db.addApplianceToList("Computer", 100);
//
//	db.createUsersTable();
//	db.addUser("Arham", "1234", 13, 20, "Double");
//	db.addUser("Ali", "1234", 11, 22, "Single");
//	db.addUser("Haseeb", "Haseeb1234", 17, 19, "Triple");
//
//	db.createScheduleTable();
//	db.addSchedule(1, "Daily", 200);
//	db.addSchedule(2, "Weekly", 342);
//	db.addSchedule(3, "Daily", 142);
//
//
//	db.createPowerTable();
//	db.addPowerDetail(1, 300, 150, 1500);
//	db.addPowerDetail(2, 400, 230, 10000);
//	db.addPowerDetail(3, 1200, 200, 100);
//	/*std::vector<std::pair<int, std::string>> appliances;
//	db.readApplianceData(db, appliances);
//	for (const auto& appliance : appliances) {
//		std::cout << "ID: " << appliance.first << ", Name: " << appliance.second << std::endl;
//	}
//	form.setApplianceData(appliances)*/;
//	db.close();
//}