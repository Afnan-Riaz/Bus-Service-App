#pragma once

#include"userClass.h"
#include"cancelTicket.h"
#include"ticketClass.h"
#include "CustomerCareForm.h" 
#include"complaintsForm.h"
#include"payment.h"
#include"Show_Bus_Details.h"
#include"busClass.h"
#include"routeClass.h"
#include"sceduleClass.h"
#include"viewTickets.h"
#include"seeSchedules.h"

using namespace System::Windows::Forms;

namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		Passenger^ user;

		menu(Passenger^ u)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ balanceLabel;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ accountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manageAccountToolStripMenuItem;
	private: System::Windows::Forms::Button^ bookBtn;
	private: System::Windows::Forms::Button^ seeBtn;
	private: System::Windows::Forms::Button^ ticketsBtn;



	private: System::Windows::Forms::Button^ cancelBtn;
	private: System::Windows::Forms::Button^ customerBtn;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ cprt;
	private: System::Windows::Forms::Button^ walletBtn;
		   //private: System::Windows::Forms::Button^ button1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bookBtn = (gcnew System::Windows::Forms::Button());
			this->seeBtn = (gcnew System::Windows::Forms::Button());
			this->ticketsBtn = (gcnew System::Windows::Forms::Button());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->customerBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->cprt = (gcnew System::Windows::Forms::Label());
			this->walletBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(473, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Home";
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
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accountToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1371, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accountToolStripMenuItem
			// 
			this->accountToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->logOutToolStripMenuItem,
					this->manageAccountToolStripMenuItem
			});
			this->accountToolStripMenuItem->Name = L"accountToolStripMenuItem";
			this->accountToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->accountToolStripMenuItem->Text = L"Account";
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->logOutToolStripMenuItem->Text = L"Log Out";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::logOutToolStripMenuItem_Click);
			// 
			// manageAccountToolStripMenuItem
			// 
			this->manageAccountToolStripMenuItem->Name = L"manageAccountToolStripMenuItem";
			this->manageAccountToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->manageAccountToolStripMenuItem->Text = L"Manage Account";
			// 
			// bookBtn
			// 
			this->bookBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bookBtn.Image")));
			this->bookBtn->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->bookBtn->Location = System::Drawing::Point(351, 209);
			this->bookBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bookBtn->Name = L"bookBtn";
			this->bookBtn->Size = System::Drawing::Size(311, 80);
			this->bookBtn->TabIndex = 4;
			this->bookBtn->Text = L"    Book Seats";
			this->bookBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bookBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->bookBtn->UseVisualStyleBackColor = true;
			this->bookBtn->Click += gcnew System::EventHandler(this, &menu::bookBtn_Click);
			// 
			// seeBtn
			// 
			this->seeBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seeBtn.Image")));
			this->seeBtn->Location = System::Drawing::Point(724, 209);
			this->seeBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->seeBtn->Name = L"seeBtn";
			this->seeBtn->Size = System::Drawing::Size(311, 80);
			this->seeBtn->TabIndex = 5;
			this->seeBtn->Text = L"  See Schedules";
			this->seeBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->seeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->seeBtn->UseVisualStyleBackColor = true;
			this->seeBtn->Click += gcnew System::EventHandler(this, &menu::seeBtn_Click);
			// 
			// ticketsBtn
			// 
			this->ticketsBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticketsBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ticketsBtn.Image")));
			this->ticketsBtn->Location = System::Drawing::Point(351, 331);
			this->ticketsBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ticketsBtn->Name = L"ticketsBtn";
			this->ticketsBtn->Size = System::Drawing::Size(311, 80);
			this->ticketsBtn->TabIndex = 6;
			this->ticketsBtn->Text = L"   View Tickets";
			this->ticketsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ticketsBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ticketsBtn->UseVisualStyleBackColor = true;
			this->ticketsBtn->Click += gcnew System::EventHandler(this, &menu::ticketsBtn_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancelBtn.Image")));
			this->cancelBtn->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->cancelBtn->Location = System::Drawing::Point(724, 331);
			this->cancelBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(311, 80);
			this->cancelBtn->TabIndex = 7;
			this->cancelBtn->Text = L"  Cancel Tickets";
			this->cancelBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->cancelBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->cancelBtn->UseVisualStyleBackColor = true;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &menu::cancelBtn_Click);
			// 
			// customerBtn
			// 
			this->customerBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"customerBtn.Image")));
			this->customerBtn->Location = System::Drawing::Point(724, 458);
			this->customerBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->customerBtn->Name = L"customerBtn";
			this->customerBtn->Size = System::Drawing::Size(311, 80);
			this->customerBtn->TabIndex = 8;
			this->customerBtn->Text = L" Customer Care";
			this->customerBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->customerBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->customerBtn->UseVisualStyleBackColor = true;
			this->customerBtn->Click += gcnew System::EventHandler(this, &menu::customerBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(31, 22);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Signed in:";
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
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(307, 32);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1064, 97);
			this->panel1->TabIndex = 11;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->balanceLabel);
			this->panel2->Controls->Add(this->nameLabel);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(0, 32);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(304, 97);
			this->panel2->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->Controls->Add(this->cprt);
			this->panel3->Location = System::Drawing::Point(0, 684);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1371, 68);
			this->panel3->TabIndex = 13;
			// 
			// cprt
			// 
			this->cprt->AutoSize = true;
			this->cprt->BackColor = System::Drawing::Color::Transparent;
			this->cprt->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cprt->ForeColor = System::Drawing::Color::White;
			this->cprt->Location = System::Drawing::Point(349, 26);
			this->cprt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->cprt->Name = L"cprt";
			this->cprt->Size = System::Drawing::Size(714, 24);
			this->cprt->TabIndex = 14;
			this->cprt->Text = L"Copyright 2022-2026 | Developed By Bus Conductors | All Rights Reserved";
			// 
			// walletBtn
			// 
			this->walletBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->walletBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"walletBtn.Image")));
			this->walletBtn->Location = System::Drawing::Point(351, 458);
			this->walletBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->walletBtn->Name = L"walletBtn";
			this->walletBtn->Size = System::Drawing::Size(311, 80);
			this->walletBtn->TabIndex = 14;
			this->walletBtn->Text = L"  Add to Wallet";
			this->walletBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->walletBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->walletBtn->UseVisualStyleBackColor = true;
			this->walletBtn->Click += gcnew System::EventHandler(this, &menu::walletBtn_Click);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1371, 750);
			this->Controls->Add(this->walletBtn);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->customerBtn);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->ticketsBtn);
			this->Controls->Add(this->seeBtn);
			this->Controls->Add(this->bookBtn);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->Name = L"menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Service Application";
			this->Load += gcnew System::EventHandler(this, &menu::menu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool logout = false;

	private: System::Void logOutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->logout = true;
		this->Close();
	}
	private: System::Void customerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CustomerCareForm^ customerCareForm = gcnew CustomerCareForm(user);
		customerCareForm->ShowDialog();
		if (customerCareForm->maaz) {
			Bus_Service_App::complaintsForm cf(user);
			cf.ShowDialog();
		}
	}

	private: System::Void menu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		   //	payment^ Payment = gcnew payment(pass);
		   //	Payment->ShowDialog();
		   //
		   //}


	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Bus_Service_App::cancelTicket cancelform(this->user);
		//this->Close();
		cancelform.ShowDialog();
		balanceLabel->Text = "Rs. " + user->balance;
	}
	private: System::Void walletBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		payment^ Payment = gcnew payment(user);
		Payment->ShowDialog();
		balanceLabel->Text = "Rs. " + user->balance;
	}
	private: System::Void bookBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Bus_Service_App::Show_Bus_Details showBusForm(user);
		showBusForm.ShowDialog();
		if (showBusForm.openAgain)
		{
			Bus_Service_App::Show_Bus_Details busForm(user);
			busForm.ShowDialog();
		}
		balanceLabel->Text = "Rs. " + user->balance;
	}
	
	private: System::Void ticketsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Bus_Service_App::viewTickets viewTicketsForm(user);
		viewTicketsForm.ShowDialog();
	}
	private: System::Void seeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Bus_Service_App::seeSchedules scedsForm(user);
		scedsForm.ShowDialog();
	}
};
}