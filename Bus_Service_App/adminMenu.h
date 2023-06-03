#pragma once
#include "userClass.h"
#include "busClass.h"
#include "ticketClass.h"
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
			Passenger^ pass = gcnew Passenger;
			BusData^ bus = gcnew BusData;
			Ticket^ ticket = gcnew Ticket;
			AdName->Text = admin->name;
			userlabel->Text = (pass->countUsers()).ToString();
			buslabel->Text = (bus->countBuses()).ToString();
			revenuelabel->Text = (pass->countBalance()).ToString();
			citylabel->Text = (bus->getCities()).ToString();
			seatlabel->Text = (bus->countSeats()).ToString();
			complabel->Text = (ticket->totalTickets()).ToString();
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ compFeedButton;

	private: System::Windows::Forms::Label^ userlabel;
	private: System::Windows::Forms::Label^ seatlabel;
	private: System::Windows::Forms::Label^ citylabel;



	private: System::Windows::Forms::Label^ buslabel;
	private: System::Windows::Forms::Label^ complabel;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ revenuelabel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel10;










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
			this->compFeedButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->userlabel = (gcnew System::Windows::Forms::Label());
			this->seatlabel = (gcnew System::Windows::Forms::Label());
			this->citylabel = (gcnew System::Windows::Forms::Label());
			this->buslabel = (gcnew System::Windows::Forms::Label());
			this->complabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->revenuelabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
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
			this->ModRtButton->Click += gcnew System::EventHandler(this, &adminMenu::ModRtButton_Click);
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
			this->AddRemUserButton->Click += gcnew System::EventHandler(this, &adminMenu::AddRemUserButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->MngBusButton);
			this->panel1->Controls->Add(this->ModRtButton);
			this->panel1->Controls->Add(this->AdLogoutButton);
			this->panel1->Controls->Add(this->compFeedButton);
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
			this->AdName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AdName->Font = (gcnew System::Drawing::Font(L"Poppins", 13, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AdName->Location = System::Drawing::Point(0, 0);
			this->AdName->Name = L"AdName";
			this->AdName->Size = System::Drawing::Size(292, 94);
			this->AdName->TabIndex = 0;
			this->AdName->Text = L"Name";
			this->AdName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->AdLogoutButton->Location = System::Drawing::Point(0, 552);
			this->AdLogoutButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->AdLogoutButton->Name = L"AdLogoutButton";
			this->AdLogoutButton->Padding = System::Windows::Forms::Padding(8, 8, 8, 8);
			this->AdLogoutButton->Size = System::Drawing::Size(217, 57);
			this->AdLogoutButton->TabIndex = 6;
			this->AdLogoutButton->Text = L"              Logout";
			this->AdLogoutButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AdLogoutButton->UseVisualStyleBackColor = true;
			this->AdLogoutButton->Click += gcnew System::EventHandler(this, &adminMenu::AdLogoutButton_Click);
			// 
			// compFeedButton
			// 
			this->compFeedButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->compFeedButton->FlatAppearance->BorderSize = 0;
			this->compFeedButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->compFeedButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->compFeedButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->compFeedButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"compFeedButton.Image")));
			this->compFeedButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->compFeedButton->Location = System::Drawing::Point(0, 367);
			this->compFeedButton->Name = L"compFeedButton";
			this->compFeedButton->Padding = System::Windows::Forms::Padding(10);
			this->compFeedButton->Size = System::Drawing::Size(289, 70);
			this->compFeedButton->TabIndex = 6;
			this->compFeedButton->Text = L"   Customer Feedback";
			this->compFeedButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->compFeedButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->compFeedButton->UseVisualStyleBackColor = true;
			this->compFeedButton->Click += gcnew System::EventHandler(this, &adminMenu::compFeedButton_Click);
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(426, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 48);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Analytics Overview";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 30);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Users Registered";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 30);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Buses Registered";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 30);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Cities Covered";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 30);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Seats Booked";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(16, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(195, 30);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Customer Feedbacks";
			// 
			// userlabel
			// 
			this->userlabel->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userlabel->Location = System::Drawing::Point(16, 29);
			this->userlabel->Name = L"userlabel";
			this->userlabel->Size = System::Drawing::Size(192, 68);
			this->userlabel->TabIndex = 10;
			this->userlabel->Text = L"Users";
			this->userlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// seatlabel
			// 
			this->seatlabel->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seatlabel->Location = System::Drawing::Point(16, 29);
			this->seatlabel->Name = L"seatlabel";
			this->seatlabel->Size = System::Drawing::Size(192, 68);
			this->seatlabel->TabIndex = 10;
			this->seatlabel->Text = L"Seats";
			this->seatlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// citylabel
			// 
			this->citylabel->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->citylabel->Location = System::Drawing::Point(16, 29);
			this->citylabel->Name = L"citylabel";
			this->citylabel->Size = System::Drawing::Size(192, 68);
			this->citylabel->TabIndex = 10;
			this->citylabel->Text = L"Cities";
			this->citylabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buslabel
			// 
			this->buslabel->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buslabel->Location = System::Drawing::Point(16, 29);
			this->buslabel->Name = L"buslabel";
			this->buslabel->Size = System::Drawing::Size(192, 68);
			this->buslabel->TabIndex = 10;
			this->buslabel->Text = L"Buses";
			this->buslabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// complabel
			// 
			this->complabel->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->complabel->Location = System::Drawing::Point(16, 29);
			this->complabel->Name = L"complabel";
			this->complabel->Size = System::Drawing::Size(192, 68);
			this->complabel->TabIndex = 10;
			this->complabel->Text = L"Feedback/Complain";
			this->complabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(434, 171);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(260, 3);
			this->panel4->TabIndex = 11;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->userlabel);
			this->panel5->Location = System::Drawing::Point(434, 225);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(224, 184);
			this->panel5->TabIndex = 12;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->buslabel);
			this->panel6->Location = System::Drawing::Point(733, 225);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(224, 184);
			this->panel6->TabIndex = 13;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->citylabel);
			this->panel7->Location = System::Drawing::Point(1036, 225);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(224, 184);
			this->panel7->TabIndex = 13;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel8->Controls->Add(this->label8);
			this->panel8->Controls->Add(this->complabel);
			this->panel8->Location = System::Drawing::Point(733, 466);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(224, 184);
			this->panel8->TabIndex = 13;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel9->Controls->Add(this->label6);
			this->panel9->Controls->Add(this->seatlabel);
			this->panel9->Location = System::Drawing::Point(434, 466);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(224, 184);
			this->panel9->TabIndex = 13;
			// 
			// revenuelabel
			// 
			this->revenuelabel->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->revenuelabel->Location = System::Drawing::Point(3, 37);
			this->revenuelabel->Name = L"revenuelabel";
			this->revenuelabel->Size = System::Drawing::Size(218, 68);
			this->revenuelabel->TabIndex = 10;
			this->revenuelabel->Text = L"Revenue";
			this->revenuelabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1061, 597);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(181, 30);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Revenue Generated";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel10->Controls->Add(this->revenuelabel);
			this->panel10->Location = System::Drawing::Point(1036, 466);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(224, 184);
			this->panel10->TabIndex = 14;
			// 
			// adminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1414, 749);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel10);
			this->MinimumSize = System::Drawing::Size(289, 749);
			this->Name = L"adminMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Service Application";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

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
public: bool toRoute = false;
private: System::Void ModRtButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::CornflowerBlue;
	this->toRoute = true;
	this->Close();

}
	   public: bool toUsers = false;
private: System::Void AddRemUserButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::CornflowerBlue;
	this->toUsers = true;
	this->Close();
}

public: bool toFeedback = false;
private: System::Void compFeedButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::CornflowerBlue;
	this->toFeedback = true;
	this->Close();
}
};
};
