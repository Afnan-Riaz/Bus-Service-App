#pragma once
#include"userClass.h"
#include"ticketClass.h"
#include"busClass.h"

namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for viewTickets
	/// </summary>
	public ref class viewTickets : public System::Windows::Forms::Form
	{
	public:Passenger^ user;
	public:
		viewTickets(Passenger^ p)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			user = p;
			nameLabel->Text = user->name;
			balanceLabel->Text = "Rs. " + user->balance;
			showTickets(this->ticketData);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~viewTickets()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ balanceLabel;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ numTb;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Panel^ ticketPanel;
	private: System::Windows::Forms::Label^ fareLabel;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ provLabel;
	private: System::Windows::Forms::Label^ classLabel;
	private: System::Windows::Forms::Label^ seatsLabel;
	private: System::Windows::Forms::Label^ passengerLabel;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ arrLabel;
	private: System::Windows::Forms::Label^ depLabel;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ ticketNumLabel;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tickets;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ ticketData;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(viewTickets::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ticketData = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numTb = (gcnew System::Windows::Forms::TextBox());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->ticketPanel = (gcnew System::Windows::Forms::Panel());
			this->fareLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->provLabel = (gcnew System::Windows::Forms::Label());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->seatsLabel = (gcnew System::Windows::Forms::Label());
			this->passengerLabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->arrLabel = (gcnew System::Windows::Forms::Label());
			this->depLabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ticketNumLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ticketData))->BeginInit();
			this->ticketPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->balanceLabel);
			this->panel2->Controls->Add(this->nameLabel);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(304, 97);
			this->panel2->TabIndex = 33;
			// 
			// balanceLabel
			// 
			this->balanceLabel->AutoSize = true;
			this->balanceLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balanceLabel->ForeColor = System::Drawing::Color::White;
			this->balanceLabel->Location = System::Drawing::Point(129, 54);
			this->balanceLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->balanceLabel->Name = L"balanceLabel";
			this->balanceLabel->Size = System::Drawing::Size(55, 22);
			this->balanceLabel->TabIndex = 2;
			this->balanceLabel->Text = L"Rs. 0";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::White;
			this->nameLabel->Location = System::Drawing::Point(153, 23);
			this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(60, 22);
			this->nameLabel->TabIndex = 10;
			this->nameLabel->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(33, 52);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Wallet:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(31, 22);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Signed in:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->back);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(307, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1092, 97);
			this->panel1->TabIndex = 32;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::SteelBlue;
			this->back->FlatAppearance->BorderSize = 0;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.Image")));
			this->back->Location = System::Drawing::Point(24, 10);
			this->back->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(92, 80);
			this->back->TabIndex = 32;
			this->back->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &viewTickets::back_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(421, 28);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(293, 47);
			this->label5->TabIndex = 0;
			this->label5->Text = L"View Tickets";
			// 
			// ticketData
			// 
			this->ticketData->AllowUserToAddRows = false;
			this->ticketData->AllowUserToDeleteRows = false;
			this->ticketData->AllowUserToResizeColumns = false;
			this->ticketData->AllowUserToResizeRows = false;
			this->ticketData->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ticketData->BackgroundColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ticketData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->ticketData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ticketData->Location = System::Drawing::Point(220, 228);
			this->ticketData->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ticketData->Name = L"ticketData";
			this->ticketData->ReadOnly = true;
			this->ticketData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->ticketData->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->ticketData->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ticketData->ShowEditingIcon = false;
			this->ticketData->Size = System::Drawing::Size(489, 268);
			this->ticketData->TabIndex = 34;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(213, 180);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(297, 32);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Your Booked Tickets:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(215, 540);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(404, 29);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Enter ticket number to see details:";
			// 
			// numTb
			// 
			this->numTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTb->Location = System::Drawing::Point(220, 580);
			this->numTb->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numTb->Name = L"numTb";
			this->numTb->Size = System::Drawing::Size(488, 30);
			this->numTb->TabIndex = 37;
			// 
			// searchBtn
			// 
			this->searchBtn->BackColor = System::Drawing::SystemColors::Window;
			this->searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchBtn.Image")));
			this->searchBtn->Location = System::Drawing::Point(659, 580);
			this->searchBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(51, 32);
			this->searchBtn->TabIndex = 38;
			this->searchBtn->UseVisualStyleBackColor = false;
			this->searchBtn->Click += gcnew System::EventHandler(this, &viewTickets::searchBtn_Click);
			// 
			// ticketPanel
			// 
			this->ticketPanel->BackColor = System::Drawing::Color::Silver;
			this->ticketPanel->Controls->Add(this->fareLabel);
			this->ticketPanel->Controls->Add(this->label13);
			this->ticketPanel->Controls->Add(this->provLabel);
			this->ticketPanel->Controls->Add(this->classLabel);
			this->ticketPanel->Controls->Add(this->seatsLabel);
			this->ticketPanel->Controls->Add(this->passengerLabel);
			this->ticketPanel->Controls->Add(this->panel5);
			this->ticketPanel->Controls->Add(this->label12);
			this->ticketPanel->Controls->Add(this->arrLabel);
			this->ticketPanel->Controls->Add(this->depLabel);
			this->ticketPanel->Controls->Add(this->label11);
			this->ticketPanel->Controls->Add(this->label10);
			this->ticketPanel->Controls->Add(this->label9);
			this->ticketPanel->Controls->Add(this->label8);
			this->ticketPanel->Controls->Add(this->ticketNumLabel);
			this->ticketPanel->Controls->Add(this->label7);
			this->ticketPanel->Location = System::Drawing::Point(831, 180);
			this->ticketPanel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ticketPanel->Name = L"ticketPanel";
			this->ticketPanel->Size = System::Drawing::Size(396, 491);
			this->ticketPanel->TabIndex = 39;
			this->ticketPanel->Visible = false;
			// 
			// fareLabel
			// 
			this->fareLabel->AutoSize = true;
			this->fareLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fareLabel->ForeColor = System::Drawing::Color::Black;
			this->fareLabel->Location = System::Drawing::Point(117, 372);
			this->fareLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->fareLabel->Name = L"fareLabel";
			this->fareLabel->Size = System::Drawing::Size(113, 28);
			this->fareLabel->TabIndex = 26;
			this->fareLabel->Text = L"Rs. 2000";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(33, 370);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 30);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Fare:";
			// 
			// provLabel
			// 
			this->provLabel->AutoSize = true;
			this->provLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->provLabel->ForeColor = System::Drawing::Color::Black;
			this->provLabel->Location = System::Drawing::Point(164, 327);
			this->provLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->provLabel->Name = L"provLabel";
			this->provLabel->Size = System::Drawing::Size(105, 28);
			this->provLabel->TabIndex = 24;
			this->provLabel->Text = L"Daewoo";
			// 
			// classLabel
			// 
			this->classLabel->AutoSize = true;
			this->classLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classLabel->ForeColor = System::Drawing::Color::Black;
			this->classLabel->Location = System::Drawing::Point(125, 282);
			this->classLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(116, 28);
			this->classLabel->TabIndex = 23;
			this->classLabel->Text = L"Business";
			// 
			// seatsLabel
			// 
			this->seatsLabel->AutoSize = true;
			this->seatsLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seatsLabel->ForeColor = System::Drawing::Color::Black;
			this->seatsLabel->Location = System::Drawing::Point(232, 236);
			this->seatsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->seatsLabel->Name = L"seatsLabel";
			this->seatsLabel->Size = System::Drawing::Size(68, 28);
			this->seatsLabel->TabIndex = 22;
			this->seatsLabel->Text = L"2,3,4";
			// 
			// passengerLabel
			// 
			this->passengerLabel->AutoSize = true;
			this->passengerLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passengerLabel->ForeColor = System::Drawing::Color::Black;
			this->passengerLabel->Location = System::Drawing::Point(131, 190);
			this->passengerLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->passengerLabel->Name = L"passengerLabel";
			this->passengerLabel->Size = System::Drawing::Size(160, 28);
			this->passengerLabel->TabIndex = 21;
			this->passengerLabel->Text = L"Maaz Ahmad";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(93, 79);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(188, 4);
			this->panel5->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(172, 113);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 30);
			this->label12->TabIndex = 19;
			this->label12->Text = L"---";
			// 
			// arrLabel
			// 
			this->arrLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrLabel->ForeColor = System::Drawing::Color::Black;
			this->arrLabel->Location = System::Drawing::Point(220, 114);
			this->arrLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->arrLabel->Name = L"arrLabel";
			this->arrLabel->Size = System::Drawing::Size(172, 30);
			this->arrLabel->TabIndex = 18;
			this->arrLabel->Text = L"Multan";
			this->arrLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// depLabel
			// 
			this->depLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depLabel->ForeColor = System::Drawing::Color::Black;
			this->depLabel->Location = System::Drawing::Point(4, 113);
			this->depLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->depLabel->Name = L"depLabel";
			this->depLabel->Size = System::Drawing::Size(165, 30);
			this->depLabel->TabIndex = 17;
			this->depLabel->Text = L"Lahore";
			this->depLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(33, 326);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 30);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Provider: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(32, 281);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 30);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Class:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(32, 235);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(185, 30);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Seats Booked:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(32, 188);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 30);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Name:";
			// 
			// ticketNumLabel
			// 
			this->ticketNumLabel->AutoSize = true;
			this->ticketNumLabel->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticketNumLabel->ForeColor = System::Drawing::Color::Black;
			this->ticketNumLabel->Location = System::Drawing::Point(237, 41);
			this->ticketNumLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ticketNumLabel->Name = L"ticketNumLabel";
			this->ticketNumLabel->Size = System::Drawing::Size(44, 32);
			this->ticketNumLabel->TabIndex = 12;
			this->ticketNumLabel->Text = L"10";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(87, 41);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 32);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Ticket no.";
			// 
			// viewTickets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1396, 766);
			this->Controls->Add(this->ticketPanel);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->numTb);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ticketData);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"viewTickets";
			this->Text = L"viewTickets";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ticketData))->EndInit();
			this->ticketPanel->ResumeLayout(false);
			this->ticketPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void showTickets(DataGridView^ dataGridView)
		{
			// Connect to the database
			String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			// Create a SQL command to retrieve the tickets
			String^ commandText = "SELECT ticketnum, Booked_Seats, arrLoc, depLoc FROM tickets WHERE passenger_name = @passengerName";
			SqlCommand^ command = gcnew SqlCommand(commandText, connection);
			SqlParameter^ parameter = gcnew SqlParameter("@passengerName", SqlDbType::NVarChar, 50);
			parameter->Value = user->username; // Replace with the passenger's name
			command->Parameters->Add(parameter);

			// Execute the command and fill a DataTable with the results
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ table = gcnew DataTable();
			adapter->Fill(table);

			// Bind the DataTable to the DataGridView
			dataGridView->DataSource = table;

			// Close the connection
			connection->Close();
		}

	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void viewTickets_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		bool check1 = false, check2 = false;
		Ticket^ ticket = gcnew Ticket;
		try {
			ticket->ticketnum = Convert::ToInt32(numTb->Text);
			ticket->user->username = user->username;
			check1 = true;
		}
		catch (Exception^ e) {
			MessageBox::Show("Invalid Ticket Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			check1 = false;
		}
		if (check1) {
			if (ticket->checkTicket())
				check2 = true;
			else check2 = false;
		}
		if (check2) {
			this->ticketPanel->Visible = true;
			this->passengerLabel->Text = user->name;
			this->ticketNumLabel->Text = Convert::ToString(ticket->ticketnum);
			this->seatsLabel->Text = ticket->seatNum;
			this->provLabel->Text = ticket->bus->sProv;
			this->classLabel->Text = ticket->bus->trClass;
			this->arrLabel->Text = ticket->bus->route->arrLoc;
			this->depLabel->Text = ticket->bus->route->depLoc;
			this->fareLabel->Text = "Rs. " + ticket->fare;
		}
	}
};
}
