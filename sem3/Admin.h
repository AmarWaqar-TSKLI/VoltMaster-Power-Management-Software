#pragma once
#include <string>
#include "db.h"
#include <msclr/marshal_cppstd.h>
#include <vector>

namespace sem3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		int adminID;
		Form^ login;
		Admin(int adminID,Form^ login)
		{
			InitializeComponent();
			this->adminID = adminID;
			panel1->Parent = this;
			panel2->Parent = this;
			panel3->Parent = this;
			panel4->Parent = this;
			this->login = login;
		}
		
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		void displayAppliances()
		{
			dbManager db;
			db.open("test.db");
			int size = 0;
			std::string* appliances = db.getAllApplianceNames(size);

			int startY = 30; // Starting Y position for TextBoxes
			int startX = 115; // X position for the first TextBox
			int verticalSpacing = 60; // Vertical space between each TextBox
			Panel^ dynamicPanel = gcnew Panel;
			dynamicPanel->Visible = true;
			dynamicPanel->Size = System::Drawing::Size(1078, 385 - 49);
			dynamicPanel->Location = System::Drawing::Point(297, 165);
			dynamicPanel->BackColor = System::Drawing::Color::FromArgb( 65,65,65); // Fully transparent color
			dynamicPanel->AutoScroll = true;
			panel3->Controls->Add(dynamicPanel);
			// Loop through applianceData to create TextBoxes for each appliance
			for (int i = 0; i < size; ++i)
			{
				// Create a Label for each appliance
				Label^ label = gcnew Label();
				label->Text = gcnew System::String(appliances[i].c_str());
				// Appliance name
				label->Location = System::Drawing::Point(startX+80, startY + (i * verticalSpacing)+20);
				label->AutoSize = true;
				label->ForeColor = System::Drawing::Color::White;
				//label->BackColor = System::Drawing::Color::Aqua;
				label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				label->Visible = true;
				dynamicPanel->Controls->Add(label);
				// Create a new PictureBox
				Button^ viewMoreBtn;
				viewMoreBtn = gcnew Button();
				viewMoreBtn->Text = "";
				viewMoreBtn->BackgroundImage = System::Drawing::Image::FromFile("Images/Appliance-Delete.png");
				viewMoreBtn->Location = System::Drawing::Point(720, startY + (i * verticalSpacing));
				viewMoreBtn->Size = System::Drawing::Size(177, 42);
				//viewMoreBtn->Font = gcnew System::Drawing::Font(sceduleTypeLabel->Font->FontFamily, 15.0f);
				//viewMoreBtn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				viewMoreBtn->Padding = System::Windows::Forms::Padding(0);
				viewMoreBtn->ForeColor = System::Drawing::Color::Transparent;
				viewMoreBtn->BackColor = System::Drawing::Color::Transparent;
				viewMoreBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				viewMoreBtn->FlatAppearance->BorderSize = 0;
				viewMoreBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				viewMoreBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				viewMoreBtn->Tag = label->Text;
				viewMoreBtn->Name = "Delete";
				viewMoreBtn->Click += gcnew System::EventHandler(this, &Admin::OnViewMoreButtonClick);

				dynamicPanel->Controls->Add(viewMoreBtn);
				
			}


			db.close();
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button30;

private: System::Windows::Forms::Label^ label6;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox8;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(54, 402);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 38);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(54, 500);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 38);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(54, 595);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 38);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Admin::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1424, 881);
			this->panel1->TabIndex = 4;
			this->panel1->Visible = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1424, 881);
			this->panel2->TabIndex = 5;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button15);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->button24);
			this->panel3->Controls->Add(this->button23);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1424, 881);
			this->panel3->TabIndex = 6;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::panel3_Paint);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->button30);
			this->panel4->Controls->Add(this->button29);
			this->panel4->Controls->Add(this->button26);
			this->panel4->Controls->Add(this->button27);
			this->panel4->Controls->Add(this->button28);
			this->panel4->Controls->Add(this->button25);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1424, 881);
			this->panel4->TabIndex = 21;
			this->panel4->Visible = false;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::panel4_Paint);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(1132, 335);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(157, 28);
			this->textBox8->TabIndex = 30;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(607, 334);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(157, 28);
			this->textBox4->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1141, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 29);
			this->label6->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(613, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 26;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Transparent;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(655, 805);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(262, 43);
			this->button30->TabIndex = 25;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Admin::button30_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Transparent;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button29->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(53, 594);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(122, 38);
			this->button29->TabIndex = 24;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Admin::button29_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(53, 501);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(122, 38);
			this->button26->TabIndex = 23;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Admin::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(47, 403);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(122, 38);
			this->button27->TabIndex = 22;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Admin::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Transparent;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(53, 314);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(110, 38);
			this->button28->TabIndex = 21;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Admin::button28_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(46, 804);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(129, 38);
			this->button25->TabIndex = 19;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Admin::button25_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(52, 500);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(122, 38);
			this->button13->TabIndex = 20;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Admin::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(46, 402);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(122, 38);
			this->button14->TabIndex = 19;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Admin::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(52, 313);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(110, 38);
			this->button15->TabIndex = 18;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Admin::button15_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(1116, 828);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(262, 42);
			this->button12->TabIndex = 17;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Admin::button12_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(587, 812);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(157, 28);
			this->textBox7->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(587, 737);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(157, 28);
			this->textBox6->TabIndex = 12;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Admin::textBox6_TextChanged);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(56, 680);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(122, 38);
			this->button24->TabIndex = 23;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Admin::button24_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(47, 807);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(129, 38);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Admin::button23_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(53, 595);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(122, 38);
			this->button8->TabIndex = 15;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Admin::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(46, 402);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(122, 38);
			this->button9->TabIndex = 14;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Admin::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(52, 313);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(110, 38);
			this->button10->TabIndex = 13;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Admin::button10_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(1132, 335);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(157, 28);
			this->textBox5->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(607, 334);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(157, 28);
			this->textBox3->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1138, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(609, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 7;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(655, 803);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(262, 42);
			this->button11->TabIndex = 16;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Admin::button11_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(53, 678);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(122, 38);
			this->button22->TabIndex = 18;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Admin::button22_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(44, 801);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(129, 38);
			this->button21->TabIndex = 17;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Admin::button21_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(949, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(347, 25);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(949, 286);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(347, 25);
			this->textBox2->TabIndex = 9;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(678, 793);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(255, 42);
			this->button6->TabIndex = 10;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Admin::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(47, 314);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 38);
			this->button7->TabIndex = 4;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Admin::button7_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(47, 501);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 38);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Admin::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(47, 583);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 51);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(47, 680);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(135, 38);
			this->button16->TabIndex = 5;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Admin::button16_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(52, 680);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(122, 38);
			this->button20->TabIndex = 13;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Admin::button20_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(46, 806);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(122, 38);
			this->button18->TabIndex = 12;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Admin::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(46, 806);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(129, 38);
			this->button17->TabIndex = 6;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Admin::button17_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Transparent;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(55, 679);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(122, 38);
			this->button19->TabIndex = 11;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Admin::button19_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 881);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button17);
			this->MaximumSize = System::Drawing::Size(1440, 930);
			this->MinimumSize = System::Drawing::Size(1440, 858);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Retrieve input from textboxes
		String^ username = textBox1->Text;
		String^ password = textBox2->Text;

		// Check if all fields are filled
		if (String::IsNullOrWhiteSpace(username) || String::IsNullOrWhiteSpace(password)) {
			MessageBox::Show("All fields are required. Please fill in all entries.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Check if the password is at least 8 characters long
		if (password->Length < 8) {
			MessageBox::Show("Password must be at least 8 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// If all conditions are satisfied, show success message
		MessageBox::Show("Registration Successfull!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		dbManager db;
		db.open("test.db");
		std::string uname = msclr::interop::marshal_as<std::string>(username);
		std::string pass = msclr::interop::marshal_as<std::string>(password);
		db.addAdmin(uname.c_str(), pass.c_str());
		db.close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
	panel3->Visible = false;
	panel4->Visible = false;

	dbManager db;
	db.open("test.db");

	int singlePrice = db.getSingleMeterPrice();
	int triplePrice = db.getTripleMeterPrice();


	String^ singlePriceStr = singlePrice.ToString();
	String^ triplePriceStr = triplePrice.ToString();

	label1->Text = singlePriceStr;
	label3->Text = triplePriceStr;
	db.close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
	panel4->Visible = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
	panel3->Visible = false;
	panel4->Visible = false;

	dbManager db;
	db.open("test.db");

	int singlePrice = db.getSingleMeterPrice();
	int triplePrice = db.getTripleMeterPrice();


	String^ singlePriceStr = singlePrice.ToString();
	String^ triplePriceStr = triplePrice.ToString();

	label1->Text = singlePriceStr;
	label3->Text = triplePriceStr;
	db.close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
	panel4->Visible = false;
	displayAppliances();
}

	   // Recursive function to remove panels and their child controls,
	   // skipping TextBox controls and only deleting buttons with Name = "Delete"
	   void RemovePanels(Control^ parent)
	   {
		   // Iterate over each child control in the parent
		   for (int i = parent->Controls->Count - 1; i >= 0; --i)
		   {
			   Control^ control = parent->Controls[i];

			   // Skip TextBox controls
			   if (control->GetType() == TextBox::typeid)
			   {
				   continue; // Skip TextBox, don't remove it
			   }

			   // If it's a button and its name is "Delete", remove it
			   if (control->GetType() == Button::typeid)
			   {
				   Button^ button = dynamic_cast<Button^>(control);
				   if (button != nullptr && button->Name == "Delete")
				   {
					   parent->Controls->RemoveAt(i); // Remove the button
					   delete button; // Delete the button (memory cleanup)
					   continue; // Skip further actions on this control
				   }
			   }

			   // If it's a panel, recursively remove its children
			   if (control->GetType() == Panel::typeid)
			   {
				   RemovePanels(control);
			   }

			   // Remove the control (panel or other)
			   parent->Controls->RemoveAt(i);
			   delete control; // Delete the control (memory cleanup)
		   }
	   }


void Admin::OnViewMoreButtonClick(System::Object^ sender, System::EventArgs^ e) {
	Button^ clickedButton = dynamic_cast<Button^>(sender);
	dbManager db;
	db.open("test.db");
	if (clickedButton != nullptr) {
			  
		String^ applianceName = clickedButton->Tag->ToString();

		// Convert to std::string for database function
		std::string applianceStdStr = msclr::interop::marshal_as<std::string>(applianceName);

		// Call the deleteAppliance function from dbManager
		db.deleteAppliance(applianceStdStr.c_str());
		MessageBox::Show("Deleted appliance: " + applianceName, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		RemovePanels(panel3);
		displayAppliances();
		// Show confirmation message
			  
	}
	db.close(); 
}

private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
	panel4->Visible = false;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
	panel3->Visible = false;
	panel4->Visible = false;
	dbManager db;
	db.open("test.db");

	int singlePrice = db.getSingleMeterPrice();
	int triplePrice = db.getTripleMeterPrice();


	String^ singlePriceStr = singlePrice.ToString();
	String^ triplePriceStr = triplePrice.ToString();

	label1->Text = singlePriceStr;
	label3->Text = triplePriceStr;
	db.close();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if text boxes are empty
	if (textBox3->Text == "" || textBox5->Text == "") {
		MessageBox::Show("Please enter all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validate singleMeterPrice (textBox3) and tripleMeterPrice (textBox5) inputs
	int singleMeterPrice, tripleMeterPrice;

	// Try parsing the values as integers
	if (!Int32::TryParse(textBox3->Text, singleMeterPrice) || !Int32::TryParse(textBox5->Text, tripleMeterPrice)) {
		MessageBox::Show("Please enter valid integer values for single and triple meter prices.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check if the values are non-negative (prices should not be negative)
	if (singleMeterPrice < 0 || tripleMeterPrice < 0) {
		MessageBox::Show("Prices must be non-negative values.", "Invalid Price", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// If everything is valid, save the values to the database
	dbManager db;
	db.open("test.db");

	db.setSingleMeterPrice(singleMeterPrice);
	db.setTripleMeterPrice(tripleMeterPrice);

	db.close();

	// Show success message
	MessageBox::Show("Successfully Saved!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if appliance name and power usage are empty
	if (textBox6->Text == "" || textBox7->Text == "") {
		MessageBox::Show("Please enter all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validate applianceName (textBox6)
	System::String^ managedString = textBox6->Text;
	std::string applianceName = msclr::interop::marshal_as<std::string>(managedString);

	// Validate powerUsage (textBox7)
	int powerUsage;
	if (!Int32::TryParse(textBox7->Text, powerUsage) || powerUsage <= 0) {
		MessageBox::Show("Please enter a valid positive integer for Power Usage.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// If everything is valid, save the appliance data
	dbManager db;
	db.open("test.db");

	db.addApplianceToList(applianceName.c_str(), powerUsage);
	RemovePanels(panel3);
	displayAppliances();

	db.close();

	// Show success message
	MessageBox::Show("Appliance added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	// register peak hours
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = true;

	dbManager db;
	db.open("test.db");

	int peakHourStart = db.getAdminPeakHourStart();
	int peakHourEnd = db.getAdminPeakHourEnd();

	label2->Text = peakHourStart.ToString();
	label6->Text = peakHourEnd.ToString();
	db.close();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	// home log out
	this->Hide();
	login->Show();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	// register peak
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = true;


	dbManager db;
	db.open("test.db");

	int peakHourStart = db.getAdminPeakHourStart();
	int peakHourEnd = db.getAdminPeakHourEnd();

	label2->Text = peakHourStart.ToString();
	label6->Text = peakHourEnd.ToString();
	db.close();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	// register log
	this->Hide();
	login->Show();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	// meter peak
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = true;

	dbManager db;
	db.open("test.db");

	int peakHourStart = db.getAdminPeakHourStart();
	int peakHourEnd = db.getAdminPeakHourEnd();

	label2->Text = peakHourStart.ToString();
	label6->Text = peakHourEnd.ToString();
	db.close();
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	// meter log
	this->Hide();
	login->Show();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	// appliances peak
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = true;

	dbManager db;
	db.open("test.db");

	int peakHourStart = db.getAdminPeakHourStart();
	int peakHourEnd = db.getAdminPeakHourEnd();

	label2->Text = peakHourStart.ToString();
	label6->Text = peakHourEnd.ToString();
	db.close();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	// appliances log
	this->Hide();
	login->Show();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	// peak home
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	// peak register
	panel1->Visible = true;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	// peak meter
	panel1->Visible = false;
	panel2->Visible = true;
	panel3->Visible = false;
	panel4->Visible = false;
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	// peak appliances
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
	panel4->Visible = false;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	// peak logout
	this->Hide();
	login->Show();
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	// Peak hour save button

	// Check if text boxes are empty
	if (textBox4->Text == "" || textBox8->Text == "") {
		MessageBox::Show("Please enter all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validate peakHourStart (textBox4) and peakHourEnd (textBox8) inputs
	int peakHourStart, peakHourEnd;

	// Try parsing the values as integers
	if (!Int32::TryParse(textBox4->Text, peakHourStart) || !Int32::TryParse(textBox8->Text, peakHourEnd)) {
		MessageBox::Show("Please enter valid integer values for peak hour start and end.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check if the values are within valid range (0-24)
	if (peakHourStart < 0 || peakHourStart > 24 || peakHourEnd < 0 || peakHourEnd > 24) {
		MessageBox::Show("Please enter values between 0 and 24 for both peak hour start and end.", "Invalid Range", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Ensure peakHourStart is less than peakHourEnd
	if (peakHourStart >= peakHourEnd) {
		MessageBox::Show("Peak hour start time must be earlier than peak hour end time.", "Invalid Time", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// If everything is valid, save the values
	dbManager db;
	db.open("test.db");

	db.setAdminPeakHourStart(peakHourStart);
	db.setAdminPeakHourEnd(peakHourEnd);

	db.close();

	MessageBox::Show("Successfully Saved!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	// home peak
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
	panel4->Visible = true;

	dbManager db;
	db.open("test.db");

	int peakHourStart = db.getAdminPeakHourStart();
	int peakHourEnd = db.getAdminPeakHourEnd();

	label2->Text = peakHourStart.ToString();
	label6->Text = peakHourEnd.ToString();
	db.close();
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
