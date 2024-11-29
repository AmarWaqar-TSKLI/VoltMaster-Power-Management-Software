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
		
		Admin(int adminID)
		{
			InitializeComponent();
			this->adminID = adminID;
			panel1->Parent = this;
			panel2->Parent = this;
			panel3->Parent = this;
			
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
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1424, 891);
			this->panel1->TabIndex = 4;
			this->panel1->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button15);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1424, 891);
			this->panel3->TabIndex = 6;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::panel3_Paint);
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
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(59, 596);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 38);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(60, 501);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 38);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Admin::button5_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(58, 314);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(110, 38);
			this->button7->TabIndex = 4;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Admin::button7_Click);
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
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1424, 891);
			this->panel2->TabIndex = 5;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::panel2_Paint);
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
			this->textBox5->Location = System::Drawing::Point(607, 686);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(157, 28);
			this->textBox5->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(1167, 336);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(157, 28);
			this->textBox4->TabIndex = 11;
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
			this->label3->Location = System::Drawing::Point(611, 611);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1171, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 8;
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
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 891);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->MaximumSize = System::Drawing::Size(1440, 930);
			this->MinimumSize = System::Drawing::Size(1440, 930);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
	panel3->Visible = false;

	dbManager db;
	db.open("test.db");

	int singlePrice = db.getSingleMeterPrice();
	int doublePrice = db.getDoubleMeterPrice();
	int triplePrice = db.getTripleMeterPrice();


	String^ singlePriceStr = singlePrice.ToString();
	String^ doublePriceStr = doublePrice.ToString();
	String^ triplePriceStr = triplePrice.ToString();

	label1->Text = singlePriceStr;
	label2->Text = doublePriceStr;
	label3->Text = triplePriceStr;
	db.close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
	panel3->Visible = false;

	dbManager db;
	db.open("test.db");

	int singlePrice = db.getSingleMeterPrice();
	int doublePrice = db.getDoubleMeterPrice();
	int triplePrice = db.getTripleMeterPrice();


	String^ singlePriceStr = singlePrice.ToString();
	String^ doublePriceStr = doublePrice.ToString();
	String^ triplePriceStr = triplePrice.ToString();

	label1->Text = singlePriceStr;
	label2->Text = doublePriceStr;
	label3->Text = triplePriceStr;
	db.close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
	displayAppliances();
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

			   panel3->Controls->Clear();
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
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	panel2->Visible = false;
	panel3->Visible = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = false;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	panel2->Visible = false;
	panel3->Visible = false;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
	panel3->Visible = false;

	dbManager db;
	db.open("test.db");

	int singlePrice = db.getSingleMeterPrice();
	int doublePrice = db.getDoubleMeterPrice();
	int triplePrice = db.getTripleMeterPrice();


	String^ singlePriceStr = singlePrice.ToString();
	String^ doublePriceStr = doublePrice.ToString();
	String^ triplePriceStr = triplePrice.ToString();

	label1->Text = singlePriceStr;
	label2->Text = doublePriceStr;
	label3->Text = triplePriceStr;
	db.close();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "") {
		MessageBox::Show("Please enter all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	dbManager db;
	db.open("test.db");

	int singlePrice = Int32::Parse(textBox3->Text);
	int doublePrice = Int32::Parse(textBox4->Text);
	int triplePrice = Int32::Parse(textBox5->Text);

	db.setSingleMeterPrice(singlePrice);
	db.setDoubleMeterPrice(doublePrice);
	db.setTripleMeterPrice(triplePrice);

	db.close();

	MessageBox::Show("Successfully Saved!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6->Text == "" || textBox7->Text == "") {
		MessageBox::Show("Please enter all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	System::String^ managedString = textBox6->Text;
	std::string applianceName = msclr::interop::marshal_as<std::string>(managedString);
	int powerUsage = Int32::Parse(textBox7->Text);

	dbManager db;
	db.open("test.db");

	db.addApplianceToList(applianceName.c_str(), powerUsage);

	db.close();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	displayAppliances();
}
};
}
