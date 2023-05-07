#pragma once
#include"userClass.h"
#include"ticketClass.h"
#include"payment.h"

namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ticketPayment
	/// </summary>
	public ref class ticketPayment : public System::Windows::Forms::Form
	{
	public:Passenger^ user;
	public:Ticket^ ticket;
	public:String^ bookedArr;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Panel^ ticketPanel;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ arrLabel;
	private: System::Windows::Forms::Label^ depLabel;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ ticketNumLabel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ provLabel;

	private: System::Windows::Forms::Label^ classLabel;

	private: System::Windows::Forms::Label^ seatsLabel;

	private: System::Windows::Forms::Label^ passengerLabel;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ successLabel;

	private: System::Windows::Forms::Button^ gobackBtn;
	private: System::Windows::Forms::Button^ bookMoreBtn;
	public:
	public:String^ selArr;

	public:
		ticketPayment(Passenger^ u, Ticket^ t, String^ bArr, String^ sArr)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			user = u;
			nameLabel->Text = u->name;
			balanceLabel->Text = "Rs. " + u->balance;
			ticket = t;
			bookedArr = bArr;
			selArr = sArr;
			this->fareLabel->Text = "Rs. " + ticket->fare;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ticketPayment()
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ mainPanel;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ fareLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ cardBtn;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ addLink;
	private: System::Windows::Forms::Button^ cancelBtn;

	private: System::Windows::Forms::Button^ payBtn;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ticketPayment::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->cardBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->addLink = (gcnew System::Windows::Forms::Label());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->payBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->fareLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ticketPanel = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
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
			this->successLabel = (gcnew System::Windows::Forms::Label());
			this->gobackBtn = (gcnew System::Windows::Forms::Button());
			this->bookMoreBtn = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->mainPanel->SuspendLayout();
			this->ticketPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->balanceLabel);
			this->panel2->Controls->Add(this->nameLabel);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(-1, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(228, 79);
			this->panel2->TabIndex = 14;
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
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->back);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(229, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(833, 79);
			this->panel1->TabIndex = 13;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::SteelBlue;
			this->back->FlatAppearance->BorderSize = 0;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.Image")));
			this->back->Location = System::Drawing::Point(18, 9);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(69, 65);
			this->back->TabIndex = 33;
			this->back->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &ticketPayment::back_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(252, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(403, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Payment through Wallet";
			// 
			// mainPanel
			// 
			this->mainPanel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->mainPanel->Controls->Add(this->cardBtn);
			this->mainPanel->Controls->Add(this->label6);
			this->mainPanel->Controls->Add(this->addLink);
			this->mainPanel->Controls->Add(this->cancelBtn);
			this->mainPanel->Controls->Add(this->payBtn);
			this->mainPanel->Controls->Add(this->label5);
			this->mainPanel->Controls->Add(this->fareLabel);
			this->mainPanel->Controls->Add(this->label4);
			this->mainPanel->Location = System::Drawing::Point(215, 175);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(654, 303);
			this->mainPanel->TabIndex = 15;
			// 
			// cardBtn
			// 
			this->cardBtn->BackColor = System::Drawing::Color::Transparent;
			this->cardBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cardBtn->Location = System::Drawing::Point(63, 224);
			this->cardBtn->Name = L"cardBtn";
			this->cardBtn->Size = System::Drawing::Size(168, 44);
			this->cardBtn->TabIndex = 17;
			this->cardBtn->Text = L"Debit / Credit Card";
			this->cardBtn->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(37, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 18);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Other Ways:";
			// 
			// addLink
			// 
			this->addLink->AutoSize = true;
			this->addLink->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addLink->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addLink->ForeColor = System::Drawing::Color::MediumBlue;
			this->addLink->Location = System::Drawing::Point(412, 192);
			this->addLink->Name = L"addLink";
			this->addLink->Size = System::Drawing::Size(222, 17);
			this->addLink->TabIndex = 15;
			this->addLink->Text = L"Click here to Add money to wallet";
			this->addLink->Click += gcnew System::EventHandler(this, &ticketPayment::addLink_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->BackColor = System::Drawing::Color::Transparent;
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cancelBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelBtn->Location = System::Drawing::Point(339, 122);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(126, 44);
			this->cancelBtn->TabIndex = 14;
			this->cancelBtn->Text = L"Cancel";
			this->cancelBtn->UseVisualStyleBackColor = false;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &ticketPayment::cancelBtn_Click);
			// 
			// payBtn
			// 
			this->payBtn->BackColor = System::Drawing::Color::Transparent;
			this->payBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->payBtn->Location = System::Drawing::Point(185, 122);
			this->payBtn->Name = L"payBtn";
			this->payBtn->Size = System::Drawing::Size(126, 44);
			this->payBtn->TabIndex = 13;
			this->payBtn->Text = L"Pay Now";
			this->payBtn->UseVisualStyleBackColor = false;
			this->payBtn->Click += gcnew System::EventHandler(this, &ticketPayment::payBtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(352, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(284, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"through your Wallet Balance.";
			// 
			// fareLabel
			// 
			this->fareLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->fareLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->fareLabel->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fareLabel->ForeColor = System::Drawing::Color::Black;
			this->fareLabel->Location = System::Drawing::Point(220, 62);
			this->fareLabel->Name = L"fareLabel";
			this->fareLabel->Size = System::Drawing::Size(124, 29);
			this->fareLabel->TabIndex = 11;
			this->fareLabel->Text = L"Rs. 1000";
			this->fareLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(21, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"You will be charged";
			// 
			// ticketPanel
			// 
			this->ticketPanel->BackColor = System::Drawing::Color::Silver;
			this->ticketPanel->Controls->Add(this->label14);
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
			this->ticketPanel->Location = System::Drawing::Point(416, 180);
			this->ticketPanel->Name = L"ticketPanel";
			this->ticketPanel->Size = System::Drawing::Size(297, 399);
			this->ticketPanel->TabIndex = 16;
			this->ticketPanel->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(88, 302);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(90, 23);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Rs. 2000";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(25, 301);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 24);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Fare:";
			// 
			// provLabel
			// 
			this->provLabel->AutoSize = true;
			this->provLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->provLabel->ForeColor = System::Drawing::Color::Black;
			this->provLabel->Location = System::Drawing::Point(123, 266);
			this->provLabel->Name = L"provLabel";
			this->provLabel->Size = System::Drawing::Size(83, 23);
			this->provLabel->TabIndex = 24;
			this->provLabel->Text = L"Daewoo";
			// 
			// classLabel
			// 
			this->classLabel->AutoSize = true;
			this->classLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classLabel->ForeColor = System::Drawing::Color::Black;
			this->classLabel->Location = System::Drawing::Point(94, 229);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(88, 23);
			this->classLabel->TabIndex = 23;
			this->classLabel->Text = L"Business";
			// 
			// seatsLabel
			// 
			this->seatsLabel->AutoSize = true;
			this->seatsLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seatsLabel->ForeColor = System::Drawing::Color::Black;
			this->seatsLabel->Location = System::Drawing::Point(174, 192);
			this->seatsLabel->Name = L"seatsLabel";
			this->seatsLabel->Size = System::Drawing::Size(55, 23);
			this->seatsLabel->TabIndex = 22;
			this->seatsLabel->Text = L"2,3,4";
			// 
			// passengerLabel
			// 
			this->passengerLabel->AutoSize = true;
			this->passengerLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passengerLabel->ForeColor = System::Drawing::Color::Black;
			this->passengerLabel->Location = System::Drawing::Point(98, 154);
			this->passengerLabel->Name = L"passengerLabel";
			this->passengerLabel->Size = System::Drawing::Size(124, 23);
			this->passengerLabel->TabIndex = 21;
			this->passengerLabel->Text = L"Maaz Ahmad";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(70, 64);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(141, 3);
			this->panel5->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(129, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 24);
			this->label12->TabIndex = 19;
			this->label12->Text = L"---";
			// 
			// arrLabel
			// 
			this->arrLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrLabel->ForeColor = System::Drawing::Color::Black;
			this->arrLabel->Location = System::Drawing::Point(165, 93);
			this->arrLabel->Name = L"arrLabel";
			this->arrLabel->Size = System::Drawing::Size(129, 24);
			this->arrLabel->TabIndex = 18;
			this->arrLabel->Text = L"Multan";
			this->arrLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// depLabel
			// 
			this->depLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depLabel->ForeColor = System::Drawing::Color::Black;
			this->depLabel->Location = System::Drawing::Point(3, 92);
			this->depLabel->Name = L"depLabel";
			this->depLabel->Size = System::Drawing::Size(124, 24);
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
			this->label11->Location = System::Drawing::Point(25, 265);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 24);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Provider: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(24, 228);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 24);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Class:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(24, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 24);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Seats Booked:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(24, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 24);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Name:";
			// 
			// ticketNumLabel
			// 
			this->ticketNumLabel->AutoSize = true;
			this->ticketNumLabel->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticketNumLabel->ForeColor = System::Drawing::Color::Black;
			this->ticketNumLabel->Location = System::Drawing::Point(178, 33);
			this->ticketNumLabel->Name = L"ticketNumLabel";
			this->ticketNumLabel->Size = System::Drawing::Size(36, 26);
			this->ticketNumLabel->TabIndex = 12;
			this->ticketNumLabel->Text = L"10";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(65, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 26);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Ticket no.";
			// 
			// successLabel
			// 
			this->successLabel->AutoSize = true;
			this->successLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->successLabel->ForeColor = System::Drawing::Color::Black;
			this->successLabel->Location = System::Drawing::Point(213, 124);
			this->successLabel->Name = L"successLabel";
			this->successLabel->Size = System::Drawing::Size(284, 24);
			this->successLabel->TabIndex = 17;
			this->successLabel->Text = L"Seat/s Booked Successfully. ";
			this->successLabel->Visible = false;
			// 
			// gobackBtn
			// 
			this->gobackBtn->BackColor = System::Drawing::Color::Transparent;
			this->gobackBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gobackBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gobackBtn->Location = System::Drawing::Point(511, 115);
			this->gobackBtn->Name = L"gobackBtn";
			this->gobackBtn->Size = System::Drawing::Size(168, 44);
			this->gobackBtn->TabIndex = 18;
			this->gobackBtn->Text = L"Back to Menu";
			this->gobackBtn->UseVisualStyleBackColor = false;
			this->gobackBtn->Visible = false;
			this->gobackBtn->Click += gcnew System::EventHandler(this, &ticketPayment::gobackBtn_Click);
			// 
			// bookMoreBtn
			// 
			this->bookMoreBtn->BackColor = System::Drawing::Color::Transparent;
			this->bookMoreBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookMoreBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bookMoreBtn->Location = System::Drawing::Point(686, 115);
			this->bookMoreBtn->Name = L"bookMoreBtn";
			this->bookMoreBtn->Size = System::Drawing::Size(183, 44);
			this->bookMoreBtn->TabIndex = 19;
			this->bookMoreBtn->Text = L"Book more Tickets";
			this->bookMoreBtn->UseVisualStyleBackColor = false;
			this->bookMoreBtn->Visible = false;
			this->bookMoreBtn->Click += gcnew System::EventHandler(this, &ticketPayment::bookMoreBtn_Click);
			// 
			// ticketPayment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 637);
			this->Controls->Add(this->bookMoreBtn);
			this->Controls->Add(this->gobackBtn);
			this->Controls->Add(this->successLabel);
			this->Controls->Add(this->ticketPanel);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"ticketPayment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ticketPayment";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->mainPanel->ResumeLayout(false);
			this->mainPanel->PerformLayout();
			this->ticketPanel->ResumeLayout(false);
			this->ticketPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void payBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user->balance >= ticket->fare) {
			if (user->removebalance(ticket->fare))
			{
				ticket->setbookedseats(bookedArr, selArr);
				MessageBox::Show("Ticket booked successfully. Ticket number is: " + ticket->ticketnum, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->payBtn->Enabled = false;
				this->cardBtn->Enabled = false;
				this->cancelBtn->Enabled = false;
				this->mainPanel->Visible = false;
				this->ticketPanel->Visible = true;
				this->passengerLabel->Text = user->name;
				this->ticketNumLabel->Text = Convert::ToString(ticket->ticketnum);
				this->seatsLabel->Text = ticket->seatNum;
				this->provLabel->Text = ticket->bus->sProv;
				this->classLabel->Text = ticket->bus->trClass;
				this->arrLabel->Text = ticket->bus->route->arrLoc;
				this->depLabel->Text = ticket->bus->route->depLoc;
				this->fareLabel->Text = "Rs. " + ticket->fare;
				this->successLabel->Visible = true;
				this->gobackBtn->Visible = true;
				this->bookMoreBtn->Visible = true;
				balanceLabel->Text = "Rs. " + user->balance;
				this->back->Visible = false;
			}
			else MessageBox::Show("Something went wrong. Please try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else MessageBox::Show("Insufficient Balance in the Wallet. Please Add some money in your wallet and try again.", "Insufficient Balance", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void addLink_Click(System::Object^ sender, System::EventArgs^ e) {
		Bus_Service_App::payment addWalletForm(user);
		addWalletForm.ShowDialog();
		this->balanceLabel->Text = "Rs. " + user->balance;
	}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	public:bool backToMenu = false;
	public:bool bookMore = false;


	private: System::Void gobackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		backToMenu = true;
		this->Close();
	}
	private: System::Void bookMoreBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		bookMore = true;
		this->Close();
	}
};
}
