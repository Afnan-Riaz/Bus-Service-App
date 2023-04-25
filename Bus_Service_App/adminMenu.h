#pragma once
#include"userClass.h"
namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminMenu
	/// </summary>
	public ref class adminMenu : public System::Windows::Forms::Form
	{
	public:
		adminMenu(Admin^ admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			AdName->Text = admin->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminMenu()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ MngBusButton;
	private: System::Windows::Forms::Button^ ModRtButton;
	private: System::Windows::Forms::Button^ ModScedButton;



	private: System::Windows::Forms::Button^ AddRemUserButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ AdName;
	private: System::Windows::Forms::Button^ AdLogoutButton;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminMenu::typeid));
			this->MngBusButton = (gcnew System::Windows::Forms::Button());
			this->ModRtButton = (gcnew System::Windows::Forms::Button());
			this->ModScedButton = (gcnew System::Windows::Forms::Button());
			this->AddRemUserButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AdName = (gcnew System::Windows::Forms::Label());
			this->AdLogoutButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// MngBusButton
			// 
			this->MngBusButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MngBusButton->FlatAppearance->BorderSize = 0;
			this->MngBusButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->MngBusButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MngBusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MngBusButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MngBusButton.Image")));
			this->MngBusButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MngBusButton->Location = System::Drawing::Point(0, 95);
			this->MngBusButton->Name = L"MngBusButton";
			this->MngBusButton->Padding = System::Windows::Forms::Padding(10);
			this->MngBusButton->Size = System::Drawing::Size(289, 70);
			this->MngBusButton->TabIndex = 3;
			this->MngBusButton->Text = L"   Manage Buses";
			this->MngBusButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MngBusButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->MngBusButton->UseVisualStyleBackColor = true;
			this->MngBusButton->Click += gcnew System::EventHandler(this, &adminMenu::MngBusButton_Click);
			// 
			// ModRtButton
			// 
			this->ModRtButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModRtButton->FlatAppearance->BorderSize = 0;
			this->ModRtButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ModRtButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ModRtButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModRtButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ModRtButton.Image")));
			this->ModRtButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ModRtButton->Location = System::Drawing::Point(0, 231);
			this->ModRtButton->Name = L"ModRtButton";
			this->ModRtButton->Padding = System::Windows::Forms::Padding(10);
			this->ModRtButton->Size = System::Drawing::Size(289, 70);
			this->ModRtButton->TabIndex = 4;
			this->ModRtButton->Text = L" Modify Routes";
			this->ModRtButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ModRtButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ModRtButton->UseVisualStyleBackColor = true;
			// 
			// ModScedButton
			// 
			this->ModScedButton->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ModScedButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModScedButton->FlatAppearance->BorderSize = 0;
			this->ModScedButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ModScedButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ModScedButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModScedButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ModScedButton.Image")));
			this->ModScedButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ModScedButton->Location = System::Drawing::Point(0, 162);
			this->ModScedButton->Name = L"ModScedButton";
			this->ModScedButton->Padding = System::Windows::Forms::Padding(10);
			this->ModScedButton->Size = System::Drawing::Size(289, 70);
			this->ModScedButton->TabIndex = 5;
			this->ModScedButton->Text = L"   Modify Scedules";
			this->ModScedButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ModScedButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ModScedButton->UseVisualStyleBackColor = false;
			this->ModScedButton->Click += gcnew System::EventHandler(this, &adminMenu::ModScedButton_Click);
			// 
			// AddRemUserButton
			// 
			this->AddRemUserButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddRemUserButton->FlatAppearance->BorderSize = 0;
			this->AddRemUserButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->AddRemUserButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddRemUserButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddRemUserButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddRemUserButton.Image")));
			this->AddRemUserButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AddRemUserButton->Location = System::Drawing::Point(0, 300);
			this->AddRemUserButton->Name = L"AddRemUserButton";
			this->AddRemUserButton->Padding = System::Windows::Forms::Padding(10);
			this->AddRemUserButton->Size = System::Drawing::Size(289, 70);
			this->AddRemUserButton->TabIndex = 6;
			this->AddRemUserButton->Text = L"  Manage Users";
			this->AddRemUserButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AddRemUserButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->AddRemUserButton->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->MngBusButton);
			this->panel1->Controls->Add(this->ModRtButton);
			this->panel1->Controls->Add(this->AdLogoutButton);
			this->panel1->Controls->Add(this->AddRemUserButton);
			this->panel1->Controls->Add(this->ModScedButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 749);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->AdName);
			this->panel2->Location = System::Drawing::Point(-3, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(292, 94);
			this->panel2->TabIndex = 8;
			// 
			// AdName
			// 
			this->AdName->AutoSize = true;
			this->AdName->Font = (gcnew System::Drawing::Font(L"Poppins", 13, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AdName->Location = System::Drawing::Point(103, 27);
			this->AdName->Name = L"AdName";
			this->AdName->Size = System::Drawing::Size(84, 39);
			this->AdName->TabIndex = 0;
			this->AdName->Text = L"Name";
			// 
			// AdLogoutButton
			// 
			this->AdLogoutButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AdLogoutButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->AdLogoutButton->FlatAppearance->BorderSize = 0;
			this->AdLogoutButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->AdLogoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AdLogoutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdLogoutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AdLogoutButton.Image")));
			this->AdLogoutButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AdLogoutButton->Location = System::Drawing::Point(0, 679);
			this->AdLogoutButton->Name = L"AdLogoutButton";
			this->AdLogoutButton->Padding = System::Windows::Forms::Padding(10);
			this->AdLogoutButton->Size = System::Drawing::Size(289, 70);
			this->AdLogoutButton->TabIndex = 6;
			this->AdLogoutButton->Text = L"              Logout";
			this->AdLogoutButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AdLogoutButton->UseVisualStyleBackColor = true;
			this->AdLogoutButton->Click += gcnew System::EventHandler(this, &adminMenu::AdLogoutButton_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(289, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1125, 95);
			this->panel3->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(501, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HOME";
			// 
			// adminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1414, 749);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(289, 749);
			this->Name = L"adminMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"adminMenu";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool logoutAdmin = false;
	public: bool toMng = false;
	private: System::Void MngBusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::CornflowerBlue;
		this->toMng = true;
		this->Close();
	}
private: System::Void AdLogoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->logoutAdmin = true;
	this->Close();
}
	   public: bool toSced = false;
private: System::Void ModScedButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::CornflowerBlue;
	this->toSced = true;
	this->Close();
}
};
};
