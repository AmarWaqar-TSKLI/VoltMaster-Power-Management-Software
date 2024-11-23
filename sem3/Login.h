#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include "db.h"
namespace sem3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		dbManager& db; // Reference to the database manager
	private: System::Windows::Forms::Panel^ SIGNUP_PANEL;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Button^ SIGN_UP_BTN;

	private: System::Windows::Forms::TextBox^ P2_TB;

	private: System::Windows::Forms::TextBox^ P1_TB;

	private: System::Windows::Forms::TextBox^ UNAME_TB;

	private: System::Windows::Forms::Label^ PASS2;
	private: System::Windows::Forms::Label^ PASS1;
	private: System::Windows::Forms::Label^ UserName;
	private: System::Windows::Forms::Label^ label3;
	public:
		int loggedInUserID; // Store the authenticated user's ID
		//Login(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}
		Login(dbManager& dbManager) : db(dbManager) 
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LOG;
	protected:

	private: System::Windows::Forms::TextBox^ L_NAME;

	private: System::Windows::Forms::TextBox^ L_PASS;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LOG = (gcnew System::Windows::Forms::Button());
			this->L_NAME = (gcnew System::Windows::Forms::TextBox());
			this->L_PASS = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SIGNUP_PANEL = (gcnew System::Windows::Forms::Panel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->SIGN_UP_BTN = (gcnew System::Windows::Forms::Button());
			this->P2_TB = (gcnew System::Windows::Forms::TextBox());
			this->P1_TB = (gcnew System::Windows::Forms::TextBox());
			this->UNAME_TB = (gcnew System::Windows::Forms::TextBox());
			this->PASS2 = (gcnew System::Windows::Forms::Label());
			this->PASS1 = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SIGNUP_PANEL->SuspendLayout();
			this->SuspendLayout();
			// 
			// LOG
			// 
			this->LOG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOG->Location = System::Drawing::Point(340, 264);
			this->LOG->Name = L"LOG";
			this->LOG->Size = System::Drawing::Size(91, 28);
			this->LOG->TabIndex = 0;
			this->LOG->Text = L"Log-in";
			this->LOG->UseVisualStyleBackColor = true;
			this->LOG->Click += gcnew System::EventHandler(this, &Login::LOG_Click);
			// 
			// L_NAME
			// 
			this->L_NAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_NAME->Location = System::Drawing::Point(198, 135);
			this->L_NAME->Name = L"L_NAME";
			this->L_NAME->Size = System::Drawing::Size(233, 26);
			this->L_NAME->TabIndex = 2;
			// 
			// L_PASS
			// 
			this->L_PASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_PASS->Location = System::Drawing::Point(198, 189);
			this->L_PASS->Name = L"L_PASS";
			this->L_PASS->Size = System::Drawing::Size(233, 26);
			this->L_PASS->TabIndex = 3;
			this->L_PASS->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"User-Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(86, 268);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(140, 18);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Create new account";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// SIGNUP_PANEL
			// 
			this->SIGNUP_PANEL->Controls->Add(this->linkLabel2);
			this->SIGNUP_PANEL->Controls->Add(this->SIGN_UP_BTN);
			this->SIGNUP_PANEL->Controls->Add(this->P2_TB);
			this->SIGNUP_PANEL->Controls->Add(this->P1_TB);
			this->SIGNUP_PANEL->Controls->Add(this->UNAME_TB);
			this->SIGNUP_PANEL->Controls->Add(this->PASS2);
			this->SIGNUP_PANEL->Controls->Add(this->PASS1);
			this->SIGNUP_PANEL->Controls->Add(this->UserName);
			this->SIGNUP_PANEL->Controls->Add(this->label3);
			this->SIGNUP_PANEL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SIGNUP_PANEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SIGNUP_PANEL->Location = System::Drawing::Point(0, 0);
			this->SIGNUP_PANEL->Name = L"SIGNUP_PANEL";
			this->SIGNUP_PANEL->Size = System::Drawing::Size(955, 511);
			this->SIGNUP_PANEL->TabIndex = 7;
			this->SIGNUP_PANEL->Visible = false;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(324, 389);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(47, 20);
			this->linkLabel2->TabIndex = 8;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"log-in";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel2_LinkClicked);
			// 
			// SIGN_UP_BTN
			// 
			this->SIGN_UP_BTN->Location = System::Drawing::Point(469, 384);
			this->SIGN_UP_BTN->Name = L"SIGN_UP_BTN";
			this->SIGN_UP_BTN->Size = System::Drawing::Size(82, 30);
			this->SIGN_UP_BTN->TabIndex = 7;
			this->SIGN_UP_BTN->Text = L"Sign-up";
			this->SIGN_UP_BTN->UseVisualStyleBackColor = true;
			this->SIGN_UP_BTN->Click += gcnew System::EventHandler(this, &Login::SIGN_UP_BTN_Click);
			// 
			// P2_TB
			// 
			this->P2_TB->Location = System::Drawing::Point(327, 298);
			this->P2_TB->Name = L"P2_TB";
			this->P2_TB->Size = System::Drawing::Size(224, 26);
			this->P2_TB->TabIndex = 6;
			this->P2_TB->UseSystemPasswordChar = true;
			// 
			// P1_TB
			// 
			this->P1_TB->Location = System::Drawing::Point(327, 231);
			this->P1_TB->Name = L"P1_TB";
			this->P1_TB->Size = System::Drawing::Size(224, 26);
			this->P1_TB->TabIndex = 5;
			this->P1_TB->UseSystemPasswordChar = true;
			// 
			// UNAME_TB
			// 
			this->UNAME_TB->Location = System::Drawing::Point(327, 157);
			this->UNAME_TB->Name = L"UNAME_TB";
			this->UNAME_TB->Size = System::Drawing::Size(224, 26);
			this->UNAME_TB->TabIndex = 4;
			// 
			// PASS2
			// 
			this->PASS2->AutoSize = true;
			this->PASS2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PASS2->Location = System::Drawing::Point(152, 302);
			this->PASS2->Name = L"PASS2";
			this->PASS2->Size = System::Drawing::Size(137, 20);
			this->PASS2->TabIndex = 3;
			this->PASS2->Text = L"Confirm Password";
			// 
			// PASS1
			// 
			this->PASS1->AutoSize = true;
			this->PASS1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PASS1->Location = System::Drawing::Point(152, 231);
			this->PASS1->Name = L"PASS1";
			this->PASS1->Size = System::Drawing::Size(78, 20);
			this->PASS1->TabIndex = 2;
			this->PASS1->Text = L"Password";
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->Location = System::Drawing::Point(152, 158);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(106, 20);
			this->UserName->TabIndex = 1;
			this->UserName->Text = L"USER-NAME";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(430, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Sign Up";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 511);
			this->Controls->Add(this->SIGNUP_PANEL);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->L_PASS);
			this->Controls->Add(this->L_NAME);
			this->Controls->Add(this->LOG);
			this->Name = L"Login";
			this->Text = L"Login";
			this->SIGNUP_PANEL->ResumeLayout(false);
			this->SIGNUP_PANEL->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	public:// Method to retrieve the authenticated user ID
		int getLoggedInUserID()
		{
			return loggedInUserID;
		}
	private: System::Void LOG_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get input from textboxes
		String^ username = L_NAME->Text;
		String^ password = L_PASS->Text;

		// Convert System::String to std::string
		std::string uname = msclr::interop::marshal_as<std::string>(username);
		std::string pass = msclr::interop::marshal_as<std::string>(password);
		dbManager db;
		db.open("test.db");
		if (db.authenticateUser(uname, pass))
		{
			loggedInUserID = db.readUserID(uname.c_str()); // Get the user's ID
			this->DialogResult = System::Windows::Forms::DialogResult::OK; // Notify successful login
			this->Close(); // Close the LoginForm
		}
		else
		{
			MessageBox::Show("Incorrect username or password");
		}
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	SIGNUP_PANEL->Visible = true;
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	SIGNUP_PANEL->Visible = false;
}

private: System::Void SIGN_UP_BTN_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Retrieve input from textboxes
	String^ username = UNAME_TB->Text;
	String^ password = P1_TB->Text;
	String^ confirmPassword = P2_TB->Text;

	// Check if all fields are filled
	if (String::IsNullOrWhiteSpace(username) || String::IsNullOrWhiteSpace(password) || String::IsNullOrWhiteSpace(confirmPassword)) {
		MessageBox::Show("All fields are required. Please fill in all entries.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check if the password is at least 8 characters long
	if (password->Length < 8) {
		MessageBox::Show("Password must be at least 8 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check if the passwords match
	if (!password->Equals(confirmPassword)) {
		MessageBox::Show("Passwords do not match. Please re-enter your passwords.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// If all conditions are satisfied, show success message
	MessageBox::Show("Registration Successfull!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	dbManager db;
	db.open("test.db");
	db.createUsersTable();
	std::string uname = msclr::interop::marshal_as<std::string>(username);
	std::string pass = msclr::interop::marshal_as<std::string>(password);
	db.addUser(uname.c_str(), pass.c_str(), 3, 9, "single");

}

};
}
