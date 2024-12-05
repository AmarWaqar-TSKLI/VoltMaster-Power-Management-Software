#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include "db.h"
#include "nav.h"
#include "Admin.h"

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
	private: System::Windows::Forms::Panel^ SIGNUP_PANEL;

	private: System::Windows::Forms::Button^ SIGN_UP_BTN;

	private: System::Windows::Forms::TextBox^ P2_TB;

	private: System::Windows::Forms::TextBox^ P1_TB;

	private: System::Windows::Forms::TextBox^ UNAME_TB;








	private: System::Windows::Forms::Button^ linkLabel1;
	private: System::Windows::Forms::Button^ linklabel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;


	public:
		int loggedInUserID; // Store the authenticated user's ID
		int loggedInAdminID;
		//Login(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}
		Login() 
		{
			InitializeComponent();

			dbManager db;
			db.open("test.db");
			db.initialize();
			db.close();
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->LOG = (gcnew System::Windows::Forms::Button());
			this->L_NAME = (gcnew System::Windows::Forms::TextBox());
			this->L_PASS = (gcnew System::Windows::Forms::TextBox());
			this->SIGNUP_PANEL = (gcnew System::Windows::Forms::Panel());
			this->linklabel2 = (gcnew System::Windows::Forms::Button());
			this->SIGN_UP_BTN = (gcnew System::Windows::Forms::Button());
			this->P2_TB = (gcnew System::Windows::Forms::TextBox());
			this->P1_TB = (gcnew System::Windows::Forms::TextBox());
			this->UNAME_TB = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SIGNUP_PANEL->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LOG
			// 
			this->LOG->BackColor = System::Drawing::Color::Transparent;
			this->LOG->FlatAppearance->BorderSize = 0;
			this->LOG->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->LOG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->LOG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LOG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOG->Location = System::Drawing::Point(819, 577);
			this->LOG->Name = L"LOG";
			this->LOG->Size = System::Drawing::Size(348, 43);
			this->LOG->TabIndex = 0;
			this->LOG->UseVisualStyleBackColor = false;
			this->LOG->Click += gcnew System::EventHandler(this, &Login::LOG_Click);
			// 
			// L_NAME
			// 
			this->L_NAME->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->L_NAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_NAME->Location = System::Drawing::Point(827, 366);
			this->L_NAME->Name = L"L_NAME";
			this->L_NAME->Size = System::Drawing::Size(330, 25);
			this->L_NAME->TabIndex = 2;
			// 
			// L_PASS
			// 
			this->L_PASS->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->L_PASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_PASS->Location = System::Drawing::Point(827, 464);
			this->L_PASS->Name = L"L_PASS";
			this->L_PASS->Size = System::Drawing::Size(330, 25);
			this->L_PASS->TabIndex = 3;
			this->L_PASS->UseSystemPasswordChar = true;
			// 
			// SIGNUP_PANEL
			// 
			this->SIGNUP_PANEL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SIGNUP_PANEL.BackgroundImage")));
			this->SIGNUP_PANEL->Controls->Add(this->panel1);
			this->SIGNUP_PANEL->Controls->Add(this->linklabel2);
			this->SIGNUP_PANEL->Controls->Add(this->SIGN_UP_BTN);
			this->SIGNUP_PANEL->Controls->Add(this->P2_TB);
			this->SIGNUP_PANEL->Controls->Add(this->P1_TB);
			this->SIGNUP_PANEL->Controls->Add(this->UNAME_TB);
			this->SIGNUP_PANEL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SIGNUP_PANEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SIGNUP_PANEL->Location = System::Drawing::Point(0, 0);
			this->SIGNUP_PANEL->Name = L"SIGNUP_PANEL";
			this->SIGNUP_PANEL->Size = System::Drawing::Size(1424, 881);
			this->SIGNUP_PANEL->TabIndex = 7;
			this->SIGNUP_PANEL->Visible = false;
			// 
			// linklabel2
			// 
			this->linklabel2->BackColor = System::Drawing::Color::Transparent;
			this->linklabel2->FlatAppearance->BorderSize = 0;
			this->linklabel2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->linklabel2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->linklabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->linklabel2->Location = System::Drawing::Point(1352, 849);
			this->linklabel2->Name = L"linklabel2";
			this->linklabel2->Size = System::Drawing::Size(60, 19);
			this->linklabel2->TabIndex = 8;
			this->linklabel2->UseVisualStyleBackColor = false;
			this->linklabel2->Click += gcnew System::EventHandler(this, &Login::linklabel2_Click);
			// 
			// SIGN_UP_BTN
			// 
			this->SIGN_UP_BTN->BackColor = System::Drawing::Color::Transparent;
			this->SIGN_UP_BTN->FlatAppearance->BorderSize = 0;
			this->SIGN_UP_BTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->SIGN_UP_BTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->SIGN_UP_BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SIGN_UP_BTN->Location = System::Drawing::Point(848, 626);
			this->SIGN_UP_BTN->Name = L"SIGN_UP_BTN";
			this->SIGN_UP_BTN->Size = System::Drawing::Size(340, 44);
			this->SIGN_UP_BTN->TabIndex = 7;
			this->SIGN_UP_BTN->UseVisualStyleBackColor = false;
			this->SIGN_UP_BTN->Click += gcnew System::EventHandler(this, &Login::SIGN_UP_BTN_Click);
			// 
			// P2_TB
			// 
			this->P2_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->P2_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_TB->Location = System::Drawing::Point(861, 528);
			this->P2_TB->Name = L"P2_TB";
			this->P2_TB->Size = System::Drawing::Size(326, 25);
			this->P2_TB->TabIndex = 6;
			this->P2_TB->UseSystemPasswordChar = true;
			// 
			// P1_TB
			// 
			this->P1_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->P1_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_TB->Location = System::Drawing::Point(861, 432);
			this->P1_TB->Name = L"P1_TB";
			this->P1_TB->Size = System::Drawing::Size(326, 25);
			this->P1_TB->TabIndex = 5;
			this->P1_TB->UseSystemPasswordChar = true;
			// 
			// UNAME_TB
			// 
			this->UNAME_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UNAME_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UNAME_TB->Location = System::Drawing::Point(862, 337);
			this->UNAME_TB->Name = L"UNAME_TB";
			this->UNAME_TB->Size = System::Drawing::Size(326, 25);
			this->UNAME_TB->TabIndex = 4;
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->FlatAppearance->BorderSize = 0;
			this->linkLabel1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->linkLabel1->Location = System::Drawing::Point(1329, 846);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(84, 23);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->UseVisualStyleBackColor = false;
			this->linkLabel1->Click += gcnew System::EventHandler(this, &Login::linkLabel1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(565, 849);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 23);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1424, 881);
			this->panel1->TabIndex = 10;
			this->panel1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(831, 463);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(326, 25);
			this->textBox2->TabIndex = 12;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(823, 576);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(340, 44);
			this->button3->TabIndex = 11;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(831, 366);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(326, 25);
			this->textBox1->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1352, 846);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 23);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 881);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SIGNUP_PANEL);
			this->Controls->Add(this->L_PASS);
			this->Controls->Add(this->L_NAME);
			this->Controls->Add(this->LOG);
			this->Controls->Add(this->linkLabel1);
			this->MaximumSize = System::Drawing::Size(1440, 940);
			this->MinimumSize = System::Drawing::Size(1440, 858);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->SIGNUP_PANEL->ResumeLayout(false);
			this->SIGNUP_PANEL->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	public:// Method to retrieve the authenticated user ID
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

			nav::initialize(loggedInUserID, this);

			nav::getInstance()->showHome();
			this->Hide();
		}
		else
		{
			MessageBox::Show("Incorrect username or password");
		}
		db.close();
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
	db.addUser(uname.c_str(), pass.c_str(), db.getAdminPeakHourStart(), db.getAdminPeakHourEnd(), "Single");
	db.close();
}

private: System::Void linkLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	SIGNUP_PANEL->Visible = true;
}
private: System::Void linklabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	SIGNUP_PANEL->Visible = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	SIGNUP_PANEL->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get input from textboxes
	String^ username = textBox1->Text;
	String^ password = textBox2->Text;

	// Convert System::String to std::string
	std::string uname = msclr::interop::marshal_as<std::string>(username);
	std::string pass = msclr::interop::marshal_as<std::string>(password);
	dbManager db;
	db.open("test.db");
	if (db.authenticateAdmin(uname, pass))
	{
		loggedInAdminID = db.readAdminID(uname.c_str()); // Get the user's ID
		Admin^ adminForm = gcnew Admin(loggedInAdminID, this);
		this->Hide();
		adminForm->Show();
	}
	else
	{
		MessageBox::Show("Incorrect username or password");
	}
	db.close();
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
