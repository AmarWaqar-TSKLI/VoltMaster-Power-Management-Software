#include "HomeForm.h"
#include "ApplianceFrom.h"
#include"User .h"
using namespace System;
using namespace System::Windows::Forms;
  // Specifies the COM threading model as single-threaded apartment

User currentUser("Admin", "Password");
void main()
{
    // Enable visual styles for the application
    Application::EnableVisualStyles();

    // Set compatible text rendering for legacy Windows Forms controls
    Application::SetCompatibleTextRenderingDefault(false);

    sem3::HomeForm form;
    Application::Run(% form);

	dbManager db;
	db.open("test.db");

	db.createApplianceListTable();
	db.addApplianceToList("Fridge", 450);
	db.addApplianceToList("AC", 350);
	db.addApplianceToList("TV", 150);
	db.addApplianceToList("Charger", 50);
	db.addApplianceToList("Computer", 10);
	db.addApplianceToList("Computer", 100);
	db.addApplianceToList("Washing Machine", 1200);
	db.addApplianceToList("Microwave", 800);
	db.addApplianceToList("Dishwasher", 1000);
	db.addApplianceToList("Refrigerator", 600);
	db.addApplianceToList("Water Heater", 300);
	db.addApplianceToList("Heater", 200);
	db.addApplianceToList("Electric Oven", 1000);
	db.addApplianceToList("Coffee Maker", 100);
	db.addApplianceToList("Blender", 150);
	db.addApplianceToList("Toaster", 75);
	db.addApplianceToList("Iron", 100);
	db.addApplianceToList("Hair Dryer", 150);
	db.addApplianceToList("Electric Kettle", 150);
	db.addApplianceToList("Electric Fan", 75);
	db.addApplianceToList("Vacuum Cleaner", 1200);
	db.addApplianceToList("Air Purifier", 250);
	db.addApplianceToList("Dehumidifier", 350);
	db.addApplianceToList("Space Heater", 500);
	db.addApplianceToList("Stand Mixer", 300);
	db.addApplianceToList("Food Processor", 250);


	db.createUsersTable();
	/*db.addUser("Arham", "1234", 13, 20, "Double");
	db.addUser("Ali", "1234", 11, 22, "Single");
	db.addUser("Haseeb", "Haseeb1234", 17, 19, "Triple");*/
	db.addUser(currentUser.username, currentUser.password,6,12,"Single");

	db.createScheduleTable();
	db.addSchedule(1, "Daily", 200);
	db.addSchedule(2, "Weekly", 342);
	db.addSchedule(3, "Daily", 142);


	db.createPowerTable();
	db.addPowerDetail(1, 300, 150, 1500);
	db.addPowerDetail(2, 400, 230, 10000);
	db.addPowerDetail(3, 1200, 200, 100);
	/*std::vector<std::pair<int, std::string>> appliances;
	db.readApplianceData(db, appliances);
	for (const auto& appliance : appliances) {
		std::cout << "ID: " << appliance.first << ", Name: " << appliance.second << std::endl;
	}
	form.setApplianceData(appliances)*/;


	db.createSelectedAppliacesTable();


	db.close();

	
}