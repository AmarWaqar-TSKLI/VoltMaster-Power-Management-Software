#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "db.h"
#include <vector>

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
		ApplianceFrom(void)
		{
			InitializeComponent();
			applianceData = gcnew List<Tuple<int, String^>^>(); // Initialize the list
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
	private: System::Windows::Forms::Button^ button1;
	protected:

		int quantity = 1;
		// Method to add TextBoxes for each appliance
		void addTextBoxesForAppliances()
		{
			int startY = 30; // Starting Y position for TextBoxes
			int startX = 150; // X position for the first TextBox
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
				int id = i + 1;
				label->Name = id.ToString();
				// Create a new PictureBox
				PictureBox^ pictureBox = gcnew PictureBox();
				pictureBox->Size = System::Drawing::Size(93, 36);

				pictureBox->Location = System::Drawing::Point(startX + 320, (startY - 10) + (i * verticalSpacing));

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
				checkBox->Location = System::Drawing::Point(startX - 110, (startY + 7) + (i * verticalSpacing)); // Position on the form
				checkBox->AutoSize = true;  // Automatically resize to fit the text
				checkBox->Size = System::Drawing::Size(130, 130);

				// Add an event handler for the CheckedChanged event
				checkBox->CheckedChanged += gcnew System::EventHandler(this, &ApplianceFrom::CheckBox_CheckedChanged);

				// Add the CheckBox to the form's controls
				this->panel1->Controls->Add(checkBox);
				// Label to show quantity
				lblQuantity = gcnew Label();
				lblQuantity->Text = quantity.ToString();
				lblQuantity->Location = System::Drawing::Point(startX + 604, (startY - 7) + (i * verticalSpacing));
				lblQuantity->Size = System::Drawing::Size(80, 30);
				lblQuantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				lblQuantity->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 15.0f);
				lblQuantity->ForeColor = System::Drawing::Color::White;

				//Increase btn
				btnIncrease = gcnew Button();
				btnIncrease->Text = "+";
				btnIncrease->Location = System::Drawing::Point(startX + 670, (startY - 7) + (i * verticalSpacing));
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
				btnDecrease->Location = System::Drawing::Point(startX + 580, (startY - 7) + (i * verticalSpacing));
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


				checkBox->Tag = label;
				label->Tag = lblQuantity;
				lblQuantity->Tag = pictureBox;


				this->panel1->Controls->Add(btnIncrease);
				this->panel1->Controls->Add(btnDecrease);
				this->panel1->Controls->Add(lblQuantity);
			}
		}
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->panel1->Location = System::Drawing::Point(347, 104);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(963, 641);
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
			this->button1->Click += gcnew System::EventHandler(this, &ApplianceFrom::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(685, 793);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(253, 42);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ApplianceFrom::button2_Click);
			// 
			// ApplianceFrom
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 911);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1440, 950);
			this->MinimumSize = System::Drawing::Size(1440, 950);
			this->Name = L"ApplianceFrom";
			this->Text = L"ApplianceFrom";
			this->Load += gcnew System::EventHandler(this, &ApplianceFrom::ApplianceFrom_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ApplianceFrom_Load(System::Object^ sender, System::EventArgs^ e) {

		dbManager db;
		db.open("test.db");
		std::vector<std::pair<int, std::string>> appliances;
		db.readApplianceData(db, appliances);
		for (const auto& appliance : appliances) {
			std::cout << "ID: " << appliance.first << ", Name: " << appliance.second << std::endl;
		}
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
	private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//HomeForm^ form = gcnew HomeForm();
		//home->Show();
		//this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Iterate over all the controls in the form, including nested ones
		CheckAllCheckboxes(this);
	}
		  

		   // Helper function to check all checkboxes, including nested ones
		   void CheckAllCheckboxes(Control^ parentControl) {

			   dbManager  db;
			   db.open("test.db");
			   db.deleteselectedappliances(0, 0);
			   // Iterate through each control in the parent control
			   for each (Control ^ control in parentControl->Controls)
			   {
				   // If the control is a CheckBox, check its state
				   CheckBox^ checkBox = dynamic_cast<CheckBox^>(control);
				   if (checkBox != nullptr)
				   {
					   // Check if the checkbox is checked
					   if (checkBox->Checked)
					   {
						   // Checkbox is checked, perform your logic here
						   
						   Label^ name = safe_cast<Label^>(checkBox->Tag);
						   Label^ quantity = safe_cast<Label^>(name->Tag);
						   PictureBox^ priority = safe_cast<PictureBox^>(quantity->Tag);
						   int Id = Int32::Parse(name->Name);
						   int prio = Int32::Parse(priority->Tag->ToString());
						   int quan = Int32::Parse(quantity->Text);
						   String^ managedString = name->Text;
						   const char* applianceName = (const char*)(Marshal::StringToHGlobalAnsi(managedString)).ToPointer();

						  // MessageBox::Show("Checkbox '" + name->Text + quantity->Text +priority->Tag+ "' is checked.");
						   db.addselectedAppliances(0,0 , Id, applianceName, prio, quan);
						   
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
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
