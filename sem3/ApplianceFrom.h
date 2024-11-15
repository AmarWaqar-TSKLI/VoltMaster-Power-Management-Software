#pragma once

namespace sem3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ApplianceFrom
	/// </summary>
	public ref class ApplianceFrom : public System::Windows::Forms::Form
	{
	public:
		ApplianceFrom(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
			this->SuspendLayout();
			// 
			// ApplianceFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"ApplianceFrom";
			this->Text = L"ApplianceFrom";
			this->Load += gcnew System::EventHandler(this, &ApplianceFrom::ApplianceFrom_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ApplianceFrom_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
