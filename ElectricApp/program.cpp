
#include "LoginForm.h"
#include "Dashboard.h"
#include "RegisterForm.h"
#include "inputForm.h"


using namespace System;

using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    //initialize application
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create and show the login form
    

    // Retrieve the authenticated user

   /* ElectricApp::inputForm input_Form;
    input_Form.ShowDialog();*/

    

    User^ user = nullptr;
    while (true)
    {
        ElectricApp::LoginForm loginForm;
        loginForm.ShowDialog();
        if (loginForm.switchToRegister)
        {
            ElectricApp::RegisterForm registerForm;
            registerForm.ShowDialog();
            if (registerForm.switchToLogin)
            {
                continue;
            }
            else
            {
                user = registerForm.user;
                break;
            }
        }
        else
        {
            user = loginForm.user;
            break;
        }
       
    }

  

    if (user != nullptr)
    {
      
        ElectricApp::Dashboard dashboardForm;
       /* dashboardForm.StartPosition = FormStartPosition::Manual;
        dashboardForm.Location = loginForm.Location;*/
        Application::Run(% dashboardForm);
    }
    else
    {
        // Authentication canceled
        MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
        Application::Exit();
    }
}
