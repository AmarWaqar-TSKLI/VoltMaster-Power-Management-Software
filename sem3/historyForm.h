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
		int powerConsumed;
		int estimatedBill;
		int unitsSaved;
		int weeklySID;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button4;
	public:
		historyForm(int userid)
		{
			InitializeComponent();
			this->userId = userid;
			panel1->Parent = this;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
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
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1385, 912);
			this->panel1->TabIndex = 9;
			this->panel1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(652, 791);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 43);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &historyForm::pictureBox1_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(1066, 154);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(260, 47);
			this->button20->TabIndex = 27;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &historyForm::button20_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(1068, 608);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(260, 47);
			this->button25->TabIndex = 33;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &historyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(1067, 532);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(260, 47);
			this->button26->TabIndex = 32;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &historyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(1066, 456);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(260, 47);
			this->button27->TabIndex = 31;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &historyForm::button27_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(1069, 382);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(260, 47);
			this->button22->TabIndex = 30;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &historyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(1068, 306);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(260, 47);
			this->button23->TabIndex = 29;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &historyForm::button23_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(1067, 230);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(260, 47);
			this->button21->TabIndex = 28;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &historyForm::button21_Click);
			// 
			// historyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1385, 912);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"historyForm";
			this->Text = L"historyForm";
			this->Load += gcnew System::EventHandler(this, &historyForm::historyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

		void historyForm::OnPrevButtonClickedWeekly(Object^ sender, EventArgs^ e)
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


		void DisplaySchedule(std::tuple<int, int, int, float, int, int, int>** schedule, int rowSize, int colSize, int sid, bool isWeekly) {
			// Create the dynamic panel
			Panel^ dynamicPanel2 = gcnew Panel();
			dynamicPanel2->Visible = true;
			dynamicPanel2->Size = System::Drawing::Size(1440, 950);
			dynamicPanel2->Location = System::Drawing::Point(0, 0); // Ensure it's positioned at the top-left of the form

			// Set the background image if it exists
			String^ imagePath;
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
			int currentSchedule = sid;
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
			int startX = 80;            // Initial X position
			int startY = 30;            // Initial Y position
			int labelOffsetX = 150;      // Space between labels in the same row (increased for clarity)
			int labelSpacingY = 10;      // Space between rows (increased for better spacing)

			// showing date

			std::string date = db.getScheduleDate(userId, sid);
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
			prevBtn->Click += gcnew System::EventHandler(this, &historyForm::OnPrevButtonClickedWeekly);
			prevBtn->Visible = true;
			prevBtn->BringToFront();
			dynamicPanel2->Controls->Add(prevBtn);


			button1->BringToFront();
			button2->BringToFront();
			button3->BringToFront();
			button4->BringToFront();
			button7->BringToFront();
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

	void generateSchedule(int sid, bool weekly) {
		dbManager db;
		db.open("test.db");
		std::vector<std::tuple<int, int, int, float, int>> appliances;
		db.getScheduleGenDataForHistory(userId, sid, appliances);
		this->powerConsumed = db.getConsumedUnits(userId);
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

		int dayNumber;
		if (weekly)
			dayNumber = 30;
		else
			dayNumber = 4;

		if (powerConsumed + (dayNumber * sum) <= targetUnits) {
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

		std::string meterType = db.getMeterPhaseType(userId);
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

		if (!weekly)
			DisplaySchedule(schedule, applianceCount, 5, sid, true);
		else
			DisplaySchedule(schedule, applianceCount, 5, sid, false);

		db.close();
	}


	void generateScheduleDaily(int dayNumber, int sid, bool load) {
		std::vector<std::tuple<int, int, int, float, int>> appliances;
		dbManager db;
		db.open("test.db");
		if (db.getApplianceCount(userId, dayNumber) == 0) {
			return;
		}
		if (!load && powerConsumed != 0)
			db.setConsumedUnits(userId, powerConsumed);
		else if (powerConsumed == 0)
			this->powerConsumed = db.getConsumedUnits(userId);

		db.getScheduleGenData(userId, appliances, dayNumber);

		int applianceCount = db.getApplianceCount(userId, dayNumber);
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
		int peakHourStart = db.getPeakHoursStart(userId);
		int peakHourEnd = db.getPeakHoursEnd(userId);
		int targetUnits = db.getTargetUnits(userId);

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
			this->powerConsumed = db.getConsumedUnits(userId);

		std::string meterType = db.getMeterPhaseType(userId);
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
			DisplaySchedule(schedule, applianceCount, 5, sid, true);
		else
			DisplaySchedule(schedule, applianceCount, 5, sid, false);

		db.close();
	}

	private: System::Void viewMoreBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = safe_cast<Button^>(sender); // Cast sender to Button^
		int sid = safe_cast<int>(clickedButton->Tag);
		int unitSaved;
		std::string scheduleType;
		dbManager db;
		db.open("test.db");
		db.getScheduleTypeAndSavedUnits(userId, sid, unitSaved, scheduleType);

		if (scheduleType == "daily")
			generateSchedule(sid, false);
		else {
			this->weeklySID = sid;
			panel1->Show();
			panel1->BringToFront();
		}
			
	}
	private: System::Void historyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dbManager db;
		db.open("test.db");
		bool isEmpty = false;
		int maxScedule = db.getCurrentSID(userId, isEmpty);
		if (maxScedule == 1 && isEmpty) {
			MessageBox::Show("No History Available", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else {
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
		}
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
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(1, weeklySID, false);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(2, weeklySID, false);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(3, weeklySID, false);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(4, weeklySID, false);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(5, weeklySID, false);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(6, weeklySID, false);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	generateScheduleDaily(7, weeklySID, false);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
}
};
}
