#include "HomeForm.h"
#include "ApplianceFrom.h"
#include"User .h"
using namespace System;
using namespace System::Windows::Forms;
  // Specifies the COM threading model as single-threaded apartment

void main()
{
	dbManager db;
	db.open("test.db");

	db.createUsersTable();
	User currentUser("Admin", "Password");
	db.addUser(currentUser.username, currentUser.password, 3, 20, "Single");
	int userID = db.readUserID(currentUser.username);

    // Enable visual styles for the application
    Application::EnableVisualStyles();

    // Set compatible text rendering for legacy Windows Forms controls
    Application::SetCompatibleTextRenderingDefault(false);

    sem3::HomeForm form(userID);
    Application::Run(% form);


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

	db.createScheduleTable();
	//db.addSchedule(1, "Daily", 200);
	//db.addSchedule(1, "Weekly", 342);
	//db.addSchedule(1, "Daily", 142);


	db.createPowerTable();
	db.addPowerDetail(1, 300, 150, 1500);
	db.addPowerDetail(2, 400, 230, 10000);
	db.addPowerDetail(3, 1200, 200, 100);
	
	db.createSelectedAppliacesTable();

	db.close();
}