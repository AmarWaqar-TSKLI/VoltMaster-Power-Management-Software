#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "db.h"
#include <vector>
#include "nav.h"

namespace sem3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;
	

	// Example usage in a managed class:
	//System::Collections::Generic::List<MyManagedStruct^>^ managedAppliances = gcnew System::Collections::Generic::List<MyManagedStruct^>();
	/// <summary>
	/// Summary for ApplianceFrom
	/// </summary>
	public ref class ApplianceFrom : public System::Windows::Forms::Form
	{
	public:
		// Managed List to store appliance data (id, name)
		List<Tuple<int, String^>^>^ applianceData;

	private: System::Windows::Forms::Button^ button2;
	public:
		Form home;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	public:
		int userID;
		ApplianceFrom(int userID)
		{
			InitializeComponent();
			applianceData = gcnew List<Tuple<int, String^>^>(); // Initialize the list
			this->userID = userID;
		}

		// Set appliance data (converting from unmanaged vector to managed list)
		void setApplianceData(const std::vector<std::pair<int, std::string>>& data)
		{
			applianceData->Clear(); // Clear existing data
			for (const auto& item : data)
			{
				// Add appliance data to the managed List
				applianceData->Add(gcnew Tuple<int, String^>(item.first, gcnew String(item.second.c_str())));
			}
			addTextBoxesForAppliances(); // Call the method to add TextBoxes
		}
		void ApplianceFrom::OnIncreaseClick(System::Object^ sender, System::EventArgs^ e)
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

		void ApplianceFrom::OnDecreaseClick(System::Object^ sender, System::EventArgs^ e)
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

		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ApplianceFrom()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	protected:
		Button^ btnIncrease;
		Button^ btnDecrease;
		Label^ lblQuantity;
		 TextBox^ txtDuration;
		 Panel^ dynamicPanle1;
		//Label^ lblDuration;
	private: System::Windows::Forms::Button^ button1;
	protected:

		int quantity = 1;
		// Method to add TextBoxes for each appliance
		void addTextBoxesForAppliances()
		{
			int startY = 30; // Starting Y position for TextBoxes
			int startX = 115; // X position for the first TextBox
			int verticalSpacing = 60; // Vertical space between each TextBox

			// Loop through applianceData to create TextBoxes for each appliance
			for (int i = 0; i < applianceData->Count; ++i)
			{
				// Create a Label for each appliance
				Label^ label = gcnew Label();
				label->Text = applianceData[i]->Item2; // Appliance name
				label->Location = System::Drawing::Point(startX, startY + (i * verticalSpacing));
				label->AutoSize = true;
				label->ForeColor = System::Drawing::Color::White;
				//label->BackColor = System::Drawing::Color::Aqua;
				label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				this->panel1->Visible = true;
				label->Visible = true;
				this->panel1->Controls->Add(label);
				// Create a new PictureBox
				PictureBox^ pictureBox = gcnew PictureBox();
				pictureBox->Size = System::Drawing::Size(93, 36);

				pictureBox->Location = System::Drawing::Point(startX + 275, (startY - 10) + (i * verticalSpacing));

				pictureBox->Image = System::Drawing::Image::FromFile("Images/priority1.png"); // Provide the path to your image file
				pictureBox->Tag = "1";
				// Make sure the aspect ratio is maintained when the picture is resized
				pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;  // Other options: Normal, CenterImage, AutoSize, etc.
				pictureBox->Click += gcnew System::EventHandler(this, &ApplianceFrom::PictureBox_Click);
				// Add the PictureBox to the form's panel (or directly to the form)
				this->panel1->Controls->Add(pictureBox);

				CheckBox^ checkBox = gcnew CheckBox();

				// Set the properties of the CheckBox
				checkBox->Text = "";  // Text for the CheckBox
				checkBox->Location = System::Drawing::Point(startX - 75, (startY + 7) + (i * verticalSpacing)); // Position on the form
				checkBox->AutoSize = true;  // Automatically resize to fit the text
				checkBox->Size = System::Drawing::Size(130, 130);

				// Add an event handler for the CheckedChanged event
				checkBox->CheckedChanged += gcnew System::EventHandler(this, &ApplianceFrom::CheckBox_CheckedChanged);

				// Add the CheckBox to the form's controls
				this->panel1->Controls->Add(checkBox);
				// Label to show quantity
				lblQuantity = gcnew Label();
				lblQuantity->Text = quantity.ToString();
				lblQuantity->Location = System::Drawing::Point(startX + 484, (startY - 7) + (i * verticalSpacing));
				lblQuantity->Size = System::Drawing::Size(80, 30);
				lblQuantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				lblQuantity->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				lblQuantity->ForeColor = System::Drawing::Color::White;

				//Increase btn
				btnIncrease = gcnew Button();
				btnIncrease->Text = "+";
				btnIncrease->Location = System::Drawing::Point(startX + 550, (startY - 7) + (i * verticalSpacing));
				btnIncrease->Size = System::Drawing::Size(40, 30);
				btnIncrease->Click += gcnew System::EventHandler(this, &ApplianceFrom::OnIncreaseClick);


				btnIncrease->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				btnIncrease->ForeColor = System::Drawing::Color::White;
				btnIncrease->BackColor = System::Drawing::Color::FromArgb(0, 116, 249);
				btnIncrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				btnIncrease->FlatAppearance->BorderSize = 0;
				btnIncrease->Tag = lblQuantity;
				// Button for Decrease (Minus)
				btnDecrease = gcnew Button();
				btnDecrease->Text = "-";
				btnDecrease->Location = System::Drawing::Point(startX + 460, (startY - 7) + (i * verticalSpacing));
				btnDecrease->Size = System::Drawing::Size(40, 30);
				btnDecrease->Click += gcnew System::EventHandler(this, &ApplianceFrom::OnDecreaseClick);
				btnDecrease->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				btnDecrease->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				btnDecrease->Padding = System::Windows::Forms::Padding(0);
				btnDecrease->ForeColor = System::Drawing::Color::White;
				btnDecrease->BackColor = System::Drawing::Color::FromArgb(139, 27, 27);
				btnDecrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				btnDecrease->FlatAppearance->BorderSize = 0;
				btnDecrease->Click += gcnew System::EventHandler(this, &ApplianceFrom::OnDecreaseClick);
				btnDecrease->Tag = lblQuantity;
				// Add controls to the custom control

				// Label to show Duration in Hours
				txtDuration = gcnew TextBox();
				txtDuration->Text = "1";
				txtDuration->Location = System::Drawing::Point(startX + 684, (startY - 7) + (i * verticalSpacing));
				txtDuration->Size = System::Drawing::Size(80, 30);
				txtDuration->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				txtDuration->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				txtDuration->ForeColor = System::Drawing::Color::White;
				txtDuration->BackColor = System::Drawing::Color::FromArgb(67, 65, 65);

				txtDuration->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ApplianceFrom::ValidateNumericInput);
				txtDuration->Leave += gcnew System::EventHandler(this, &ApplianceFrom::ValidateRange);
				

				checkBox->Tag = label;
				label->Tag = lblQuantity;
				lblQuantity->Tag = txtDuration;
				txtDuration->Tag = pictureBox;


				// Add controls to the custom control
				this->panel1->Controls->Add(btnIncrease);
				this->panel1->Controls->Add(btnDecrease);
				this->panel1->Controls->Add(lblQuantity);
				this->panel1->Controls->Add(txtDuration);
				
			}
		}
