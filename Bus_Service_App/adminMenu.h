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
			AdNameLabel->Text = admin->name;
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ AdaccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AdlogoutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AdmanageAccountToolStripMenuItem;
	protected:



	private: System::Windows::Forms::Label^ AppNameAdLabel;

	private: System::Windows::Forms::Label^ AdSignLabel;
	private: System::Windows::Forms::Label^ AdNameLabel;
	private: System::Windows::Forms::Button^ AddRemBusButton;
	private: System::Windows::Forms::Button^ ModScedButton;
	private: System::Windows::Forms::Button^ ModRoutButton;
	private: System::Windows::Forms::Button^ AddRemUserButton;
	private: System::Windows::Forms::Button^ ModBusInButton;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->AdaccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AdlogoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AdmanageAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AppNameAdLabel = (gcnew System::Windows::Forms::Label());
			this->AdSignLabel = (gcnew System::Windows::Forms::Label());
			this->AdNameLabel = (gcnew System::Windows::Forms::Label());
			this->AddRemBusButton = (gcnew System::Windows::Forms::Button());
			this->ModScedButton = (gcnew System::Windows::Forms::Button());
			this->ModRoutButton = (gcnew System::Windows::Forms::Button());
			this->AddRemUserButton = (gcnew System::Windows::Forms::Button());
			this->ModBusInButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->AdaccountToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1026, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// AdaccountToolStripMenuItem
			// 
			this->AdaccountToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->AdlogoutToolStripMenuItem,
					this->AdmanageAccountToolStripMenuItem
			});
			this->AdaccountToolStripMenuItem->Name = L"AdaccountToolStripMenuItem";
			this->AdaccountToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->AdaccountToolStripMenuItem->Text = L"Account";
			// 
			// AdlogoutToolStripMenuItem
			// 
			this->AdlogoutToolStripMenuItem->Name = L"AdlogoutToolStripMenuItem";
			this->AdlogoutToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->AdlogoutToolStripMenuItem->Text = L"Logout";
			this->AdlogoutToolStripMenuItem->Click += gcnew System::EventHandler(this, &adminMenu::AdlogoutToolStripMenuItem_Click);
			// 
			// AdmanageAccountToolStripMenuItem
			// 
			this->AdmanageAccountToolStripMenuItem->Name = L"AdmanageAccountToolStripMenuItem";
			this->AdmanageAccountToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->AdmanageAccountToolStripMenuItem->Text = L"Manage Account";
			// 
			// AppNameAdLabel
			// 
			this->AppNameAdLabel->AutoSize = true;
			this->AppNameAdLabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AppNameAdLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->AppNameAdLabel->Location = System::Drawing::Point(88, 56);
			this->AppNameAdLabel->Name = L"AppNameAdLabel";
			this->AppNameAdLabel->Padding = System::Windows::Forms::Padding(7);
			this->AppNameAdLabel->Size = System::Drawing::Size(565, 58);
			this->AppNameAdLabel->TabIndex = 1;
			this->AppNameAdLabel->Text = L"Bus Service Application";
			this->AppNameAdLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// AdSignLabel
			// 
			this->AdSignLabel->AutoSize = true;
			this->AdSignLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdSignLabel->Location = System::Drawing::Point(742, 72);
			this->AdSignLabel->Name = L"AdSignLabel";
			this->AdSignLabel->Size = System::Drawing::Size(106, 25);
			this->AdSignLabel->TabIndex = 2;
			this->AdSignLabel->Text = L"Signed In: ";
			// 
			// AdNameLabel
			// 
			this->AdNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdNameLabel->Location = System::Drawing::Point(854, 72);
			this->AdNameLabel->Name = L"AdNameLabel";
			this->AdNameLabel->Size = System::Drawing::Size(101, 25);
			this->AdNameLabel->TabIndex = 0;
			this->AdNameLabel->Text = L"Name";
			// 
			// AddRemBusButton
			// 
			this->AddRemBusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddRemBusButton->Location = System::Drawing::Point(172, 171);
			this->AddRemBusButton->Name = L"AddRemBusButton";
			this->AddRemBusButton->Size = System::Drawing::Size(200, 70);
			this->AddRemBusButton->TabIndex = 3;
			this->AddRemBusButton->Text = L"Add or Remove Buses";
			this->AddRemBusButton->UseVisualStyleBackColor = true;
			// 
			// ModScedButton
			// 
			this->ModScedButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModScedButton->Location = System::Drawing::Point(669, 355);
			this->ModScedButton->Name = L"ModScedButton";
			this->ModScedButton->Size = System::Drawing::Size(200, 70);
			this->ModScedButton->TabIndex = 4;
			this->ModScedButton->Text = L"Modify Scedules";
			this->ModScedButton->UseVisualStyleBackColor = true;
			// 
			// ModRoutButton
			// 
			this->ModRoutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModRoutButton->Location = System::Drawing::Point(172, 355);
			this->ModRoutButton->Name = L"ModRoutButton";
			this->ModRoutButton->Size = System::Drawing::Size(200, 70);
			this->ModRoutButton->TabIndex = 5;
			this->ModRoutButton->Text = L"Modify Routes";
			this->ModRoutButton->UseVisualStyleBackColor = true;
			// 
			// AddRemUserButton
			// 
			this->AddRemUserButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddRemUserButton->Location = System::Drawing::Point(669, 171);
			this->AddRemUserButton->Name = L"AddRemUserButton";
			this->AddRemUserButton->Size = System::Drawing::Size(200, 70);
			this->AddRemUserButton->TabIndex = 6;
			this->AddRemUserButton->Text = L"Add or Remove Users";
			this->AddRemUserButton->UseVisualStyleBackColor = true;
			// 
			// ModBusInButton
			// 
			this->ModBusInButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModBusInButton->Location = System::Drawing::Point(429, 264);
			this->ModBusInButton->Name = L"ModBusInButton";
			this->ModBusInButton->Size = System::Drawing::Size(200, 70);
			this->ModBusInButton->TabIndex = 7;
			this->ModBusInButton->Text = L"Modify Bus Details";
			this->ModBusInButton->UseVisualStyleBackColor = true;
			// 
			// adminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 540);
			this->Controls->Add(this->ModBusInButton);
			this->Controls->Add(this->AddRemUserButton);
			this->Controls->Add(this->ModRoutButton);
			this->Controls->Add(this->ModScedButton);
			this->Controls->Add(this->AddRemBusButton);
			this->Controls->Add(this->AdNameLabel);
			this->Controls->Add(this->AdSignLabel);
			this->Controls->Add(this->AppNameAdLabel);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"adminMenu";
			this->Text = L"adminMenu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool logoutAdmin = false;

	private: System::Void AdlogoutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->logoutAdmin = true;
		this->Close();
	}
	};
};
