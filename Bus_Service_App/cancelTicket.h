#pragma once

#include"userClass.h"
#include"ticketClass.h"
#include"busClass.h"
#include"routeClass.h"
#include"sceduleClass.h"

namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cancelTicket
	/// </summary>
	public ref class cancelTicket : public System::Windows::Forms::Form
	{
	public:
		Passenger^ user;

		cancelTicket(Passenger^ u)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			nameLabel->Text = u->name;
			balanceLabel->Text = "Rs. " + u->balance;

			user = u;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cancelTicket()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ balanceLabel;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbinput;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ waitLabel;
	private: System::Windows::Forms::Label^ fareLabel;
	private: System::Windows::Forms::Label^ spLabel;
	private: System::Windows::Forms::Label^ classLabel;
	private: System::Windows::Forms::Label^ seatnumLabel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ dltPanel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ cancelBtn;

	private: System::Windows::Forms::Button^ backBtn;

	private: System::Windows::Forms::Label^ refLabel;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ back;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cancelTicket::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbinput = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->fareLabel = (gcnew System::Windows::Forms::Label());
			this->spLabel = (gcnew System::Windows::Forms::Label());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->seatnumLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->waitLabel = (gcnew System::Windows::Forms::Label());
			this->dltPanel = (gcnew System::Windows::Forms::Panel());
			this->refLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->dltPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(225, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cancel Ticket/s";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->back);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(230, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(729, 79);
			this->panel1->TabIndex = 12;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::SteelBlue;
			this->back->FlatAppearance->BorderSize = 0;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.Image")));
			this->back->Location = System::Drawing::Point(19, 8);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(69, 65);
			this->back->TabIndex = 10;
			this->back->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &cancelTicket::back_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->balanceLabel);
			this->panel2->Controls->Add(this->nameLabel);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(228, 79);
			this->panel2->TabIndex = 13;
			// 
			// balanceLabel
			// 
			this->balanceLabel->AutoSize = true;
			this->balanceLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balanceLabel->ForeColor = System::Drawing::Color::White;
			this->balanceLabel->Location = System::Drawing::Point(97, 44);
			this->balanceLabel->Name = L"balanceLabel";
			this->balanceLabel->Size = System::Drawing::Size(43, 17);
			this->balanceLabel->TabIndex = 2;
			this->balanceLabel->Text = L"Rs. 0";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::White;
			this->nameLabel->Location = System::Drawing::Point(115, 19);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(47, 17);
			this->nameLabel->TabIndex = 10;
			this->nameLabel->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(25, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Wallet:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(23, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 19);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Signed in:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(73, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 19);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Enter Ticket Number:";
			// 
			// tbinput
			// 
			this->tbinput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbinput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbinput->Location = System::Drawing::Point(78, 62);
			this->tbinput->Name = L"tbinput";
			this->tbinput->Size = System::Drawing::Size(512, 31);
			this->tbinput->TabIndex = 15;
			this->tbinput->TextChanged += gcnew System::EventHandler(this, &cancelTicket::textBox1_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->tbinput);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(145, 108);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(686, 129);
			this->panel3->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(574, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 31);
			this->button1->TabIndex = 16;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cancelTicket::button1_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel4->Controls->Add(this->fareLabel);
			this->panel4->Controls->Add(this->spLabel);
			this->panel4->Controls->Add(this->classLabel);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->seatnumLabel);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->waitLabel);
			this->panel4->Location = System::Drawing::Point(145, 255);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(686, 130);
			this->panel4->TabIndex = 17;
			// 
			// fareLabel
			// 
			this->fareLabel->BackColor = System::Drawing::Color::White;
			this->fareLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fareLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fareLabel->ForeColor = System::Drawing::Color::Black;
			this->fareLabel->Location = System::Drawing::Point(423, 92);
			this->fareLabel->Name = L"fareLabel";
			this->fareLabel->Size = System::Drawing::Size(154, 21);
			this->fareLabel->TabIndex = 26;
			this->fareLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// spLabel
			// 
			this->spLabel->BackColor = System::Drawing::Color::White;
			this->spLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->spLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spLabel->ForeColor = System::Drawing::Color::Black;
			this->spLabel->Location = System::Drawing::Point(167, 89);
			this->spLabel->Name = L"spLabel";
			this->spLabel->Size = System::Drawing::Size(167, 21);
			this->spLabel->TabIndex = 26;
			this->spLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// classLabel
			// 
			this->classLabel->BackColor = System::Drawing::Color::White;
			this->classLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->classLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classLabel->ForeColor = System::Drawing::Color::Black;
			this->classLabel->Location = System::Drawing::Point(423, 59);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(154, 21);
			this->classLabel->TabIndex = 25;
			this->classLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(371, 94);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 19);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Fare:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(85, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 19);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Provider:";
			// 
			// seatnumLabel
			// 
			this->seatnumLabel->BackColor = System::Drawing::Color::White;
			this->seatnumLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->seatnumLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seatnumLabel->ForeColor = System::Drawing::Color::Black;
			this->seatnumLabel->Location = System::Drawing::Point(167, 60);
			this->seatnumLabel->Name = L"seatnumLabel";
			this->seatnumLabel->Size = System::Drawing::Size(167, 21);
			this->seatnumLabel->TabIndex = 18;
			this->seatnumLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(363, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 19);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Class:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(87, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 19);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Seat No:";
			// 
			// waitLabel
			// 
			this->waitLabel->BackColor = System::Drawing::Color::Transparent;
			this->waitLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->waitLabel->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->waitLabel->ForeColor = System::Drawing::Color::Black;
			this->waitLabel->Location = System::Drawing::Point(0, 0);
			this->waitLabel->Name = L"waitLabel";
			this->waitLabel->Size = System::Drawing::Size(686, 61);
			this->waitLabel->TabIndex = 14;
			this->waitLabel->Text = L"Please Enter Ticket Number First.";
			this->waitLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dltPanel
			// 
			this->dltPanel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->dltPanel->Controls->Add(this->refLabel);
			this->dltPanel->Controls->Add(this->label13);
			this->dltPanel->Controls->Add(this->label11);
			this->dltPanel->Controls->Add(this->label9);
			this->dltPanel->Controls->Add(this->label7);
			this->dltPanel->Controls->Add(this->label6);
			this->dltPanel->Controls->Add(this->cancelBtn);
			this->dltPanel->Controls->Add(this->backBtn);
			this->dltPanel->Location = System::Drawing::Point(145, 401);
			this->dltPanel->Name = L"dltPanel";
			this->dltPanel->Size = System::Drawing::Size(685, 212);
			this->dltPanel->TabIndex = 18;
			this->dltPanel->Visible = false;
			// 
			// refLabel
			// 
			this->refLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refLabel->ForeColor = System::Drawing::Color::Black;
			this->refLabel->Location = System::Drawing::Point(247, 85);
			this->refLabel->Name = L"refLabel";
			this->refLabel->Size = System::Drawing::Size(60, 25);
			this->refLabel->TabIndex = 20;
			this->refLabel->Text = L"1000";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(308, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(293, 25);
			this->label13->TabIndex = 19;
			this->label13->Text = L"will be credited in your wallet.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(209, 85);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 25);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Rs.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(26, 85);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(187, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Refund Amount: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(27, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(631, 20);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Only 70% of the price will be refunded. You will have to book again incase you wa"
				L"nt.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(26, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Warning!";
			// 
			// cancelBtn
			// 
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancelBtn.Image")));
			this->cancelBtn->Location = System::Drawing::Point(147, 128);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(198, 65);
			this->cancelBtn->TabIndex = 10;
			this->cancelBtn->Text = L" Cancel Ticket";
			this->cancelBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->cancelBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->cancelBtn->UseVisualStyleBackColor = true;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &cancelTicket::cancelBtn_Click);
			// 
			// backBtn
			// 
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(363, 128);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(168, 65);
			this->backBtn->TabIndex = 9;
			this->backBtn->Text = L" Go Back";
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->backBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &cancelTicket::backBtn_Click);
			// 
			// cancelTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 650);
			this->Controls->Add(this->dltPanel);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"cancelTicket";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"cancelTicket";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->dltPanel->ResumeLayout(false);
			this->dltPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	public: Ticket tk;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tk.user = user;
		tk.ticketnum = Convert::ToInt32(this->tbinput->Text);

		bool ticketFound = tk.checkTicket();
		if (ticketFound) {
			this->waitLabel->Text = "! ... Ticket Found ... !";
			this->seatnumLabel->Text = tk.seatNum;
			this->classLabel->Text = tk.bus->trClass;
			this->fareLabel->Text = Convert::ToString(tk.fare);
			this->spLabel->Text = tk.bus->sProv;

			int ref = tk.fare * 70 / 100;

			this->dltPanel->Visible = true;
			this->refLabel->Text = Convert::ToString(ref);
		}
		else {
			this->waitLabel->Text = "! ... Ticket Not Found ... !";
			this->seatnumLabel->Text = "";
			this->classLabel->Text = "";
			this->fareLabel->Text = "";
			this->spLabel->Text = "";

			this->dltPanel->Visible = false;
		}
	}
	private: System::Void backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int refund = 0;
		tk.deleteSeats(refund);
		user->balance += refund;
		balanceLabel->Text = "Rs. " + user->balance;

		MessageBox::Show("Your ticket is Cancelled. Refund will be credited Shortly.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->waitLabel->Text = "! ... Successfuly Cancelled ... !";
		this->seatnumLabel->Text = "";
		this->classLabel->Text = "";
		this->fareLabel->Text = "";
		this->spLabel->Text = "";

		this->dltPanel->Visible = false;
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
