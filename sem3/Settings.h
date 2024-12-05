#pragma once
#include "db.h"
#include <msclr/marshal_cppstd.h>
#include "nav.h"

namespace sem3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		int userID;
		int targetedUnits;
		int peakStart;
		int peakEnd;
		String^ meterPhase;
	private: System::Windows::Forms::Button^ button4;
	public:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button3;
	public:
		Settings(int userID)
		{
			InitializeComponent();
			this->userID = userID;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(954, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 37);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(954, 302);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(339, 37);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(954, 453);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(339, 37);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(952, 602);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(177, 37);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Settings::button8_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1143, 601);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 37);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Settings::button2_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(677, 791);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(266, 45);
			this->button7->TabIndex = 10;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Settings::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(330, 695);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(56, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 39);
			this->button3->TabIndex = 12;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Settings::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(55, 811);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 40);
			this->button4->TabIndex = 15;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Settings::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(55, 362);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 40);
			this->button5->TabIndex = 14;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Settings::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(55, 523);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 40);
			this->button6->TabIndex = 13;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Settings::button6_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(56, 286);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 39);
			this->button9->TabIndex = 16;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Settings::button9_Click);
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 911);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(1440, 950);
			this->MinimumSize = System::Drawing::Size(1440, 950);
			this->Name = L"Settings";
			this->Text = L"Settings";
			this->Load += gcnew System::EventHandler(this, &Settings::Settings_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if the fields are empty and show appropriate error messages
		if (textBox1->Text == "") {
			label1->Text = "Targeted Power Units field cannot be empty!";
			return;
		}
		if (textBox2->Text == "") {
			label1->Text = "Peak Hours Start Interval field cannot be empty!";
			return;
		}
		if (textBox3->Text == "") {
			label1->Text = "Peak Hours End Interval field cannot be empty!";
			return;
		}

		// Validate the values in textBox1, textBox2, and textBox3 are valid integers
		int targetedUnits, peakStart, peakEnd;

		// Try parsing the text inputs into integers
		if (!Int32::TryParse(textBox1->Text, targetedUnits) || targetedUnits <= 0) {
			label1->Text = "Please enter a valid positive integer for Targeted Power Units.";
			return;
		}
		if (!Int32::TryParse(textBox2->Text, peakStart) || peakStart < 0 || peakStart > 24) {
			label1->Text = "Please enter a valid integer for Peak Hours Start Interval (0-24).";
			return;
		}
		if (!Int32::TryParse(textBox3->Text, peakEnd) || peakEnd < 0 || peakEnd > 24) {
			label1->Text = "Please enter a valid integer for Peak Hours End Interval (0-24).";
			return;
		}

		// Ensure peakStart is less than peakEnd
		if (peakStart >= peakEnd) {
			label1->Text = "Peak Hours Start Interval must be less than Peak Hours End Interval.";
			return;
		}

		// Check if the Meter Phase type is selected
		if (button8->Tag != "1" && button2->Tag != "1") {
			label1->Text = "Meter Phase type needs to be selected";
			return;
		}

		// If everything is valid, proceed to save the values
		this->targetedUnits = targetedUnits;
		this->peakStart = peakStart;
		this->peakEnd = peakEnd;

		// Convert managed string to std::string
		System::String^ managedString = meterPhase;
		std::string meterPhaseType = msclr::interop::marshal_as<std::string>(managedString);

		dbManager db;
		db.open("test.db");
		db.setTargetUnits(userID, targetedUnits);
		db.setPeakHoursStart(userID, peakStart);
		db.setPeakHoursEnd(userID, peakEnd);
		db.setMeterPhaseType(userID, meterPhaseType);
		db.close();

		// Display success message
		label1->ForeColor = System::Drawing::Color::Green;
		label1->Text = "Saved Successfully!";
	}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	button8->BackgroundImage = System::Drawing::Image::FromFile("Images/settings-single.png");
	button8->Tag = "1";
	this->meterPhase = "Single";

	
	button2->BackgroundImage = nullptr;
	
	button2->Tag = nullptr;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->BackgroundImage = System::Drawing::Image::FromFile("Images/settings-triple.png");
	button2->Tag = "1";
	this->meterPhase = "Triple";

	button8->BackgroundImage = nullptr;
	
	button8->Tag = nullptr;
	
}
private: System::Void Settings_Load(System::Object^ sender, System::EventArgs^ e) {
	dbManager db;
	db.open("test.db");
	
	int targetedUnits = db.getTargetUnits(userID);
	int peakHourStart = db.getPeakHoursStart(userID);
	int peakHourEnd = db.getPeakHoursEnd(userID);
	std::string meterPhaseType = db.getMeterPhaseType(userID);

	System::String^ targetedUnitsMarshal = System::Convert::ToString(targetedUnits);
	System::String^ peakHourStartMarshal = System::Convert::ToString(peakHourStart);
	System::String^ peakHourEndMarshal = System::Convert::ToString(peakHourEnd);

	textBox1->Text = targetedUnitsMarshal;
	textBox2->Text = peakHourStartMarshal;
	textBox3->Text = peakHourEndMarshal;


	if (meterPhaseType == "Single") {
		button8->BackgroundImage = System::Drawing::Image::FromFile("Images/settings-single.png");
		button8->Tag = "1";
		this->meterPhase = "Single";
	}
	
	else if (meterPhaseType == "Triple") {
		button2->BackgroundImage = System::Drawing::Image::FromFile("Images/settings-triple.png");
		button2->Tag = "1";
		this->meterPhase = "Triple";
	}
	db.close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHistory();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHome();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showSchedules();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showAppliances();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showLogin();
}
};
}
