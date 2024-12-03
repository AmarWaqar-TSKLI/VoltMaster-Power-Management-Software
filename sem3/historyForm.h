#pragma once
#include<string>
#include"db.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <tuple>
#include <msclr/marshal.h>
#include <sstream>
#include <iomanip>
#include "nav.h"

namespace sem3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for historyForm
	/// </summary>
	public ref class historyForm : public System::Windows::Forms::Form
	{
	public:
		int userId;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	public:
		historyForm(int userid)
		{
			InitializeComponent();
			this->userId = userid;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~historyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(historyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(49, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 39);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &historyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(56, 538);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 39);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &historyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(55, 625);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 39);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &historyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(56, 369);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 39);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &historyForm::button4_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(44, 817);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(137, 40);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &historyForm::button7_Click);
			// 
			// historyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1385, 912);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"historyForm";
			this->Text = L"historyForm";
			this->Load += gcnew System::EventHandler(this, &historyForm::historyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		nav::getInstance()->showHome();
	}

	
	public:
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

		void DisplaySchedule(std::tuple<int, int, int, float, int, int, int>** schedule, int rowSize, int colSize, int sid) {
			// Create the dynamic panel
			Panel^ dynamicPanel2 = gcnew Panel();
			dynamicPanel2->Visible = true;
			dynamicPanel2->Size = System::Drawing::Size(1440, 950);
			dynamicPanel2->Location = System::Drawing::Point(0, 0); // Ensure it's positioned at the top-left of the form

			// Set the background image if it exists
			String^ imagePath = "Images/History-Scedule-Show.jpg"; // Update your path
			if (System::IO::File::Exists(imagePath)) {
				dynamicPanel2->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
				dynamicPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				//dynamicPanel->BackgroundImageLayout = ImageLayout::Stretch;
			}
			else {
				MessageBox::Show("Background image not found at path: " + imagePath, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}




			Panel^ dynamicPanel = gcnew Panel();
			dynamicPanel->Visible = true;
			dynamicPanel->Size = System::Drawing::Size(781, 768);
			dynamicPanel->Location = System::Drawing::Point(618, 105); // Ensure it's positioned at the top-left of the form
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

			std::string date = db.getScheduleDate(userId, sid);
			std::cout << date << std::endl;
			Label^ labelDate = gcnew Label();
			String^ dateName = gcnew String(date.c_str());
			// String^ managedApplianceName = msclr::interop::marshal_as<String^>(applianceName);

			// Set the label text
			labelDate->Text = dateName;
			labelDate->Location = System::Drawing::Point(393, 620);
			labelDate->AutoSize = true;
			labelDate->ForeColor = System::Drawing::Color::White;
			labelDate->Font = gcnew System::Drawing::Font("Syne", 14.0f, FontStyle::Bold);
			labelDate->BackColor = System::Drawing::Color::Transparent;
			dynamicPanel2->Controls->Add(labelDate);
			labelDate->Visible = true;
			labelDate->BringToFront();
			


			// Iterate through the schedule tuples
			for (int i = 0; i < rowSize; ++i) {
				for (int currentCol = 0; currentCol < colSize; currentCol++) {
					auto& t = schedule[i][currentCol];
					if (std::get<0>(t) == 0)
						continue;

					// Create the first label (get<0>(schedule[i]))
					Label^ label1 = gcnew Label();
					String^ managedApplianceName;
				
					const char* applianceName = db.getApplianceName(userId, sid, std::get<0>(schedule[i][currentCol]), managedApplianceName);
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

		// Function to calculate the power consumption of an appliance
		float calculatePowerConsumption(float appliancePower, float applianceDuration, float applianceQuantity) {
			return ((appliancePower * applianceDuration / 60) / 3600) * applianceQuantity;
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

		void generateSchedule(int sid) {
			dbManager db;
			db.open("test.db");
			std::vector<std::tuple<int, int, int, float, int>> appliances;
			db.getScheduleGenDataForHistory(userId, sid, appliances);
			float sum = calculateTotalPower(appliances);
			int applianceCount = db.getApplianceCountForHistory(userId, sid);


			std::tuple<int, int, int, float, int, int, int>** schedule = new std::tuple<int, int, int, float, int, int, int>* [applianceCount];

			for (int i = 0; i < applianceCount; ++i) {
				schedule[i] = new std::tuple<int, int, int, float, int, int, int>[5];  // Allocating memory for each tuple
			}


			for (int i = 0; i < applianceCount; i++) {
				for (int j = 0; j < 5; j++)
					schedule[i][j] = std::make_tuple(0, 0, 0, 0.00, 0, 0, 0);
			}
			int peakHourStart = db.getPeakHoursStart(userId);
			int peakHourEnd = db.getPeakHoursEnd(userId);
			int targetUnits = db.getTargetUnits(userId);

			if ((30 * sum) <= targetUnits) {
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
			DisplaySchedule(schedule, applianceCount, 5, sid);

		}




	private: System::Void viewMoreBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = safe_cast<Button^>(sender); // Cast sender to Button^
		int sid = safe_cast<int>(clickedButton->Tag);
		generateSchedule(sid);
	}
	private: System::Void historyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dbManager db;
		db.open("test.db");
		bool isEmpty = false;
		int maxScedule = db.getCurrentSID(userId, isEmpty);
		if (isEmpty) {
			// here show that there has been no scedule generated
			Label^ Error = gcnew Label();

			Error->Text = "No scedule has been generated yet";
			Error->Location = System::Drawing::Point(200, 200);
			Error->ForeColor = System::Drawing::Color::White;
			Error->Font = gcnew System::Drawing::Font("Syne", 16.0f, FontStyle::Bold);
			Error->BackColor = System::Drawing::Color::Transparent;

			Error->Visible = true;
			Error->BringToFront();
			Error->Controls->Add(Error);


			return;
		}
		
		Panel^ dynamicPanel = gcnew Panel();
		dynamicPanel->Visible = true;
		dynamicPanel->Size = System::Drawing::Size(1074, 713 - 49);

		dynamicPanel->Location = System::Drawing::Point(321, 149); // Ensure it's positioned at the top-left of the form
		dynamicPanel->BackColor = System::Drawing::Color::Transparent;
		// Set the background image if it exists
		//String^ imagePath = "Images/sg- exists.jpg"; // Update your path
		dynamicPanel->AutoScroll = true;

		this->Controls->Add(dynamicPanel);
		dynamicPanel->BringToFront();



		int startx = 100;
		int startY = -30;
		int xGap = 20;
		int yGap = 70;
		for (int i = 1; i <= maxScedule; i++) {
			// scedule id label
			Label^ sceduleIdLabel = gcnew Label();

			sceduleIdLabel->Text = (i).ToString();
			sceduleIdLabel->Location = System::Drawing::Point(startx, (startY + (i * yGap)));
			sceduleIdLabel->ForeColor = System::Drawing::Color::White;
			sceduleIdLabel->Font = gcnew System::Drawing::Font("Syne", 16.0f, FontStyle::Bold);
			sceduleIdLabel->BackColor = System::Drawing::Color::Transparent;
			
			sceduleIdLabel->Visible = true;
			sceduleIdLabel->BringToFront();
			dynamicPanel->Controls->Add(sceduleIdLabel);


			int unitsSaved = 0;
			string type = "";
			// i is scedule id
			db.getScheduleTypeAndSavedUnits(userId, i, unitsSaved, type);

			// scedule type label
			Label^ sceduleTypeLabel = gcnew Label();
			sceduleTypeLabel->Text = msclr::interop::marshal_as<System::String^>(type);
			sceduleTypeLabel->Location = System::Drawing::Point(startx + 260, startY + (i * yGap));
			sceduleTypeLabel->ForeColor = System::Drawing::Color::White;
			sceduleTypeLabel->Font = gcnew System::Drawing::Font("Syne", 16.0f, FontStyle::Bold);
			sceduleTypeLabel->BackColor = System::Drawing::Color::Transparent;

			sceduleTypeLabel->Visible = true;
			sceduleTypeLabel->BringToFront();
			dynamicPanel->Controls->Add(sceduleTypeLabel);

			// unitsSaved label
			Label^ sceduleUnitSvdLabel = gcnew Label();
			sceduleUnitSvdLabel->Text = unitsSaved.ToString();
			sceduleUnitSvdLabel->Location = System::Drawing::Point(startx + 520, (startY + (i * yGap)));
			sceduleUnitSvdLabel->ForeColor = System::Drawing::Color::White;
			sceduleUnitSvdLabel->Font = gcnew System::Drawing::Font("Syne", 16.0f, FontStyle::Bold);
			sceduleUnitSvdLabel->BackColor = System::Drawing::Color::Transparent;

			sceduleUnitSvdLabel->Visible = true;
			sceduleUnitSvdLabel->BringToFront();
			dynamicPanel->Controls->Add(sceduleUnitSvdLabel);


			// view button
			Button^ viewMoreBtn;
			viewMoreBtn = gcnew Button();
			viewMoreBtn->Text = "";
			viewMoreBtn->BackgroundImage = System::Drawing::Image::FromFile("Images/history-View.png");
			viewMoreBtn->Location = System::Drawing::Point(720, ((i * (yGap)) - 35));
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
			viewMoreBtn->Tag = i;
			// Assign click event handler
			viewMoreBtn->Click += gcnew System::EventHandler(this, &historyForm::viewMoreBtn_Click);
			dynamicPanel->Controls->Add(viewMoreBtn);
		}
		db.close();
		// here get max scedule id
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		nav::getInstance()->showAppliances();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showSettings();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showSchedules();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showLogin();
}
};
}
