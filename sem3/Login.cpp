#include "HomeForm.h"
#include "Login.h"
#include "Admin.h"
using namespace System;
using namespace System::Windows::Forms;

void main()
{
    // Enable visual styles for the application
    Application::EnableVisualStyles();

    // Set compatible text rendering for legacy Windows Forms controls
    Application::SetCompatibleTextRenderingDefault(false);

    // Create the LoginForm
    sem3::Login^ loginForm = gcnew sem3::Login();
    Application::Run(loginForm);
}
