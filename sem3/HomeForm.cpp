#include "HomeForm.h"
#include "Login.h"
#include "User .h"
#include "Admin.h"
using namespace System;
using namespace System::Windows::Forms;

void main() 
{
    // Enable visual styles for the application
    Application::EnableVisualStyles();

    // Set compatible text rendering for legacy Windows Forms controls
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of the database manager
    dbManager db;
    db.open("test.db");

    // Create the LoginForm
    sem3::Login^ loginForm = gcnew sem3::Login(db);

    // Show the LoginForm as a modal dialog
    if (loginForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        // Initialize the database (if needed)
        db.createApplianceListTable();
    /*    db.addApplianceToList("Fridge", 450);
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
        db.addApplianceToList("Food Processor", 250);*/
        db.createScheduleTable();
        db.createPowerTable();
        db.createApplianceChangedTable();
        if (db.isApplianceChangedTableEmpty()) {
            db.insertApplianceChanged();
        }
        db.addPowerDetail(1, 300, 150, 1500);
        db.addPowerDetail(2, 400, 230, 10000);
        db.addPowerDetail(3, 1200, 200, 100);
        db.createSelectedAppliacesTable();
        db.createAdminTable();
        db.addAdmin("admin", "admin");


        if (!loginForm->getIsAdmin()) {
            // Retrieve the authenticated user's ID from the LoginForm
            int userID = loginForm->getLoggedInUserID();
            sem3::HomeForm^ homeForm = gcnew sem3::HomeForm(userID);
            Application::Run(homeForm);
        }
        else {
            int adminID = loginForm->getLoggedInAdminID();
            sem3::Admin^ adminForm = gcnew sem3::Admin(adminID);
            Application::Run(adminForm);
        }
    }
    // Close the database connection
    db.close();
}
