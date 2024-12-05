#pragma once
#include "db.h"
#include <iostream>
#include <string>
#include <cctype>
#include <msclr/marshal.h>
#include <sstream>
#include <iomanip>
#include <msclr/marshal_cppstd.h>
#include <vector>
#include <tuple>
#include <utility>
#include "nav.h"
#include <algorithm>

namespace sem3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for scheduleGenerationForm
	/// </summary>
	public ref class scheduleGenerationForm : public System::Windows::Forms::Form
	{
	public:
		int userID;
		int powerConsumed;
		int estimatedBill;
		int unitsSaved;
		Panel^ dynamicPanelGen;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;

	private: System::Windows::Forms::Panel^ panel2;





	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	public:
		String^ type;
		scheduleGenerationForm(int userID)
		{
			InitializeComponent();
			this->userID = userID;
			panel1->Parent = this;
			panel2->Parent = this;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~scheduleGenerationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(scheduleGenerationForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(675, 791);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 45);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1424, 881);
			this->panel1->TabIndex = 1;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &scheduleGenerationForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button25);
			this->panel2->Controls->Add(this->button26);
			this->panel2->Controls->Add(this->button27);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1424, 881);
			this->panel2->TabIndex = 13;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &scheduleGenerationForm::panel2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(652, 792);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 43);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::pictureBox1_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(1066, 155);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(260, 47);
			this->button20->TabIndex = 18;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button20_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(788, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 26);
			this->label2->TabIndex = 25;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(1068, 609);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(260, 47);
			this->button25->TabIndex = 24;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(1067, 533);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(260, 47);
			this->button26->TabIndex = 23;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(1066, 457);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(260, 47);
			this->button27->TabIndex = 22;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button27_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(1069, 383);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(260, 47);
			this->button22->TabIndex = 21;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(1068, 307);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(260, 47);
			this->button23->TabIndex = 20;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button23_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(1067, 231);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(260, 47);
			this->button21->TabIndex = 19;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button21_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(1142, 143);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(184, 37);
			this->button9->TabIndex = 5;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(328, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(955, 277);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 37);
			this->textBox1->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(931, 143);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(177, 37);
			this->button8->TabIndex = 2;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(676, 792);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(266, 45);
			this->button7->TabIndex = 1;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button7_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(57, 812);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 40);
			this->button3->TabIndex = 12;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button3_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(67, 285);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(97, 36);
			this->button11->TabIndex = 8;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(67, 448);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(97, 36);
			this->button12->TabIndex = 9;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(57, 527);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(124, 36);
			this->button13->TabIndex = 10;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(67, 618);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(111, 36);
			this->button14->TabIndex = 11;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button14_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Syne", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(359, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 35);
			this->label3->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Syne", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(419, 328);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 35);
			this->label4->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Syne", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(357, 489);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 35);
			this->label5->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Syne", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(401, 616);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 35);
			this->label6->TabIndex = 17;
			// 
			// scheduleGenerationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 881);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(1440, 950);
			this->MinimumSize = System::Drawing::Size(1440, 858);
			this->Name = L"scheduleGenerationForm";
			this->Text = L"scheduleGenerationForm";
			this->Load += gcnew System::EventHandler(this, &scheduleGenerationForm::scheduleGenerationForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// checking if schedule exists or not
	private: System::Void scheduleGenerationForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dbManager db;
		db.open("test.db");
		bool isEmpty = false;
		int SID = db.getCurrentSID(userID, isEmpty);
		if (SID == 1 && isEmpty) {
			BackgroundImage = System::Drawing::Image::FromFile("Images/sg- notExists.jpg");
			panel1->Visible = false;
		}
		else {
			int unitsSaved;
			std::string scheduleType;
			db.getScheduleTypeAndSavedUnits(userID, SID, unitsSaved, scheduleType);
			if (scheduleType == "daily") {
				BackgroundImage = System::Drawing::Image::FromFile("Images/sg- exists.jpg");
				/*button1->Location = System::Drawing::Point(301, 716);*/
				/*panel1->Visible = false;*/
				/*label3->Text = db.getConsumedUnits(userID).ToString();
				label4->Text = db.getEstimatedBill(userID, SID).ToString();
				label5->Text = unitsSaved.ToString();
				label6->Text = gcnew String(db.getScheduleDate(userID, SID).c_str());*/
				generateScheduleDaily(0, true);
			}
			else {
				panel2->Parent = this;
				panel2->Show();
				panel2->Visible = true;
				panel2->BringToFront();

				button11->BringToFront();
				button12->BringToFront();
				button13->BringToFront();
				button14->BringToFront();
				button3->BringToFront();
			}
		}
		db.close();
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		button8->BackgroundImage = System::Drawing::Image::FromFile("Images/sg-daily.png");
		button8->Tag = "1";
		button9->BackgroundImage = nullptr;
		button9->Tag = nullptr;
	}
	
	
	// Function to calculate the power consumption of an appliance
	float calculatePowerConsumption(float appliancePower, float applianceDuration, float applianceQuantity) {
		return ((appliancePower * applianceDuration / 60) / 3600 ) * applianceQuantity;
	}

	// function to sort tuple of appliances based on power
	void bubbleSortPower(std::vector<std::tuple<int, int, int, float, int>>& array, int size) {

		// loop to access each array element
		for (int step = 0; step < (size - 1); ++step) {

			// check if swapping occurs
			int swapped = 0;

			// loop to compare two elements
			for (int i = 0; i < (size - step - 1); ++i) {

				// compare two array elements
				// change > to < to sort in descending order
				if (std::get<3>(array[i]) > std::get<3>(array[i + 1])) {

					// swapping occurs if elements
					// are not in intended order 
					swap(array[i], array[i + 1]);

					swapped = 1;
				}
			}

			// no swapping means the array is already sorted
			// so no need of further comparison
			if (swapped == 0)
				break;
		}
	}

	// function to sort tuple of appliances based on power
	void bubbleSortPriority(std::vector<std::tuple<int, int, int, float, int>>& array, int size) {

		// loop to access each array element
		for (int step = 0; step < (size - 1); ++step) {

			// check if swapping occurs
			int swapped = 0;

			// loop to compare two elements
			for (int i = 0; i < (size - step - 1); ++i) {

				// compare two array elements
				// change > to < to sort in descending order
				if (std::get<4>(array[i]) > std::get<4>(array[i + 1])) {

					// swapping occurs if elements
					// are not in intended order 
					swap(array[i], array[i + 1]);

					swapped = 1;
				}
			}

			// no swapping means the array is already sorted
			// so no need of further comparison
			if (swapped == 0)
				break;
		}
	}

	int calculateTotalPower(std::vector<std::tuple<int, int, int, float, int>> appliances) {
		float sum = 0;
		for (int i = 0; i < appliances.size(); i++) {
			float power = calculatePowerConsumption(std::get<3>(appliances[i]), std::get<2>(appliances[i]), std::get<1>(appliances[i]));
			sum += power;
			std::get<3>(appliances[i]) = power;
		}

		return sum;
	}

	std::string getTodayDate() {
		// Get the current date using .NET DateTime
		System::DateTime today = System::DateTime::Now;

		// Format the date
		int day = today.Day;
		System::String^ monthName = today.ToString("MMMM"); // Get full month name
		int year = today.Year;

		// Combine into desired format
		System::String^ formattedDate = " " + day + " - " + monthName + " - " + year;

		// Convert System::String^ to std::string
		using namespace System::Runtime::InteropServices;
		const char* dateChars = (const char*)(Marshal::StringToHGlobalAnsi(formattedDate)).ToPointer();
		std::string dateString(dateChars);
		Marshal::FreeHGlobal(System::IntPtr((void*)dateChars));

		return dateString;
	}

	void scheduleGenerationForm::OnPrevButtonClickedWeekly(Object^ sender, EventArgs^ e)
	{
		// Retrieve the Tag property, which contains the reference to dynamicPanel2
		Panel^ panelToDispose = safe_cast<Panel^>(dynamic_cast<Button^>(sender)->Tag);

		// Check if the panel is not null before disposing
		if (panelToDispose != nullptr)
		{
			panelToDispose->Hide();
			delete panelToDispose;
		}
	}


	void scheduleGenerationForm::onDailyGenerateAgain(Object^ sender, EventArgs^ e) {
		// Retrieve the Tag property, which contains the reference to dynamicPanel2
		Panel^ panelToDispose = safe_cast<Panel^>(dynamic_cast<Button^>(sender)->Tag);

		// Check if the panel is not null before disposing
		if (panelToDispose != nullptr)
		{
			panelToDispose->Hide();
			delete panelToDispose;
		}

		panel1->Show();
	}


	void DisplaySchedule(std::tuple<int, int, int, float, int, int, int>** schedule, int rowSize, int colSize, bool isWeekly) {
		// Create the dynamic panel
		Panel^ dynamicPanel2 = gcnew Panel();
		dynamicPanel2->Visible = true;
		dynamicPanel2->Size = System::Drawing::Size(1440, 950);
		dynamicPanel2->Location = System::Drawing::Point(0, 0); // Ensure it's positioned at the top-left of the form

		// Set the background image if it exists
		String^ imagePath;
		if (!isWeekly)
			imagePath = "Images/sg- exists.jpg";
		else
			imagePath = "Images/weekly-schedule.jpg";
		if (System::IO::File::Exists(imagePath)) {
			dynamicPanel2->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
			//dynamicPanel->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else {
			MessageBox::Show("Background image not found at path: " + imagePath, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		dbManager db;
		db.open("test.db");
		bool isEmpty = false;
		int currentSchedule = db.getCurrentSID(userID, isEmpty);
		if (!isEmpty && currentSchedule >= 1)
			currentSchedule += 1;
		int currentunits = this->powerConsumed;
		int bill = this->estimatedBill;
		int unitssav = this->unitsSaved;

		// bill
		Label^ labelbill = gcnew Label();
		labelbill->Text = bill.ToString();
		labelbill->Location = System::Drawing::Point(418, 329);
		labelbill->AutoSize = true;
		labelbill->ForeColor = System::Drawing::Color::White;
		labelbill->Font = gcnew System::Drawing::Font("Syne", 18.0f, FontStyle::Bold);
		labelbill->BackColor = System::Drawing::Color::Transparent;
		dynamicPanel2->Controls->Add(labelbill);
		labelbill->Visible = true;
		labelbill->BringToFront();

		// currentUnits
		Label^ currentUnitsLabel = gcnew Label();
		currentUnitsLabel->Text = currentunits.ToString();
		currentUnitsLabel->Location = System::Drawing::Point(356, 182);
		currentUnitsLabel->AutoSize = true;
		currentUnitsLabel->ForeColor = System::Drawing::Color::White;
		currentUnitsLabel->Font = gcnew System::Drawing::Font("Syne", 18.0f, FontStyle::Bold);
		currentUnitsLabel->BackColor = System::Drawing::Color::Transparent;
		dynamicPanel2->Controls->Add(currentUnitsLabel);
		currentUnitsLabel->Visible = true;
		currentUnitsLabel->BringToFront();

		// units Saved
		Label^ unitsSavedLabel = gcnew Label();
		unitsSavedLabel->Text = unitssav.ToString();
		unitsSavedLabel->Location = System::Drawing::Point(358, 489);
		unitsSavedLabel->AutoSize = true;
		unitsSavedLabel->ForeColor = System::Drawing::Color::White;
		unitsSavedLabel->Font = gcnew System::Drawing::Font("Syne", 18.0f, FontStyle::Bold);
		unitsSavedLabel->BackColor = System::Drawing::Color::Transparent;
		dynamicPanel2->Controls->Add(unitsSavedLabel);
		unitsSavedLabel->Visible = true;
		unitsSavedLabel->BringToFront();



		Panel^ dynamicPanel = gcnew Panel();
		dynamicPanel->Visible = true;
		dynamicPanel->Size = System::Drawing::Size(781, 768);
		dynamicPanel->Location = System::Drawing::Point(619, 105); // Ensure it's positioned at the top-left of the form
		dynamicPanel->BackColor = System::Drawing::Color::Transparent;
		// Set the background image if it exists
		//String^ imagePath = "Images/sg- exists.jpg"; // Update your path
		dynamicPanel->AutoScroll = true;

		this->Controls->Add(dynamicPanel2);
		dynamicPanel2->BringToFront();

		dynamicPanel2->Controls->Add(dynamicPanel);
		dynamicPanel->BringToFront();
		// Positioning variables
		int startX = 80;            // Initial X position
		int startY = 30;            // Initial Y position
		int labelOffsetX = 150;      // Space between labels in the same row (increased for clarity)
		int labelSpacingY = 10;      // Space between rows (increased for better spacing)

		// showing date

		std::string date = getTodayDate();
		std::cout << date << std::endl;

		Label^ labelDate = gcnew Label();
		String^ dateName = gcnew String(date.c_str());
		labelDate->Text = dateName;
		labelDate->Location = System::Drawing::Point(383, 620);
		labelDate->AutoSize = true;
		labelDate->ForeColor = System::Drawing::Color::White;
		labelDate->Font = gcnew System::Drawing::Font("Syne", 14.0f, FontStyle::Bold);
		labelDate->BackColor = System::Drawing::Color::Transparent;
		dynamicPanel2->Controls->Add(labelDate);
		labelDate->Visible = true;
		labelDate->BringToFront();

		int validRowNumber = 0;
		int validColNumber = 0;
		
		// Iterate through the schedule tuples
		for (int i = 0; i < rowSize; i++) {
			for (int currentCol = 0; currentCol < colSize; currentCol++) {
				auto& t = schedule[i][currentCol];
				if (std::get<0>(t) == 0)
					continue;

				// Create the first label (get<0>(schedule[i]))
				Label^ label1 = gcnew Label();
				String^ managedApplianceName;
				bool isEmpty = false;
				int sid = db.getCurrentSID(userID, isEmpty);
				if (!isEmpty && sid >= 1 && db.getApplianceChanged() == 1)
					sid++;
				const char* applianceName = db.getApplianceName(userID, sid, std::get<0>(schedule[i][currentCol]), managedApplianceName);
				// String^ managedApplianceName = msclr::interop::marshal_as<String^>(applianceName);

				int label1x = startX;
				int label1y = startY + (((validRowNumber * colSize) + validColNumber) * labelSpacingY);

				int pictureBoxx = label1x + 250;
				int pictureBoxy = label1y;

				int label3x = label1x + 480;
				int label3y = label1y;

				// Set the label text
				label1->Text = managedApplianceName;
				label1->Location = System::Drawing::Point(label1x, label1y);
				label1->AutoSize = true;
				label1->ForeColor = System::Drawing::Color::White;
				label1->Font = gcnew System::Drawing::Font("Arial", 15.0f, FontStyle::Bold);
				label1->BackColor = System::Drawing::Color::FromArgb(67, 65, 65);
				// Create the second label (get<3>(schedule[i]))

				int prority = std::get<4>(t);
				String^ imglocation = "Images/priority";
				String^ path = imglocation + prority.ToString();

				PictureBox^ pictureBox = gcnew PictureBox();
				pictureBox->Size = System::Drawing::Size(93, 36);

				pictureBox->Location = System::Drawing::Point(pictureBoxx, pictureBoxy);

				pictureBox->Image = System::Drawing::Image::FromFile(path + ".png"); // Provide the path to your image file

				pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;  // Other options: Normal, CenterImage, AutoSize, etc.

				Label^ label3 = gcnew Label();
				label3->Text = gcnew String((convertMinutesToTime(std::get<5>(schedule[i][currentCol])) + "-" +
					convertMinutesToTime(std::get<6>(schedule[i][currentCol]))).c_str());
				label3->Location = System::Drawing::Point(label3x, label3y);
				label3->AutoSize = true;
				label3->ForeColor = System::Drawing::Color::White;
				label3->Font = gcnew System::Drawing::Font("Arial", 15.0f, FontStyle::Bold);
				label3->BackColor = System::Drawing::Color::FromArgb(67, 65, 65);
				// Add labels to the panel
				dynamicPanel->Controls->Add(label1);
				dynamicPanel->Controls->Add(pictureBox);
				dynamicPanel->Controls->Add(label3);

				validRowNumber++;
				validColNumber++;
			}
		}
		db.close();
		// Add the dynamic panel to the form and bring it to the front
		
		if (isWeekly) {
			Button^ prevBtn = gcnew Button;
			prevBtn->BackColor = System::Drawing::Color::Transparent;
			prevBtn->FlatAppearance->BorderSize = 0;
			prevBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			prevBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			prevBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			prevBtn->Location = System::Drawing::Point(304, 713);
			prevBtn->Size = System::Drawing::Size(259, 49);
			prevBtn->TabIndex = 0;
			prevBtn->UseVisualStyleBackColor = false;
			prevBtn->Tag = dynamicPanel2;
			prevBtn->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::OnPrevButtonClickedWeekly);
			prevBtn->Visible = true;
			prevBtn->BringToFront();
			dynamicPanel2->Controls->Add(prevBtn);
		}
		else {
			Button^ generateButton = gcnew Button;
			generateButton->BackColor = System::Drawing::Color::Transparent;
			generateButton->FlatAppearance->BorderSize = 0;
			generateButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			generateButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			generateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			generateButton->Location = System::Drawing::Point(301, 716);
			generateButton->Size = System::Drawing::Size(259, 49);
			generateButton->TabIndex = 0;
			generateButton->UseVisualStyleBackColor = false;
			generateButton->Tag = dynamicPanel2;
			generateButton->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::onDailyGenerateAgain);
			generateButton->Visible = true;
			generateButton->BringToFront();
			dynamicPanel2->Controls->Add(generateButton);
		}

		button11->BringToFront();
		button12->BringToFront();
		button13->BringToFront();
		button14->BringToFront();
		button3->BringToFront();
	}

	// helper function to convert minutes into 24 hour format
	std::string convertMinutesToTime(int minutes) {
		// Ensure the input is non-negative
		if (minutes < 0) {
			return "Invalid input";  // Return an error string for negative input
		}

		// Calculate hours and minutes
		int hours = minutes / 60;
		int remainingMinutes = minutes % 60;

		// Format the time in 24-hour format (HH:MM)
		std::stringstream timeStream;
		timeStream << std::setw(2) << std::setfill('0') << hours << ":"
			<< std::setw(2) << std::setfill('0') << remainingMinutes;

		return timeStream.str();
	}




	// Function to collect data
	void GetCheckedData(Control^ parentControl, std::vector <std::tuple<std::string, int, int>>& result) {

		for each (Control ^ ctrl in parentControl->Controls) {
			// Check if the control is a CheckBox
			CheckBox^ checkBox = dynamic_cast<CheckBox^>(ctrl);
			if (checkBox != nullptr) {
				if (checkBox->Checked) {
					// Get the associated Label from the CheckBox's Tag
					Label^ label = safe_cast<Label^>(checkBox->Tag);
					if (label != nullptr) {
						// Get the associated PictureBox from the Label's Tag
						Label^ Quantity = safe_cast<Label^>(label->Tag);
						if (Quantity != nullptr)
						{
							PictureBox^ pictureBox = safe_cast<PictureBox^>(Quantity->Tag);

							if (pictureBox != nullptr) {
								// Convert Label text (managed string) to std::string
								std::string labelText = msclr::interop::marshal_as<std::string>(label->Text);

								// Convert PictureBox Tag to int
								int pictureBoxTag = Convert::ToInt32(pictureBox->Tag);
								int quantity = Convert::ToInt32(Quantity->Text);

								// Store the Label's text and PictureBox's tag as a pair
								//result.push_back(std::make_tuple(labelText, pictureBoxTag,quantity));
								result.emplace_back(labelText, pictureBoxTag, quantity);
							}
						}

					}
				}
			}
			// If the control has child controls, call the function recursively
			if (ctrl->Controls->Count > 0)
			{
				GetCheckedData(ctrl, result);
			}
		}
	}
		private: System::Void PictureBox_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Cast the sender to a PictureBox
			PictureBox^ clickedPictureBox = dynamic_cast<PictureBox^>(sender);
			if (clickedPictureBox != nullptr)
			{
				// Define paths for the images
				String^ imagePath1 = "Images/priority1.png";
				String^ imagePath2 = "Images/priority2.png";
				String^ imagePath3 = "Images/priority3.png";

				// Track the current image state using the Tag property or a custom variable.
				if (clickedPictureBox->Tag == nullptr)
				{
					// Initially set the image to priority1 and set the state to "1"
					clickedPictureBox->Image = System::Drawing::Image::FromFile(imagePath1);
					clickedPictureBox->Tag = "1"; // Store state in the Tag property
				}
				else
				{
					// Cycle through images based on the Tag property value
					String^ currentTag = safe_cast<String^>(clickedPictureBox->Tag);

					if (currentTag == "1")
					{
						// Switch to priority2
						clickedPictureBox->Image = System::Drawing::Image::FromFile(imagePath2);
						clickedPictureBox->Tag = "2"; // Update the state
					}
					else if (currentTag == "2")
					{
						// Switch to priority3
						clickedPictureBox->Image = System::Drawing::Image::FromFile(imagePath3);
						clickedPictureBox->Tag = "3"; // Update the state
					}
					else
					{
						// Switch back to priority1
						clickedPictureBox->Image = System::Drawing::Image::FromFile(imagePath1);
						clickedPictureBox->Tag = "1"; // Update the state
					}
				}
			}
		}

			   void scheduleGenerationForm::OnNextButtonClick(System::Object^ sender, System::EventArgs^ e) {
				   MessageBox::Show("Next button clicked!", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   std::vector <std::tuple<std::string, int, int>> result;
				   std::vector <std::tuple<std::string, int, int>> resultfinal;

				   GetCheckedData(this, result);
				   for (int i = 0; i < result.size(); i++)
				   {
					   int quan = std::get<2>(result[i]);
					   System::String^ managedString = gcnew System::String(std::get<0>(result[i]).c_str());
					   if (quan > 1) {


						   System::Windows::Forms::DialogResult resultD = MessageBox::Show(
							   "Do you want to run " + managedString + " Appliance on same time",         // Message text
							   "Confirmation",                    // Caption
							   MessageBoxButtons::YesNo,          // Buttons
							   MessageBoxIcon::Question           // Icon
						   );

						   // Perform actions based on the result

						   if (resultD == System::Windows::Forms::DialogResult::No) {
							   //int Id = db.getApplianceID(appendedName);

							   for (int j = 1; j <= quan; j++) {
								   // Convert managed string to unmanaged char*
								   std::string applianceName1 = msclr::interop::marshal_as<std::string>(managedString);

								   // Calculate new string length (original length + the number of digits in i + null terminator)

								   applianceName1 += " "; // Append the integer i as a string
								   applianceName1 += std::to_string(j); // Append the integer i as a string
								   resultfinal.emplace_back(std::make_tuple(applianceName1, std::get<1>(result[i]), 1));
								   // Convert the resulting std::string back to a char array for the database operation
							   }


						   }
						   else if (resultD == System::Windows::Forms::DialogResult::Yes) {
							   resultfinal.emplace_back(std::make_tuple(std::get<0>(result[i]), std::get<1>(result[i]), quan));

						   }
					   }
					   else {

						   resultfinal.emplace_back(std::make_tuple(std::get<0>(result[i]), std::get<1>(result[i]), quan));


					   }

				   }
				   getApDayAndDuration(resultfinal);


			   }
			   // Function to collect data.
			   void GetCheckedDataByDay(Control^ parentControl, std::vector<std::vector<std::tuple<int, std::string, int, int>>>& weeklyData) {

				   for each (Control ^ ctrl in parentControl->Controls) {
					   CheckBox^ checkBox = dynamic_cast<CheckBox^>(ctrl);
					   if (checkBox != nullptr && checkBox->Checked) {
						   // Get the associated label (day).
						   Label^ dayLabel = safe_cast<Label^>(checkBox->Tag);
						   if (dayLabel != nullptr) {
							   // Get the associated textbox (duration).

							   TextBox^ txtDuration = safe_cast<TextBox^>(dayLabel->Tag);
							   if (txtDuration != nullptr) {
								   // Get the appliance name label (tag of the textbox).
								   Label^ applianceLabel = safe_cast<Label^>(txtDuration->Tag);
								   if (applianceLabel != nullptr) {
									   // Convert to std::string and int.
									   std::string dayText = msclr::interop::marshal_as<std::string>(dayLabel->Text);
									   std::string applianceName = msclr::interop::marshal_as<std::string>(applianceLabel->Text);
									   int duration = Convert::ToInt32(txtDuration->Text);
									   int quantity = Convert::ToInt32(applianceLabel->Name);
									   int dayIndex = GetDayIndex(dayText);
									   if (dayIndex >= 0 && dayIndex < 7) {
										   int priority = Convert::ToInt32(applianceLabel->Tag);

										   weeklyData[dayIndex].emplace_back(duration, applianceName, priority, quantity);
									   }
								   }
							   }
						   }
					   }
					   if (ctrl->Controls->Count > 0)
					   {
						   GetCheckedDataByDay(ctrl, weeklyData);
					   }
				   }
			   }

	std::string removeNumber(const std::string& input) {
		size_t pos = 0;

		// Find the position where the first digit appears
		while (pos < input.size() && !std::isdigit(input[pos])) {
			pos++;
		}

		if (!isdigit(input[pos])) {
			return input;
		}

		// Return a substring from the start to the first number (excluding the number part)
		return input.substr(0, pos-1);
	}

	void scheduleGenerationForm::OnNextGenButtonClick(System::Object^ sender, System::EventArgs^ e) { // ------------------------------------------------------------------------------------------------------
		MessageBox::Show("Next Gen button clicked!", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		std::vector<std::vector<std::tuple<int, std::string, int, int>>> weeklyData(7);
		GetCheckedDataByDay(dynamicPanelGen, weeklyData);
		

		dbManager db;
		db.open("test.db");
		bool isEmpty = false;
		int currentSchedule = db.getCurrentSID(userID, isEmpty);
		if (!isEmpty && currentSchedule >= 1)
			currentSchedule += 1;
		db.deleteselectedappliances(userID, currentSchedule);
		for (int i = 0; i < weeklyData.size(); ++i) {
			int offsetID = 1;
			for (const auto& entry : weeklyData[i]) {
				string applianceName = removeNumber(std::get<1>(entry));
				int Id = db.getApplianceID(applianceName.c_str());
				db.addselectedAppliances(userID, currentSchedule, Id, std::get<1>(entry).c_str(), std::get<2>(entry), std::get<3>(entry), std::get<0>(entry), offsetID, i + 1);
				db.setApplianceChanged(1);
				offsetID++;
			}
		}
		for each (Control ^ ctrl in scheduleGenerationForm::Controls) {
			Panel^ panel = dynamic_cast<Panel^>(ctrl);
			if (panel != nullptr) {
				panel->Hide();
			}
		}
		panel2->Parent = this;
		panel2->Show();
		panel2->Visible = true;
		panel2->BringToFront();

		button11->BringToFront();
		button12->BringToFront();
		button13->BringToFront();
		button14->BringToFront();
		button3->BringToFront();

	}
	void scheduleGenerationForm::OnIncreaseClick(System::Object^ sender, System::EventArgs^ e)
	{
		// Retrieve the button that was clicked
		Button^ clickedButton = dynamic_cast<Button^>(sender);
		if (clickedButton != nullptr && clickedButton->Tag != nullptr)
		{
			// Get the linked Label using the Tag property
			Label^ lblQuantity = dynamic_cast<Label^>(clickedButton->Tag);
			if (lblQuantity != nullptr)
			{
				// Increase the quantity
				int quantity = System::Convert::ToInt32(lblQuantity->Text);
				quantity++;
				lblQuantity->Text = quantity.ToString(); // Update the label with the new quantity
			}
		}
	}

	void scheduleGenerationForm::OnDecreaseClick(System::Object^ sender, System::EventArgs^ e)
	{
		// Retrieve the button that was clicked
		Button^ clickedButton = dynamic_cast<Button^>(sender);
		if (clickedButton != nullptr && clickedButton->Tag != nullptr)
		{
			// Get the linked Label using the Tag property
			Label^ lblQuantity = dynamic_cast<Label^>(clickedButton->Tag);
			if (lblQuantity != nullptr)
			{
				// Decrease the quantity, but don't go below zero
				int quantity = System::Convert::ToInt32(lblQuantity->Text);
				if (quantity > 1)
				{
					quantity--;
					lblQuantity->Text = quantity.ToString(); // Update the label with the new quantity
				}
			}
		}
	}
int quantity = 1;
void WeeklySceduleGeneration() {

	int startY = 30; // Starting Y position for TextBoxes
	int startX = 100; // X position for the first TextBox
	int verticalSpacing = 60; // Vertical space between each TextBox
	int size = 0;
	dbManager db;
	db.open("test.db");
	string* applianceData = db.getAllApplianceNames(size);
	Panel^ dynamicPanel = gcnew Panel();
	dynamicPanel->Visible = true;
	dynamicPanel->Size = System::Drawing::Size(1400, 950);

	dynamicPanel->Location = System::Drawing::Point(0, 0); // Ensure it's positioned at the top-left of the form
	dynamicPanel->BackgroundImage = System::Drawing::Image::FromFile("Images/Weekly Schedule-SelectAppliances.jpg");
	// Set the background image if it exists
	//String^ imagePath = "Images/sg- exists.jpg"; // Update your path

	this->Controls->Add(dynamicPanel);
	dynamicPanel->BringToFront();



	Panel^ dynamicPanel1 = gcnew Panel();
	dynamicPanel1->Visible = true;
	dynamicPanel1->Size = System::Drawing::Size(961, 689 - 49);

	dynamicPanel1->Location = System::Drawing::Point(346, 142); // Ensure it's positioned at the top-left of the form
	dynamicPanel1->BackColor = System::Drawing::Color::FromArgb(65, 65, 65);
	// Set the background image if it exists
	//String^ imagePath = "Images/sg- exists.jpg"; // Update your path
	dynamicPanel1->AutoScroll = true;

	dynamicPanel->Controls->Add(dynamicPanel1);
	dynamicPanel1->BringToFront();

	// Loop through applianceData to create TextBoxes for each appliance
	for (int i = 0; i < size; ++i)
	{
		// Create a Label for each appliance
		Label^ label = gcnew Label();
		label->Text = gcnew System::String(applianceData[i].c_str()); // Appliance name
		label->Location = System::Drawing::Point(startX + 25, startY + (i * verticalSpacing));
		label->AutoSize = true;
		label->ForeColor = System::Drawing::Color::White;
		//label->BackColor = System::Drawing::Color::Aqua;
		label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
		label->Visible = true;
		dynamicPanel1->Controls->Add(label);
		// Create a new PictureBox
		PictureBox^ pictureBox = gcnew PictureBox();
		pictureBox->Size = System::Drawing::Size(93, 36);

		pictureBox->Location = System::Drawing::Point(startX + 310, (startY - 10) + (i * verticalSpacing));

		pictureBox->Image = System::Drawing::Image::FromFile("Images/priority1.png"); // Provide the path to your image file
		pictureBox->Tag = "1";
		// Make sure the aspect ratio is maintained when the picture is resized
		pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;  // Other options: Normal, CenterImage, AutoSize, etc.
		pictureBox->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::PictureBox_Click);
		// Add the PictureBox to the form's panel (or directly to the form)
		dynamicPanel1->Controls->Add(pictureBox);


		CheckBox^ checkBox = gcnew CheckBox();

		// Set the properties of the CheckBox
		checkBox->Text = "";  // Text for the CheckBox
		checkBox->Location = System::Drawing::Point(startX - 65, (startY + 7) + (i * verticalSpacing)); // Position on the form
		checkBox->AutoSize = true;  // Automatically resize to fit the text
		checkBox->Size = System::Drawing::Size(130, 130);

		// Add an event handler for the CheckedChanged event
		//checkBox->CheckedChanged += gcnew System::EventHandler(this, &ApplianceFrom::CheckBox_CheckedChanged);

		// Add the CheckBox to the form's controls
		dynamicPanel1->Controls->Add(checkBox);
		// Label to show quantity

		Label^ lblQuantity = gcnew Label();
		lblQuantity->Text = quantity.ToString();
		lblQuantity->Location = System::Drawing::Point(startX + 634, (startY - 7) + (i * verticalSpacing));
		lblQuantity->Size = System::Drawing::Size(80, 30);
		lblQuantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		lblQuantity->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
		lblQuantity->ForeColor = System::Drawing::Color::White;

		//Increase btn
		Button^ btnIncrease = gcnew Button();
		btnIncrease->Text = "+";
		btnIncrease->Location = System::Drawing::Point(startX + 700, (startY - 7) + (i * verticalSpacing));
		btnIncrease->Size = System::Drawing::Size(40, 30);
		btnIncrease->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::OnIncreaseClick);


		btnIncrease->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
		btnIncrease->ForeColor = System::Drawing::Color::White;
		btnIncrease->BackColor = System::Drawing::Color::FromArgb(0, 116, 249);
		btnIncrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btnIncrease->FlatAppearance->BorderSize = 0;
		btnIncrease->Tag = lblQuantity;
		// Button for Decrease (Minus)
		Button^ btnDecrease = gcnew Button();
		btnDecrease->Text = "-";
		btnDecrease->Location = System::Drawing::Point(startX + 610, (startY - 7) + (i * verticalSpacing));
		btnDecrease->Size = System::Drawing::Size(40, 30);
		btnDecrease->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::OnDecreaseClick);
		btnDecrease->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
		btnDecrease->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		btnDecrease->Padding = System::Windows::Forms::Padding(0);
		btnDecrease->ForeColor = System::Drawing::Color::White;
		btnDecrease->BackColor = System::Drawing::Color::FromArgb(139, 27, 27);
		btnDecrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btnDecrease->FlatAppearance->BorderSize = 0;
		//	btnDecrease->Click += gcnew System::EventHandler(this, &ApplianceFrom::OnDecreaseClick);
		btnDecrease->Tag = lblQuantity;

		dynamicPanel1->Controls->Add(btnDecrease);
		dynamicPanel1->Controls->Add(btnIncrease);
		dynamicPanel1->Controls->Add(lblQuantity);

		checkBox->Tag = label;
		label->Tag = lblQuantity;
		lblQuantity->Tag = pictureBox;

	}

	db.close();

	// button to next

	Button^ nextBtn = gcnew Button;
	nextBtn->BackColor = System::Drawing::Color::Transparent;
	nextBtn->FlatAppearance->BorderSize = 0;
	nextBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
	nextBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
	nextBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	nextBtn->Location = System::Drawing::Point(682, 831);
	nextBtn->Size = System::Drawing::Size(259, 49);
	nextBtn->TabIndex = 0;
	nextBtn->UseVisualStyleBackColor = false;
	nextBtn->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::OnNextButtonClick);
	nextBtn->Visible = true;
	nextBtn->BringToFront();
	dynamicPanel->Controls->Add(nextBtn);

	button11->BringToFront();
	button12->BringToFront();
	button13->BringToFront();
	button14->BringToFront();
	button3->BringToFront();

}

	String^ getDay(int i) {
		switch (i) {
		case 1: return "Mon";
		case 2: return "Tue";
		case 3: return "Wed";
		case 4: return "Thu";
		case 5: return "Fri";
		case 6: return "Sat";
		case 7: return "Sun";
		default: return "Invalid Day"; // Handle invalid input
		}
	}
	// Function to map day names to indices (1-7).
	int GetDayIndex(std::string day) {
		if (day == "Mon") return 0;
		if (day == "Tue") return 1;
		if (day == "Wed") return 2;
		if (day == "Thu") return 3;
		if (day == "Fri") return 4;
		if (day == "Sat") return 5;
		if (day == "Sun") return 6;
		return -1; // Default case (shouldn't occur).
	}
	void ValidateNumericInput(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Only allow digits, backspace, and delete keys
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b') {
			e->Handled = true;
		}
	}
	// Leave event handler to validate that the value is between 1 and 1440
	void ValidateRange(System::Object^ sender, System::EventArgs^ e) {
		TextBox^ textBox = safe_cast<TextBox^>(sender);
		int value;

		// Validate input when focus leaves the textbox
		if (Int32::TryParse(textBox->Text, value)) {
			if (value < 1 || value > 1440) {
				// Display a warning if the value is out of range
				MessageBox::Show("Please enter a value between 1 and 1440 minutes.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);

				// Keep the previous valid value if it exists, or default to 1
				//textBox->Text = textBox->Tag != nullptr ? textBox->Tag->ToString() : "1";
			}
			else {
				// If input is valid, store it as the previous valid value
				//textBox->Tag = value.ToString();
			}
		}

	}


	void getApDayAndDuration(std::vector<std::tuple<std::string, int, int>> appliances) {
		int startY = 30; // Starting Y position for TextBoxes
		int startX = 10; // X position for the first TextBox
		int verticalSpacing = 120; // Vertical space between each TextBox
		int HorizontalSpacing = 120; // Vertical space between each TextBox
		int size = 0;

		dynamicPanelGen = gcnew Panel();
		dynamicPanelGen->Visible = true;
		dynamicPanelGen->Size = System::Drawing::Size(1400, 950);

		dynamicPanelGen->Location = System::Drawing::Point(0, 0); // Ensure it's positioned at the top-left of the form
		dynamicPanelGen->BackgroundImage = System::Drawing::Image::FromFile("Images/Weekly Schedule-dayDurationSelection.jpg");
		// Set the background image if it exists
		//String^ imagePath = "Images/sg- exists.jpg"; // Update your path

		this->Controls->Add(dynamicPanelGen);
		dynamicPanelGen->BringToFront();



		Panel^ dynamicPanel1 = gcnew Panel();
		dynamicPanel1->Visible = true;
		dynamicPanel1->Size = System::Drawing::Size(952, 640);

		dynamicPanel1->Location = System::Drawing::Point(347, 102); // Ensure it's positioned at the top-left of the form
		dynamicPanel1->BackColor = System::Drawing::Color::FromArgb(65, 65, 65);
		// Set the background image if it exists
		//String^ imagePath = "Images/sg- exists.jpg"; // Update your path
		dynamicPanel1->AutoScroll = true;

		dynamicPanelGen->Controls->Add(dynamicPanel1);
		dynamicPanel1->BringToFront();
		//std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
		
		Label^ label2 = gcnew Label();
		label2->Text = "Duration is in Minutes"; // Set the label's text
		label2->Location = System::Drawing::Point(1000, 747);
		label2->AutoSize = true;
		label2->ForeColor = System::Drawing::Color::Red;
		label2->Padding = System::Windows::Forms::Padding(10);
		label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, 10.0f);
		label2->BackColor = System::Drawing::Color::Transparent; // Set background to transparent
		label2->Visible = true;
		dynamicPanelGen->Controls->Add(label2);


		// Loop through applianceData to create TextBoxes for each appliance
		for (int i = 0; i < appliances.size(); ++i)
		{
			// Create a Label for each appliance
			Label^ label = gcnew Label();
			label->Text = gcnew System::String(std::get<0>(appliances[i]).c_str());
			// Appliance name
			label->Location = System::Drawing::Point(startX + 400, startY + (i * verticalSpacing) - 10);
			label->AutoSize = true;
			label->ForeColor = System::Drawing::Color::White;
			label->Padding = System::Windows::Forms::Padding(10);
			label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
			label->Visible = true;
			dynamicPanel1->Controls->Add(label);

			// Day Text
			Label^ label2 = gcnew Label();
			label2->Text = "Day:"; // Set the label's text to "Day"
			// Appliance name
			label2->Location = System::Drawing::Point(startX, startY + (i * verticalSpacing) + 30);
			label2->AutoSize = true;
			label2->ForeColor = System::Drawing::Color::White;
			label2->Padding = System::Windows::Forms::Padding(10);
			label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, 15.0f);
			label2->Visible = true;
			dynamicPanel1->Controls->Add(label2);

			//Duration Label
			Label^ label3 = gcnew Label();
			label3->Text = "Duration:"; // Set the label's text to "Duration"
			// Appliance name
			label3->Location = System::Drawing::Point(startX, startY + (i * verticalSpacing) + 85);
			label3->AutoSize = true;
			label3->ForeColor = System::Drawing::Color::White;
			label3->Padding = System::Windows::Forms::Padding(10);
			label3->Font = gcnew System::Drawing::Font(label3->Font->FontFamily, 15.0f);
			label3->Visible = true;
			dynamicPanel1->Controls->Add(label3);




			int boxSpacey = 50;
			for (int j = 0; j < 7; j++) {
				CheckBox^ checkBox = gcnew CheckBox();

				// Set the properties of the CheckBox
				checkBox->Text = "";  // Text for the CheckBox
				checkBox->Location = System::Drawing::Point(startX + (j * HorizontalSpacing) + 170, (startY + 9) + (i * verticalSpacing) + 40); // Position on the form
				checkBox->AutoSize = true;  // Automatically resize to fit the text
				checkBox->Size = System::Drawing::Size(130, 130);
				//checkBox->Appearance = System::Windows::Forms::Appearance::Button;
				checkBox->Font = gcnew System::Drawing::Font(checkBox->Font->FontFamily, 30.0f);
				checkBox->Size = System::Drawing::Size(200, 200); // Increased size
				// Add an event handler for the CheckedChanged event
				//checkBox->CheckedChanged += gcnew System::EventHandler(this, &ApplianceFrom::CheckBox_CheckedChanged);

				// Add the CheckBox to the form's controls
				dynamicPanel1->Controls->Add(checkBox);

				// Create a Label for each appliance
				Label^ label1 = gcnew Label();
				label1->Text = gcnew System::String(getDay(j + 1)); // Appliance name

				label1->Location = System::Drawing::Point(startX + (j * HorizontalSpacing) + 110, (startY + 7) + (i * verticalSpacing) + 35); // Position on the form
				label1->AutoSize = true;
				//label1->Padding = System::Windows::Forms::Padding(10); // Add padding
				label1->ForeColor = System::Drawing::Color::White;
				//label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

				//label1->BackColor = System::Drawing::Color::FromArgb(160,83,83);
				label1->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				label1->Visible = true;
				dynamicPanel1->Controls->Add(label1);



				// Label to show Duration in Hours
				TextBox^ txtDuration = gcnew TextBox();
				txtDuration->Text = "10";
				txtDuration->Location = System::Drawing::Point(startX + (j * HorizontalSpacing) + 110, (startY + 7) + (i * verticalSpacing) + 35 + boxSpacey); // Position on the form
				txtDuration->Size = System::Drawing::Size(80, 30);
				txtDuration->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				txtDuration->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				txtDuration->ForeColor = System::Drawing::Color::White;
				txtDuration->BackColor = System::Drawing::Color::FromArgb(67, 65, 65);

				txtDuration->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &scheduleGenerationForm::ValidateNumericInput);
				txtDuration->Leave += gcnew System::EventHandler(this, &scheduleGenerationForm::ValidateRange);
				dynamicPanel1->Controls->Add(txtDuration);

				checkBox->Tag = label1;
				label1->Tag = txtDuration;
				txtDuration->Tag = label;
				label->Tag = std::get<1>(appliances[i]);
				label->Name = std::get<2>(appliances[i]).ToString();
				//cout << std::get<2>(appliances[i]);
			}
			startY += boxSpacey;
			// Label to show quantity

		}

		// button to next generate

		Button^ nextGenBtn = gcnew Button;
		nextGenBtn->BackColor = System::Drawing::Color::Transparent;
		nextGenBtn->FlatAppearance->BorderSize = 0;
		nextGenBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
		nextGenBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
		nextGenBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		nextGenBtn->Location = System::Drawing::Point(690, 795);
		nextGenBtn->Size = System::Drawing::Size(220, 40);
		nextGenBtn->TabIndex = 0;
		nextGenBtn->UseVisualStyleBackColor = false;
		nextGenBtn->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::OnNextGenButtonClick);
		nextGenBtn->Visible = true;
		nextGenBtn->BringToFront();
		dynamicPanelGen->Controls->Add(nextGenBtn);

		button11->BringToFront();
		button12->BringToFront();
		button13->BringToFront();
		button14->BringToFront();
		button3->BringToFront();
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button8->Tag=="1") {
			this->type = "daily";
		}
		else if (button9->Tag=="1") {
			this->type = "weekly";
			if (textBox1->Text == "") {
				label1->Text = "Error: Current Units cannot be empty!";
				return;
			}
			if (!Int32::TryParse(textBox1->Text, powerConsumed)) {
				MessageBox::Show("Please enter a valid positive integer for Power Usage.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			this->powerConsumed = Int32::Parse(textBox1->Text);
			if (powerConsumed < 0) {
				label1->Text = "Error: power Consumed should be positive";
				return;
			}

			WeeklySceduleGeneration();
			return;
		}
		else
		{
			label1->Text = "Please select schedule type";
			return;
		}

		if (textBox1->Text == "") {
			label1->Text = "Error: Current Units cannot be empty!";
			return;
		}
		if (!Int32::TryParse(textBox1->Text, powerConsumed)) {
			MessageBox::Show("Please enter a valid positive integer for Power Usage.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		this->powerConsumed = Int32::Parse(textBox1->Text);
		if (powerConsumed < 0) {
			label1->Text = "Error: power Consumed should be positive";
			return;
		}

		// development notes
		// schedule type, meter phase type, peak hours, targetPowerUnits, power consumed units, 
		// selectedAppliances, priority, quantity, usageDuration, appliancePower
	
		// peak hours, selectedAppliances, priority, quatity, usageDuration (assumed to be 1h), appliancePower

		std::vector<std::tuple<int, int, int, float,int>> appliances;
		dbManager db;
		db.open("test.db");
		if (db.getApplianceCount(userID) == 0) {
			label1->Text = "Error: No Appliances selected";
			return;
		}
		db.setConsumedUnits(userID, powerConsumed);

		db.getScheduleGenData(userID, appliances);
		float sum = calculateTotalPower(appliances);
		int applianceCount = db.getApplianceCount(userID);


		std::tuple<int, int, int, float, int, int, int>** schedule = new std::tuple<int, int, int, float, int, int, int>* [applianceCount];

		for (int i = 0; i < applianceCount; ++i) {
			schedule[i] = new std::tuple<int, int, int, float, int, int, int>[5];  // Allocating memory for each tuple
		}


 		for (int i = 0; i < applianceCount; i++) {
			for (int j = 0; j < 5; j++)
				schedule[i][j] = std::make_tuple(0, 0, 0, 0.00, 0, 0, 0);
		}
		int peakHourStart = db.getPeakHoursStart(userID);
		int peakHourEnd = db.getPeakHoursEnd(userID);
		int targetUnits = db.getTargetUnits(userID);

		if (powerConsumed + (30 * sum)  <= targetUnits) {
			bubbleSortPower(appliances, appliances.size());
			for (int currentCol = 0; currentCol < 5;) {
				int currMins = 0;
				int startTime = 0;
				bool isColumnFilled = false;
				bool fillPeakHours = false;
				bool terminate = false;
				for (int i = 0; i < applianceCount;i++) {
					if (appliances.empty()) {
						terminate = true;
						break;
					}
					else {
						if (currMins > 1440) {
							currentCol++;
							break;
						}
						else if (currMins <= 1440) {
							if (isColumnFilled) {
								currentCol++;
								break;
							}
						}
					}
					// code to insert before and after peak hours
					if (!fillPeakHours && (startTime < peakHourStart * 60 || startTime >= peakHourEnd * 60)) {
						auto& appliance = appliances.back();
						if (startTime + std::get<2>(appliance) > 1440) {
							fillPeakHours = true;
							i--;
						}
						else {
							std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
							std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
							std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
							std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
							std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
							std::get<5>(schedule[i][currentCol]) = startTime;
							std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
							startTime += std::get<2>(appliance);
							currMins += std::get<2>(appliance);
							appliances.pop_back();
						}
					}
					else if (!fillPeakHours && (startTime >= peakHourStart * 60)) {
						startTime = peakHourEnd * 60;
						i--;
					}
					else if (fillPeakHours) {
						// code to insert between peak hours
						startTime = peakHourStart * 60;
						while (!appliances.empty()) {
							if (startTime >= peakHourEnd * 60) {
								isColumnFilled = true;
								break;
							}
							auto& appliance = appliances.front();
							if (currMins + std::get<2>(appliance) > 1440) {
								isColumnFilled = true;
								break;
							}
							else {
								std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
								std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
								std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
								std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
								std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
								std::get<5>(schedule[i][currentCol]) = startTime;
								std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
								startTime += std::get<2>(appliance);
								currMins += std::get<2>(appliance);
								appliances.erase(appliances.begin());
								i++;
							}
						}
					}
				}
				if (terminate)
					break;
				if (isColumnFilled) {
					currentCol++;
				}
			}
		}
		else {
			MessageBox::Show("You are currently over budget with the selected appliances", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			bubbleSortPower(appliances, appliances.size());
			for (int currentCol = 0; currentCol < 5;) {
				int currMins = 0;
				int startTime = 0;
				bool isColumnFilled = false;
				bool fillPeakHours = false;
				bool terminate = false;
				for (int i = 0; i < applianceCount; i++) {
					if (appliances.empty()) {
						terminate = true;
						break;
					}
					else {
						if (currMins > 1440) {
							currentCol++;
							break;
						}
						else if (currMins <= 1440) {
							if (isColumnFilled) {
								currentCol++;
								isColumnFilled = false;
								break;
							}
						}
					}
					// code to insert before and after peak hours
					if (!fillPeakHours && (startTime < peakHourStart * 60 || startTime >= peakHourEnd * 60)) {
						auto& appliance = appliances.back();
						if (startTime + std::get<2>(appliance) > 1440) {
							fillPeakHours = true;
							i--;
						}
						else {
							std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
							std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
							std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
							std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
							std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
							std::get<5>(schedule[i][currentCol]) = startTime;
							std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
							startTime += std::get<2>(appliance);
							currMins += std::get<2>(appliance);
							appliances.pop_back();
						}
					}
					else if (!fillPeakHours && (startTime >= peakHourStart * 60)) {
						startTime = peakHourEnd * 60;
						i--;
					}
					else if (fillPeakHours) {
						// code to insert between peak hours
						startTime = peakHourStart * 60;
						while (!appliances.empty()) {
							if (startTime >= peakHourEnd * 60) {
								isColumnFilled = true;
								break;
							}
							auto& appliance = appliances.front();
							if (currMins + std::get<2>(appliance) > 1440) {
								isColumnFilled = true;
								break;
							}
							else {
								std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
								std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
								std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
								std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
								std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
								std::get<5>(schedule[i][currentCol]) = startTime;
								std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
								startTime += std::get<2>(appliance);
								currMins += std::get<2>(appliance);
								appliances.erase(appliances.begin());
								i++;
							}
						}
					}
				}
				if (terminate)
					break;
				if (isColumnFilled) {
					currentCol++;
				}
			}
		}
		// getdate

		std::string meterType = db.getMeterPhaseType(userID);
		int meterPrice = 0;

		if (meterType == "Single") {
			meterPrice = db.getSingleMeterPrice();
		}
		else if (meterType == "Triple") {
			meterPrice = db.getTripleMeterPrice();
		}
		this->estimatedBill = this->powerConsumed * meterPrice;
		if (targetUnits - this->powerConsumed < 0) {
			this->unitsSaved = 0;
		}
		else {
			this->unitsSaved = targetUnits - powerConsumed;
		}


		DisplaySchedule(schedule, applianceCount, 5, false);
		

		if (db.getApplianceChanged() == 1) {
			// save scedule id and type and units saved
			System::String^ managedString = type;
			std::string nativeString = msclr::interop::marshal_as<std::string>(managedString);
			std::string date = getTodayDate();

			db.insertIntoSchedules(userID,nativeString, this->unitsSaved, date, this->estimatedBill);
			db.setApplianceChanged(0);
		}

		db.close();

		// print
		for (int i = 0; i < applianceCount; ++i) {
			for (int currentCol = 0; currentCol < 5; currentCol++) {
				auto& t = schedule[i][currentCol];
				std::cout << "Time: (" << convertMinutesToTime(std::get<5>(schedule[i][currentCol])) << "-" << convertMinutesToTime(std::get<6>(schedule[i][currentCol])) << "): "
					<< std::get<0>(t) << ", "
					<< std::get<1>(t) << ", "
					<< std::get<2>(t) << ", "
					<< std::get<3>(t) << ", "
					<< std::get<4>(t) << ", "
					<< std::get<5>(t) << ", "
					<< std::get<6>(t) << std::endl;
			}
		}
	}

	void generateScheduleDaily(int dayNumber, bool load) {
		std::vector<std::tuple<int, int, int, float, int>> appliances;
		dbManager db;
		db.open("test.db");
		if (db.getApplianceCount(userID, dayNumber) == 0) {
			label1->Text = "Error: No Appliances selected";
			return;
		}
		if (!load && powerConsumed != 0)
			db.setConsumedUnits(userID, powerConsumed);
		else if (powerConsumed == 0)
			this->powerConsumed = db.getConsumedUnits(userID);

		db.getScheduleGenData(userID, appliances, dayNumber);

		int applianceCount = db.getApplianceCount(userID, dayNumber);
		// print
		for (int i = 0; i < applianceCount; ++i) {
			auto& t = appliances[i];
			std::cout << std::get<0>(t) << ", "
				<< std::get<1>(t) << ", "
				<< std::get<2>(t) << ", "
				<< std::get<3>(t) << ", "
				<< std::get<4>(t) << std::endl;
		}


		float sum = calculateTotalPower(appliances);


		std::tuple<int, int, int, float, int, int, int>** schedule = new std::tuple<int, int, int, float, int, int, int>* [applianceCount];

		for (int i = 0; i < applianceCount; ++i) {
			schedule[i] = new std::tuple<int, int, int, float, int, int, int>[5];  // Allocating memory for each tuple
		}


		for (int i = 0; i < applianceCount; i++) {
			for (int j = 0; j < 5; j++)
				schedule[i][j] = std::make_tuple(0, 0, 0, 0.00, 0, 0, 0);
		}
		int peakHourStart = db.getPeakHoursStart(userID);
		int peakHourEnd = db.getPeakHoursEnd(userID);
		int targetUnits = db.getTargetUnits(userID);

		int TotaldayNumber = 0;
		if (load)
			TotaldayNumber = 30;
		else
			TotaldayNumber = 4;

		if (powerConsumed + (TotaldayNumber * sum) <= targetUnits) {
			bubbleSortPower(appliances, appliances.size());
			for (int currentCol = 0; currentCol < 5;) {
				int currMins = 0;
				int startTime = 0;
				bool isColumnFilled = false;
				bool fillPeakHours = false;
				bool terminate = false;
				for (int i = 0; i < applianceCount; i++) {
					if (appliances.empty()) {
						terminate = true;
						break;
					}
					else {
						if (currMins > 1440) {
							currentCol++;
							break;
						}
						else if (currMins <= 1440) {
							if (isColumnFilled) {
								currentCol++;
								break;
							}
						}
					}
					// code to insert before and after peak hours
					if (!fillPeakHours && (startTime < peakHourStart * 60 || startTime >= peakHourEnd * 60)) {
						auto& appliance = appliances.back();
						if (startTime + std::get<2>(appliance) > 1440) {
							fillPeakHours = true;
							i--;
						}
						else {
							std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
							std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
							std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
							std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
							std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
							std::get<5>(schedule[i][currentCol]) = startTime;
							std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
							startTime += std::get<2>(appliance);
							currMins += std::get<2>(appliance);
							appliances.pop_back();
						}
					}
					else if (!fillPeakHours && (startTime >= peakHourStart * 60)) {
						startTime = peakHourEnd * 60;
						i--;
					}
					else if (fillPeakHours) {
						// code to insert between peak hours
						startTime = peakHourStart * 60;
						while (!appliances.empty()) {
							if (startTime >= peakHourEnd * 60) {
								isColumnFilled = true;
								break;
							}
							auto& appliance = appliances.front();
							if (currMins + std::get<2>(appliance) > 1440) {
								isColumnFilled = true;
								break;
							}
							else {
								std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
								std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
								std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
								std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
								std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
								std::get<5>(schedule[i][currentCol]) = startTime;
								std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
								startTime += std::get<2>(appliance);
								currMins += std::get<2>(appliance);
								appliances.erase(appliances.begin());
								i++;
							}
						}
					}
				}
				if (terminate)
					break;
				if (isColumnFilled) {
					currentCol++;
				}
			}
		}
		else {
			MessageBox::Show("You are currently over budget with the selected appliances", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			bubbleSortPower(appliances, appliances.size());
			for (int currentCol = 0; currentCol < 5;) {
				int currMins = 0;
				int startTime = 0;
				bool isColumnFilled = false;
				bool fillPeakHours = false;
				bool terminate = false;
				for (int i = 0; i < applianceCount; i++) {
					if (appliances.empty()) {
						terminate = true;
						break;
					}
					else {
						if (currMins > 1440) {
							currentCol++;
							break;
						}
						else if (currMins <= 1440) {
							if (isColumnFilled) {
								currentCol++;
								break;
							}
						}
					}
					// code to insert before and after peak hours
					if (!fillPeakHours && (startTime < peakHourStart * 60 || startTime >= peakHourEnd * 60)) {
						auto& appliance = appliances.back();
						if (startTime + std::get<2>(appliance) > 1440) {
							fillPeakHours = true;
							i--;
						}
						else {
							std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
							std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
							std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
							std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
							std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
							std::get<5>(schedule[i][currentCol]) = startTime;
							std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
							startTime += std::get<2>(appliance);
							currMins += std::get<2>(appliance);
							appliances.pop_back();
						}
					}
					else if (!fillPeakHours && (startTime >= peakHourStart * 60)) {
						startTime = peakHourEnd * 60;
						i--;
					}
					else if (fillPeakHours) {
						// code to insert between peak hours
						startTime = peakHourStart * 60;
						while (!appliances.empty()) {
							if (startTime >= peakHourEnd * 60) {
								isColumnFilled = true;
								break;
							}
							auto& appliance = appliances.front();
							if (currMins + std::get<2>(appliance) > 1440) {
								isColumnFilled = true;
								break;
							}
							else {
								std::get<0>(schedule[i][currentCol]) = std::get<0>(appliance);
								std::get<1>(schedule[i][currentCol]) = std::get<1>(appliance);
								std::get<2>(schedule[i][currentCol]) = std::get<2>(appliance);
								std::get<3>(schedule[i][currentCol]) = std::get<3>(appliance);
								std::get<4>(schedule[i][currentCol]) = std::get<4>(appliance);
								std::get<5>(schedule[i][currentCol]) = startTime;
								std::get<6>(schedule[i][currentCol]) = startTime + std::get<2>(appliance);
								startTime += std::get<2>(appliance);
								currMins += std::get<2>(appliance);
								appliances.erase(appliances.begin());
								i++;
							}
						}
					}
				}
				if (terminate)
					break;
				if (isColumnFilled) {
					currentCol++;
				}
			}
		}
		// getdate

		if (load)
			this->powerConsumed = db.getConsumedUnits(userID);

		std::string meterType = db.getMeterPhaseType(userID);
		int meterPrice = 0;

		if (meterType == "Single") {
			meterPrice = db.getSingleMeterPrice();
		}
		else if (meterType == "Triple") {
			meterPrice = db.getTripleMeterPrice();
		}
		this->estimatedBill = this->powerConsumed * meterPrice;
		if (targetUnits - this->powerConsumed < 0) {
			this->unitsSaved = 0;
		}
		else {
			this->unitsSaved = targetUnits - powerConsumed;
		}

		if (!load)
			DisplaySchedule(schedule, applianceCount, 5, true);
		else
			DisplaySchedule(schedule, applianceCount, 5, false);

		if (!load) {
			if (db.getApplianceChanged() == 1) {
				// save scedule id and type and units saved
				System::String^ managedString = type;
				std::string nativeString = msclr::interop::marshal_as<std::string>(managedString);
				std::string date = getTodayDate();

				db.insertIntoSchedules(userID, nativeString, this->unitsSaved, date, this->estimatedBill);
				db.setApplianceChanged(0);
			}
		}
		db.close();


		for (int i = 0; i < applianceCount; ++i) {
			for (int currentCol = 0; currentCol < 5; currentCol++) {
				auto& t = schedule[i][currentCol];
				std::cout << "Time: (" << convertMinutesToTime(std::get<5>(schedule[i][currentCol])) << "-" << convertMinutesToTime(std::get<6>(schedule[i][currentCol])) << "): "
					<< std::get<0>(t) << ", "
					<< std::get<1>(t) << ", "
					<< std::get<2>(t) << ", "
					<< std::get<3>(t) << ", "
					<< std::get<4>(t) << ", "
					<< std::get<5>(t) << ", "
					<< std::get<6>(t) << std::endl;
			}
		}
	}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	button11->BringToFront();
	button12->BringToFront();
	button13->BringToFront();
	button14->BringToFront();
	button3->BringToFront();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	button9->BackgroundImage = System::Drawing::Image::FromFile("Images/sg-weekly.png");
	button9->Tag = "1";
	button8->BackgroundImage = nullptr;
	button8->Tag = nullptr;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHistory();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHome();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHome();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHistory();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showAppliances();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showAppliances();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showSettings();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showSettings();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showLogin();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showLogin();
}

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showLogin();
}
	   // monday
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(1, false);
}
	   // tuesday
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(2, false);
}
	   // wednesday
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(3, false);
}
	   // thursday
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(4, false);
}
	  // friday
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(5, false);
}
	   // saturday
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(6, false);
}
	   // sunday
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(7, false);
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	button11->BringToFront();
	button12->BringToFront();
	button13->BringToFront();
	button14->BringToFront();
	button3->BringToFront();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
	panel1->Show();
}
};
}
