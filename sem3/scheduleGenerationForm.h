#pragma once
#include "db.h"
#include <iostream>
#include <string>
#include <tuple>

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
			this->button1->Location = System::Drawing::Point(298, 716);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 45);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
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
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Syne SemiBold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(328, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 32);
			this->label1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Syne SemiBold", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(955, 277);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 39);
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
		if (db.getCurrentSID(userID) == 0) {
			this->BackgroundImage = System::Drawing::Image::FromFile("Images/sg- notExists.jpg");

		}
		else {
			this->BackgroundImage = System::Drawing::Image::FromFile("Images/sg- exists.jpg");
			this->button1->Location = System::Drawing::Point(298, 716);
		}
		db.close();
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		button8->BackgroundImage = System::Drawing::Image::FromFile("Images/sg-daily.png");
	}
	
	
	// Function to calculate the power consumption of an appliance
	float calculatePowerConsumption(float appliancePower, float applianceDuration, float applianceQuantity) {
		return ((appliancePower * applianceDuration) / 3600 ) * applianceQuantity;
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

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->powerConsumed= Int32::Parse(textBox1->Text);
		if (button8->BackgroundImage == System::Drawing::Image::FromFile("Images/sg-daily.png")) {
			this->type = "daily";
		}
		//else if (nullptr){
		//	// weekly
		//}
		else {
			label1->Text = "Error: Select from Daily or Weekly Schedule Type";
		}
		// validation ----------------------------------------


		// schedule type, meter phase type, peak hours, targetPowerUnits, power consumed units, 
		// selectedAppliances, priority, quantity, usageDuration, appliancePower
	
		// peak hours, selectedAppliances, priority, quatity, usageDuration (assumed to be 1h), appliancePower

		// BISMILLAH
		std::vector<std::tuple<int, int, int, float,int>> appliances;
		dbManager db;
		db.open("test.db");
		db.getScheduleGenData(userID, appliances);
		float sum = calculateTotalPower(appliances);

		std::tuple<int, int, int, int, int > schedule[24];
		for (int i = 0; i < 24; i++) {
			schedule[i] = std::make_tuple(0, 0, 0, 0, 0);
		}
		int peakHourStart = db.getPeakHoursStart(userID);
		int peakHourEnd = db.getPeakHoursEnd(userID);
		int targetUnits = db.getTargetUnits(userID);

		if (sum  <= targetUnits && appliances.size() <= 24) {
			bubbleSortPower(appliances, appliances.size());
			int size = appliances.size();
			int index = 0;
			for (int i = 0; i < size; i++) {
				if (index == 24) {
					break;
				}
				if (index < peakHourStart || index >= peakHourEnd) {
					schedule[index++] = appliances.back();
					appliances.pop_back();
				}
				else if(index == peakHourStart) {
					index += (peakHourEnd - peakHourStart);
					i--;
				}
			}

			int i = 0;
			while (!appliances.empty()) {
				schedule[peakHourStart + i] = appliances.front();
				appliances.erase(appliances.begin());
				i++;
			}
		}
		else {
			bubbleSortPriority(appliances, appliances.size());
			while (calculateTotalPower(appliances) > targetUnits || appliances.size() > 24) {
				appliances.pop_back();
			}

			bubbleSortPower(appliances, appliances.size());
			int size = appliances.size();
			int index = 0;
			for (int i = 0; i < size; i++) {
				if (index == 24) {
					break;
				}
				if (index < peakHourStart || index >= peakHourEnd) {
					schedule[index++] = appliances.back();
					appliances.pop_back();
				}
				else if (index == peakHourStart) {
					index += (peakHourEnd - peakHourStart);
					i--;
				}
			}

			int i = 0;
			while (!appliances.empty()) {
				schedule[peakHourStart + i] = appliances.front();
				appliances.erase(appliances.begin());
				i++;
			}
		}


		// print
		for (int i = 0; i < 24; ++i) {
			auto& t = schedule[i];
			std::cout << "Time: (" << i << "-" << i+1<< "): "
				<< std::get<0>(t) << ", "
				<< std::get<1>(t) << ", "
				<< std::get<2>(t) << ", "
				<< std::get<3>(t) << ", "
				<< std::get<4>(t) << std::endl;
		}
	}
};
}
