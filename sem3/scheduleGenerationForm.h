#pragma once
#include "db.h"
#include <iostream>
#include <string>
#include <msclr/marshal.h>
#include <sstream>
#include <iomanip>
#include <msclr/marshal_cppstd.h>
#include <vector>
#include <tuple>
#include <utility>
#include "nav.h"

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
		Panel^ dynamicPanelGen;
		void OnNextButtonClick(System::Object^ sender, System::EventArgs^ e);
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button10;
	public:
		String^ type;
		scheduleGenerationForm(int userID)
		{
			InitializeComponent();
			this->userID = userID;
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
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
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
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1424, 911);
			this->panel1->TabIndex = 1;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &scheduleGenerationForm::panel1_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(50, 804);
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
			this->button11->Location = System::Drawing::Point(64, 283);
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
			this->button12->Location = System::Drawing::Point(64, 447);
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
			this->button13->Location = System::Drawing::Point(64, 529);
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
			this->button14->Location = System::Drawing::Point(64, 613);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(111, 36);
			this->button14->TabIndex = 11;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button14_Click);
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
			this->button9->Size = System::Drawing::Size(177, 37);
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
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(63, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 36);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(63, 451);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 36);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(63, 533);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(124, 36);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(63, 617);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 36);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button6_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(49, 808);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(137, 40);
			this->button10->TabIndex = 7;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::button10_Click);
			// 
			// scheduleGenerationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 911);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->MaximumSize = System::Drawing::Size(1440, 950);
			this->MinimumSize = System::Drawing::Size(1440, 950);
			this->Name = L"scheduleGenerationForm";
			this->Text = L"scheduleGenerationForm";
			this->Load += gcnew System::EventHandler(this, &scheduleGenerationForm::scheduleGenerationForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

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
			BackgroundImage = System::Drawing::Image::FromFile("Images/sg- exists.jpg");
			button1->Location = System::Drawing::Point(298, 716);
			panel1->Visible = false;
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



	void DisplaySchedule(std::tuple<int, int, int, float, int, int, int>** schedule, int rowSize, int colSize) {
		// Create the dynamic panel
		Panel^ dynamicPanel2 = gcnew Panel();
		dynamicPanel2->Visible = true;
		dynamicPanel2->Size = System::Drawing::Size(1440, 950);
		dynamicPanel2->Location = System::Drawing::Point(0, 0); // Ensure it's positioned at the top-left of the form

		// Set the background image if it exists
		String^ imagePath = "Images/sg- exists.jpg"; // Update your path
		if (System::IO::File::Exists(imagePath)) {
			dynamicPanel2->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
			//dynamicPanel->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else {
			MessageBox::Show("Background image not found at path: " + imagePath, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		Label^ labelcurr = gcnew Label();
		
		// String^ managedApplianceName = msclr::interop::marshal_as<String^>(applianceName);

		// Set the label text
		labelcurr->Text = powerConsumed.ToString();
		labelcurr->Location = System::Drawing::Point(380, 185);
		labelcurr->AutoSize = true;
		labelcurr->ForeColor = System::Drawing::Color::White;
		labelcurr->Font = gcnew System::Drawing::Font("Syne", 18.0f, FontStyle::Bold);
		labelcurr->BackColor = System::Drawing::Color::Transparent;
		dynamicPanel2->Controls->Add(labelcurr);
		labelcurr->Visible = true;
		labelcurr->BringToFront();
		dbManager db;
		db.open("test.db");
		int units = 0;
		int bill = 0;
		db.gettargetunitsestimatedbill(userID, units, bill);
		Label^ labelbill = gcnew Label();

		// String^ managedApplianceName = msclr::interop::marshal_as<String^>(applianceName);

		// Set the label text
		labelbill->Text = bill.ToString();
		labelbill->Location = System::Drawing::Point(410, 355);
		labelbill->AutoSize = true;
		labelbill->ForeColor = System::Drawing::Color::White;
		labelbill->Font = gcnew System::Drawing::Font("Syne", 18.0f, FontStyle::Bold);
		labelbill->BackColor = System::Drawing::Color::Transparent;
		dynamicPanel2->Controls->Add(labelbill);
		labelbill->Visible = true;
		labelbill->BringToFront();

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
		int startX = 40;            // Initial X position
		int startY = 30;            // Initial Y position
		int labelSpacingY = 80;      // Space between rows (increased for better spacing)
		int labelOffsetX = 150;      // Space between labels in the same row (increased for clarity)

		// showing date

		std::string date = getTodayDate();
		std::cout << date << std::endl;
		Label^ labelDate = gcnew Label();
		String^ dateName = gcnew String(date.c_str());
		// String^ managedApplianceName = msclr::interop::marshal_as<String^>(applianceName);

		// Set the label text
		labelDate->Text = dateName;
		labelDate->Location = System::Drawing::Point(383, 620);
		labelDate->AutoSize = true;
		labelDate->ForeColor = System::Drawing::Color::White;
		labelDate->Font = gcnew System::Drawing::Font("Syne", 14.0f, FontStyle::Bold);
		labelDate->BackColor = System::Drawing::Color::Transparent;
		dynamicPanel2->Controls->Add(labelDate);
		labelDate->Visible = true;
		labelDate->BringToFront();
		// Create the second label (get<3>(schedule[i]))

		
		// Iterate through the schedule tuples
		for (int i = 0; i < rowSize; ++i) {
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

				// Set the label text
				label1->Text = managedApplianceName;
				label1->Location = System::Drawing::Point(startX + 30, startY + 10 + +i * labelSpacingY);
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

				pictureBox->Location = System::Drawing::Point(startX + 293, (startY + 3) + (i * labelSpacingY));

				pictureBox->Image = System::Drawing::Image::FromFile(path + ".png"); // Provide the path to your image file

				pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;  // Other options: Normal, CenterImage, AutoSize, etc.

				Label^ label3 = gcnew Label();
				label3->Text = gcnew String((convertMinutesToTime(std::get<5>(schedule[i][currentCol])) + "-" +
					convertMinutesToTime(std::get<6>(schedule[i][currentCol]))).c_str());
				label3->Location = System::Drawing::Point(startX + 2 * labelOffsetX + 230, startY + 10 + i * labelSpacingY);
				label3->AutoSize = true;
				label3->ForeColor = System::Drawing::Color::White;
				label3->Font = gcnew System::Drawing::Font("Arial", 15.0f, FontStyle::Bold);
				label3->BackColor = System::Drawing::Color::FromArgb(67, 65, 65);
				// Add labels to the panel
				dynamicPanel->Controls->Add(label1);
				dynamicPanel->Controls->Add(pictureBox);
				dynamicPanel->Controls->Add(label3);
			}
		}
		db.close();
		// Add the dynamic panel to the form and bring it to the front
		
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
	void GetCheckedData(Control^ parentControl, std::vector<std::pair<std::string, int>>& result) {

		for each (Control ^ ctrl in parentControl->Controls) {
			// Check if the control is a CheckBox
			CheckBox^ checkBox = dynamic_cast<CheckBox^>(ctrl);
			if (checkBox != nullptr ) {
				if (checkBox->Checked) {
					// Get the associated Label from the CheckBox's Tag
					Label^ label = safe_cast<Label^>(checkBox->Tag);
					if (label != nullptr) {
						// Get the associated PictureBox from the Label's Tag
						PictureBox^ pictureBox = safe_cast<PictureBox^>(label->Tag);
						if (pictureBox != nullptr) {
							// Convert Label text (managed string) to std::string
							std::string labelText = msclr::interop::marshal_as<std::string>(label->Text);

							// Convert PictureBox Tag to int
							int pictureBoxTag = Convert::ToInt32(pictureBox->Tag);

							// Store the Label's text and PictureBox's tag as a pair
							result.push_back(std::make_pair(labelText, pictureBoxTag));
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
	std::vector<std::pair<std::string, int>> result;
	GetCheckedData(this, result);
	getApDayAndDuration(result);
	
}
// Function to collect data.
	void GetCheckedDataByDay(Control^ parentControl, std::vector<std::vector<std::tuple<int, std::string, int>>>& weeklyData) {

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

						int dayIndex = GetDayIndex(dayText);
						if (dayIndex >= 0 && dayIndex < 7) {
							int priority = Convert::ToInt32(applianceLabel->Tag);

							weeklyData[dayIndex].emplace_back(duration, applianceName, priority);
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
void scheduleGenerationForm::OnNextGenButtonClick(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Next Gen button clicked!", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	std::vector<std::vector<std::tuple<int, std::string, int>>> weeklyData(7);
	GetCheckedDataByDay(dynamicPanelGen, weeklyData);
	// Simple loop with cout-style output using Debug::WriteLine
	for (int i = 0; i < weeklyData.size(); ++i) {
		std::cout << "Day " << (i + 1) << ":\n";
		for (const auto& entry : weeklyData[i]) {
			int duration = std::get<0>(entry);
			std::string applianceName = std::get<1>(entry);
			int prior = std::get<2>(entry);
			std::cout << "  " << applianceName << " - " << "Priority: " << prior << " - " << "Duration: " << duration << " Minutes\n";
		}
	}
}

	void WeeklySceduleGeneration() {
		
			int startY = 30; // Starting Y position for TextBoxes
			int startX = 200; // X position for the first TextBox
			int verticalSpacing = 60; // Vertical space between each TextBox
			int size = 0;
			dbManager db;
			db.open("test.db");
			string* applianceData = db.getAllApplianceNames(size);
			Panel^ dynamicPanel = gcnew Panel();
			dynamicPanel->Visible = true;
			dynamicPanel->Size = System::Drawing::Size(1400, 950);

			dynamicPanel->Location = System::Drawing::Point(0,0); // Ensure it's positioned at the top-left of the form
			dynamicPanel->BackgroundImage = System::Drawing::Image::FromFile("Images/Weekly Schedule-SelectAppliances.jpg");
			// Set the background image if it exists
			//String^ imagePath = "Images/sg- exists.jpg"; // Update your path

			this->Controls->Add(dynamicPanel);
			dynamicPanel->BringToFront();



			Panel^ dynamicPanel1 = gcnew Panel();
			dynamicPanel1->Visible = true;
			dynamicPanel1->Size = System::Drawing::Size(961, 689 - 49);

			dynamicPanel1->Location = System::Drawing::Point(346, 142); // Ensure it's positioned at the top-left of the form
			dynamicPanel1->BackColor = System::Drawing::Color::FromArgb(65,65,65);
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
				label->Location = System::Drawing::Point(startX + 15, startY + (i * verticalSpacing));
				label->AutoSize = true;
				label->ForeColor = System::Drawing::Color::White;
				//label->BackColor = System::Drawing::Color::Aqua;
				label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				label->Visible = true;
				dynamicPanel1->Controls->Add(label);
				// Create a new PictureBox
				PictureBox^ pictureBox = gcnew PictureBox();
				pictureBox->Size = System::Drawing::Size(93, 36);

				pictureBox->Location = System::Drawing::Point(startX + 485, (startY - 10) + (i * verticalSpacing));

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
				checkBox->Location = System::Drawing::Point(startX - 75, (startY + 7) + (i * verticalSpacing)); // Position on the form
				checkBox->AutoSize = true;  // Automatically resize to fit the text
				checkBox->Size = System::Drawing::Size(130, 130);

				// Add an event handler for the CheckedChanged event
				//checkBox->CheckedChanged += gcnew System::EventHandler(this, &ApplianceFrom::CheckBox_CheckedChanged);

				// Add the CheckBox to the form's controls
				dynamicPanel1->Controls->Add(checkBox);
				// Label to show quantity


				checkBox->Tag = label;
				label->Tag = pictureBox;
				

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
			nextBtn->Size = System::Drawing::Size(137, 40);
			nextBtn->TabIndex = 0;
			nextBtn->UseVisualStyleBackColor = false;
			nextBtn->Click += gcnew System::EventHandler(this, &scheduleGenerationForm::OnNextButtonClick);
			nextBtn->Visible = true;
			nextBtn->BringToFront();
			dynamicPanel->Controls->Add(nextBtn);
	}

	String^ getDay(int i) {
		switch (i) {
		case 1: return "Mon";
		case 2: return "Tue";
		case 3: return "Wed";
		case 4: return "Thurs";
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
		if (day == "Thurs") return 3;
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


	void getApDayAndDuration(std::vector<std::pair<std::string, int>> appliances) {
		int startY = 30; // Starting Y position for TextBoxes
		int startX = 10; // X position for the first TextBox
		int verticalSpacing = 120; // Vertical space between each TextBox
		int HorizontalSpacing = 130; // Vertical space between each TextBox
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
		// Loop through applianceData to create TextBoxes for each appliance
		for (int i = 0; i < appliances.size(); ++i)
		{
			// Create a Label for each appliance
			Label^ label = gcnew Label();
			label->Text = gcnew System::String(appliances[i].first.c_str()); // Appliance name
			label->Location = System::Drawing::Point(startX + 400, startY + (i * verticalSpacing));
			label->AutoSize = true;
			label->ForeColor = System::Drawing::Color::White;
			label->Padding = System::Windows::Forms::Padding(10);
			label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
			label->Visible = true;
			dynamicPanel1->Controls->Add(label);


			int boxSpacey = 50;
			for (int j = 0; j < 7; j++) {
				CheckBox^ checkBox = gcnew CheckBox();

				// Set the properties of the CheckBox
				checkBox->Text = "";  // Text for the CheckBox
				checkBox->Location = System::Drawing::Point(startX + (j* HorizontalSpacing) + 40, (startY + 7) +  (i * verticalSpacing) + 40); // Position on the form
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
				label1->Text = gcnew System::String(getDay(j+1)); // Appliance name

				label1->Location = System::Drawing::Point(startX + (j * HorizontalSpacing) + 55, (startY + 7) + (i * verticalSpacing) + 35); // Position on the form
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
				txtDuration->Location = System::Drawing::Point(startX + (j * HorizontalSpacing) + 55, (startY + 7) + (i * verticalSpacing) + 35 + boxSpacey); // Position on the form
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
				label->Tag = appliances[i].second;
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
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button8->Tag=="1") {
			this->type = "daily";
		}
		if (button9->Tag=="1") {
			this->type = "weekly";
			if (textBox1->Text == "") {
				label1->Text = "Error: Current Units cannot be empty!";
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
				if (terminate)
					break;
				
			}
		}
		else {
			bubbleSortPriority(appliances, appliances.size());
			while (calculateTotalPower(appliances) > targetUnits || appliances.size() > 24) {
				appliances.pop_back();
			}

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
						if (startTime >= 1440) {
							fillPeakHours = true;
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
				if (terminate)
					break;
			}
		}
		// getdate


		DisplaySchedule(schedule, applianceCount, 5);
		

		if (db.getApplianceChanged() == 1) {
			// save scedule id and type and units saved
			System::String^ managedString = type;
			std::string nativeString = msclr::interop::marshal_as<std::string>(managedString);
			std::string date = getTodayDate();

			db.insertIntoSchedules(userID,nativeString, 0, date);
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
					<< std::get<4>(t) << std::endl;
			}
		}
	}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

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
};
}