private: System::ComponentModel::IContainer^ components;
protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ApplianceFrom::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->panel1->Location = System::Drawing::Point(347, 104);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(963, 360);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ApplianceFrom::panel1_Paint_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(59, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 51);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ApplianceFrom::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1052, 695);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(253, 42);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ApplianceFrom::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(59, 360);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 51);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ApplianceFrom::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(57, 447);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 48);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ApplianceFrom::button4_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(54, 806);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(137, 40);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &ApplianceFrom::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(54, 611);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 40);
			this->button6->TabIndex = 7;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &ApplianceFrom::button6_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(575, 650);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 30);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ApplianceFrom::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(575, 705);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(127, 31);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &ApplianceFrom::textBox3_TextChanged);
			// 
			// ApplianceFrom
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 881);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1440, 950);
			this->MinimumSize = System::Drawing::Size(1440, 858);
			this->Name = L"ApplianceFrom";
			this->Text = L"ApplianceFrom";
			this->Load += gcnew System::EventHandler(this, &ApplianceFrom::ApplianceFrom_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ApplianceFrom_Load(System::Object^ sender, System::EventArgs^ e) {
	

		dbManager db;
		db.open("test.db");
		std::vector<std::pair<int, std::string>> appliances;
		db.readApplianceData(appliances);
		//for (const auto& appliance : appliances) {
		//	std::cout << "ID: " << appliance.first << ", Name: " << appliance.second << std::endl;
		//}
		setApplianceData(appliances);
		db.close();


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
	private: System::Void CheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Cast the sender to a CheckBox
		CheckBox^ checkBox = dynamic_cast<CheckBox^>(sender);

	}

	void OnIncreaseClick(System::Object^ sender, System::EventArgs^ e, Label^ lblQuantity)
	{
		int quantity = System::Convert::ToInt32(lblQuantity->Text);
		quantity++; // Increase the quantity by 1
		lblQuantity->Text = quantity.ToString(); // Update the label with the new quantity
	}

	// Decrease button click event handler
	void OnDecreaseClick(System::Object^ sender, System::EventArgs^ e, Label^ lblQuantity)
	{
		int quantity = System::Convert::ToInt32(lblQuantity->Text);
		if (quantity > 1) // Prevent going below zero
		{
			quantity--; // Decrease the quantity by 1
			lblQuantity->Text = quantity.ToString(); // Update the label with the new quantity
		}
	}

	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {	
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// go to home
		this->Hide();
	}

	private: void RemoveAllChildControls(System::Windows::Forms::Panel^ panel)
	{
		// Iterate over all controls in the panel (from the last to the first)
		for (int i = panel->Controls->Count - 1; i >= 0; i--)
		{
			// Get the control at index i
			Control^ control = panel->Controls[i];

			// Remove the control from the panel's controls collection
			panel->Controls->RemoveAt(i);

			// Optionally, delete the control (freeing memory)
			delete control;  // This is important if you want to manage memory
		}
	}



	// Event handler for saveBtn Click
	void ApplianceFrom::saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// traverse		
		saveDurations();	
		MessageBox::Show("Durations Updated ","Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//panel1->BringToFront();
		

	}
	void saveDurations() {
		dbManager db;
		db.open("test.db");
		for each (Control ^ control in this->dynamicPanle1->Controls)
		{
			// If the control is a CheckBox, check its state
			Label^ label = dynamic_cast<Label^>(control);
			if (label != nullptr) {

				String^ labelText = label->Text; // Get the text from the label
				const char* applianceName = (const char*)(Marshal::StringToHGlobalAnsi(labelText)).ToPointer();
				TextBox^ crntBox = safe_cast<TextBox^>(label->Tag);
				// Retrieve the Text from the TextBox
				String^ text = crntBox->Text;

				// Convert the managed String^ to an integer
				int duration = Int32::Parse(text);
				std::cout << duration << std::endl;
				db.updateDuration(applianceName, duration);

			}
		}
		db.close();

	}
	void takeNewDurationAppliancesShow(std::vector<std::string> res) {
		if (res.size() == 0) {
			return;
		}
		int startY = 22; // Starting Y position for TextBoxes
		int startX = 40; // X position for the first TextBox
		int verticalSpacing = 60; // Vertical space between each TextBox
		// Loop through applianceData to create TextBoxes for each appliance

		Panel^ dynamicPanel2 = gcnew Panel();
		dynamicPanel2->Visible = true;
		dynamicPanel2->Size = System::Drawing::Size(1440, 950);
		dynamicPanel2->Location = System::Drawing::Point(0, 0); // Ensure it's positioned at the top-left of the form

		// Set the background image if it exists
		String^ imagePath = "Images/Quantity Appliance selection.jpg"; // Update your path
		if (System::IO::File::Exists(imagePath)) {
			dynamicPanel2->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
			//dynamicPanel->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else {
			MessageBox::Show("Background image not found at path: " + imagePath, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// save button
		Button^ saveBtn;
		saveBtn = gcnew Button();
		saveBtn->Text = "";
		saveBtn->Location = System::Drawing::Point(681, 797);
		saveBtn->Size = System::Drawing::Size(259, 42);
		saveBtn->BackColor = System::Drawing::Color::Transparent;
		saveBtn->FlatStyle = FlatStyle::Flat; // Make the button flat
		saveBtn->FlatAppearance->BorderSize = 0; // No border
		saveBtn->Click += gcnew System::EventHandler(this, &ApplianceFrom::saveBtn_Click);
		// Ensure button's border and mouse effects are transparent
		saveBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent; // Transparent on hover
		saveBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent; // Transparent on click
		dynamicPanel2->Controls->Add(saveBtn);

		this->Controls->Add(dynamicPanel2);
		dynamicPanel2->BringToFront();


		dynamicPanle1 = gcnew Panel();
		dynamicPanle1->Visible = true;
		dynamicPanle1->Size = System::Drawing::Size(961, 640);
		dynamicPanle1->Location = System::Drawing::Point(348, 105); // Ensure it's positioned at the top-left of the form
		dynamicPanle1->BackColor = System::Drawing::Color::FromArgb(67, 65, 65);
		// Set the background image if it exists
		//String^ imagePath = "Images/sg- exists.jpg"; // Update your path
		dynamicPanle1->AutoScroll = true;
		dynamicPanle1->BringToFront();
		dynamicPanel2->Controls->Add(dynamicPanle1);

		for (int i = 0; i < res.size(); ++i)
		{
			// Create a Label for each appliance
			Label^ label = gcnew Label();

			std::string stdString = res[i]; // res[i] is a std::string
			label->Text = msclr::interop::marshal_as<System::String^>(stdString);

			label->Location = System::Drawing::Point(startX + 140, startY + (i * verticalSpacing));
			label->AutoSize = true;
			label->ForeColor = System::Drawing::Color::White;
			//label->BackColor = System::Drawing::Color::Aqua;
			label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
			this->panel1->Visible = true;
			label->Visible = true;
			
			// Label to show Duration in Hours
			txtDuration = gcnew TextBox();
			txtDuration->Text = "1";
			txtDuration->Location = System::Drawing::Point(startX + 655, (startY - 4) + (i * verticalSpacing));
			txtDuration->Size = System::Drawing::Size(80, 30);
			txtDuration->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			txtDuration->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
			txtDuration->ForeColor = System::Drawing::Color::White;
			txtDuration->BackColor = System::Drawing::Color::FromArgb(67, 65, 65);

			txtDuration->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ApplianceFrom::ValidateNumericInput);
			txtDuration->Leave += gcnew System::EventHandler(this, &ApplianceFrom::ValidateRange);


			// Add controls to the custom control
			
			label->Tag = txtDuration;
			label->BringToFront();
			dynamicPanle1->Controls->Add(label);
			dynamicPanle1->Controls->Add(txtDuration);
			txtDuration->BringToFront();

		}
		button1->BringToFront();
		button3->BringToFront();
		button4->BringToFront();
		button6->BringToFront();
		button7->BringToFront();
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Iterate over all the controls in the form, including nested ones
		CheckAllCheckboxes(this);

		dbManager db;
		db.open("test.db");

		bool isempty = false;
		int dsid = db.getCurrentSID(userID, isempty);
		std::vector<std::string> res = db.getApplianceNamesWithDuplicateAID(userID, dsid);

		// Output appliance names with duplicates to the console
		for (int i = 0; i < res.size(); i++) {
			std::cout << res[i] << std::endl;
		}

		// Show the appliances
		takeNewDurationAppliancesShow(res);

		// Validate appliance name and power usage
		if ((textBox2->Text != "" && textBox3->Text == "") || (textBox2->Text == "" && textBox3->Text != "")) {
			MessageBox::Show("Please enter all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			db.close();
			return;
		}

		// Validate appliance name (textBox2) and power usage (textBox3)
		System::String^ managedString = textBox2->Text;
		std::string applianceName = msclr::interop::marshal_as<std::string>(managedString);

		int powerUsage;
		if (textBox3->Text != "") {
			if (!Int32::TryParse(textBox3->Text, powerUsage) || powerUsage <= 0) {
				MessageBox::Show("Please enter a valid positive integer for Power Usage.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
				db.close();
				return;
			}
		}

		// Add appliance to the list if everything is valid
		if (textBox3->Text != "" && textBox2->Text != "") {
			db.addApplianceToList(applianceName.c_str(), powerUsage);
		}
		RemoveAllChildControls(panel1);
		std::vector<std::pair<int, std::string>> appliances;
		db.readApplianceData(appliances);
		setApplianceData(appliances);
		db.close();

		// Show success message
		MessageBox::Show("Appliance added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

		  

	// Helper function to check all checkboxes, including nested ones
	void CheckAllCheckboxes(Control^ parentControl) {

		dbManager  db;
		db.open("test.db");
		bool isEmpty = false;
		int currentSchedule = db.getCurrentSID(userID, isEmpty);
		if (!isEmpty && currentSchedule >= 1)
			currentSchedule += 1;
		db.deleteselectedappliances(userID, currentSchedule);
		// Iterate through each control in the parent control
		int offsetId = 1;
		for each (Control ^ control in parentControl->Controls)
		{
			// If the control is a CheckBox, check its state
			CheckBox^ checkBox = dynamic_cast<CheckBox^>(control);
			if (checkBox != nullptr)
			{
				// Check if the checkbox is checked
				if (checkBox->Checked)
				{
					// Checkbox is checked
					Label^ name = safe_cast<Label^>(checkBox->Tag);
					Label^ quantity = safe_cast<Label^>(name->Tag);
					TextBox^ duration = safe_cast<TextBox^>(quantity->Tag);
					PictureBox^ priority = safe_cast<PictureBox^>(duration->Tag);

					int prio = Int32::Parse(priority->Tag->ToString());
					int quan = Int32::Parse(quantity->Text);
					int dura = Int32::Parse(duration->Text);

					String^ managedString = name->Text;
					const char* applianceName = (const char*)(Marshal::StringToHGlobalAnsi(managedString)).ToPointer();
					int Id = db.getApplianceID(applianceName);

					// we need to make an offsetId for slected Appliance table
					// we will not play with real id of appliance
					// when getting sceduleGeneration Data we will get  Offset Id
					// OffsetId will be like 1, 2, 3, ... depending upon number of appliances
					// like computer , fridges(3)
					// Then 1.Computer 2.Fridhes1 3.Fridhes2
					// 

					if (quan > 1) {
						System::Windows::Forms::DialogResult result = MessageBox::Show(
							"Do you want to run " + name->Text +" Appliance on same time",         // Message text
							"Confirmation",                    // Caption
							MessageBoxButtons::YesNo,          // Buttons
							MessageBoxIcon::Question           // Icon
						);

						// Perform actions based on the result
						
						if (result == System::Windows::Forms::DialogResult::No) {
							//int Id = db.getApplianceID(appendedName);

							for (int i = 1; i <= quan; i++) {
								// Convert managed string to unmanaged char*
								String^ managedString1 = name->Text;
								const char* applianceName1 = (const char*)(Marshal::StringToHGlobalAnsi(managedString1)).ToPointer();

								// Calculate new string length (original length + the number of digits in i + null terminator)
								size_t originalLength = strlen(applianceName1);

								// Convert the current digit (i) to a string
								std::string applianceNameStr(applianceName1); // Managed string converted to std::string
								applianceNameStr += " "; // Append the integer i as a string
								applianceNameStr += std::to_string(i); // Append the integer i as a string

								// Convert the resulting std::string back to a char array for the database operation
								const char* appendedName = applianceNameStr.c_str();

								// Get ID and perform database operation
								int q = 1;
								db.addselectedAppliances(userID, currentSchedule, Id, appendedName, prio, q, dura, offsetId);
								db.setApplianceChanged(1);
								offsetId++;

								// Clean up allocated memory
								Marshal::FreeHGlobal(IntPtr((void*)applianceName1));
							}
						}
						else if (result == System::Windows::Forms::DialogResult::Yes) {
							db.addselectedAppliances(userID, currentSchedule, Id, applianceName, prio, quan, dura, offsetId);
							offsetId++;
							db.setApplianceChanged(1);
						}
					}
					else {
						db.addselectedAppliances(userID, currentSchedule, Id, applianceName, prio, quan, dura, offsetId);
						offsetId++;
						db.setApplianceChanged(1);
					}
				}
					   
			}
			// If the control has child controls, call the function recursively
			if (control->Controls->Count > 0)
			{
				CheckAllCheckboxes(control);
			}

		}
		db.close();

	}
	// KeyPress event handler to restrict input to digits only
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


	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showSchedules();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHistory();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showHome();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showSettings();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	nav::getInstance()->showLogin();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
