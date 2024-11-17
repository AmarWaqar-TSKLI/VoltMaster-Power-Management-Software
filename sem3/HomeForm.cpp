#include "HomeForm.h"
#include "ApplianceFrom.h"
using namespace System;
using namespace System::Windows::Forms;
  // Specifies the COM threading model as single-threaded apartment
void main(array<String^>^ args)
{
    // Enable visual styles for the application
    Application::EnableVisualStyles();

    // Set compatible text rendering for legacy Windows Forms controls
    Application::SetCompatibleTextRenderingDefault(false);

    sem3::HomeForm form;
    Application::Run(% form);
}