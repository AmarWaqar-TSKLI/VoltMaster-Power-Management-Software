#pragma once
#include "db.h"
#include <iostream>
#include <string>
#include <tuple>
#include <msclr/marshal.h>
#include <sstream>
#include <iomanip>
#include <msclr/marshal_cppstd.h>
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
	private: System::Windows::Forms::Button^ button3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(63, 367);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 36);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
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
			// 
			// scheduleGenerationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 911);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
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
		dbManager db;
		db.open("test.db");
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

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button8->Tag=="1") {
			this->type = "daily";
		}
		/*if (button8->Tag=="2") { ------------------- WEEKLY
			this->type = "weekly";
		}*/
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
};
}
