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
	/// Summary for menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(Passenger^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			nameLabel->Text = user->name;
			balanceLabel->Text = "Rs. " + user->balance;
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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 84);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(521, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bus Service Application";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(765, 84);
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
			this->balanceLabel->Location = System::Drawing::Point(861, 86);
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
			this->menuStrip1->Size = System::Drawing::Size(1021, 28);
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
			this->bookBtn->Location = System::Drawing::Point(217, 198);
			this->bookBtn->Margin = System::Windows::Forms::Padding(4);
			this->bookBtn->Name = L"bookBtn";
			this->bookBtn->Size = System::Drawing::Size(240, 80);
			this->bookBtn->TabIndex = 4;
			this->bookBtn->Text = L"Book Seats";
			this->bookBtn->UseVisualStyleBackColor = true;
			this->bookBtn->Click += gcnew System::EventHandler(this, &menu::bookBtn_Click);
			// 
			// seeBtn
			// 
			this->seeBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seeBtn->Location = System::Drawing::Point(543, 198);
			this->seeBtn->Margin = System::Windows::Forms::Padding(4);
			this->seeBtn->Name = L"seeBtn";
			this->seeBtn->Size = System::Drawing::Size(240, 80);
			this->seeBtn->TabIndex = 5;
			this->seeBtn->Text = L"See Schedules";
			this->seeBtn->UseVisualStyleBackColor = true;
			// 
			// ticketsBtn
			// 
			this->ticketsBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticketsBtn->Location = System::Drawing::Point(217, 320);
			this->ticketsBtn->Margin = System::Windows::Forms::Padding(4);
			this->ticketsBtn->Name = L"ticketsBtn";
			this->ticketsBtn->Size = System::Drawing::Size(240, 80);
			this->ticketsBtn->TabIndex = 6;
			this->ticketsBtn->Text = L"View Your Tickets";
			this->ticketsBtn->UseVisualStyleBackColor = true;
			// 
			// cancelBtn
			// 
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelBtn->Location = System::Drawing::Point(543, 320);
			this->cancelBtn->Margin = System::Windows::Forms::Padding(4);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(240, 80);
			this->cancelBtn->TabIndex = 7;
			this->cancelBtn->Text = L"Cancel Tickets";
			this->cancelBtn->UseVisualStyleBackColor = true;
			// 
			// customerBtn
			// 
			this->customerBtn->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerBtn->Location = System::Drawing::Point(381, 442);
			this->customerBtn->Margin = System::Windows::Forms::Padding(4);
			this->customerBtn->Name = L"customerBtn";
			this->customerBtn->Size = System::Drawing::Size(240, 80);
			this->customerBtn->TabIndex = 8;
			this->customerBtn->Text = L"Customer Care";
			this->customerBtn->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(763, 57);
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
			this->nameLabel->Location = System::Drawing::Point(885, 58);
			this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(60, 22);
			this->nameLabel->TabIndex = 10;
			this->nameLabel->Text = L"Name";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1021, 592);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->customerBtn);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->ticketsBtn);
			this->Controls->Add(this->seeBtn);
			this->Controls->Add(this->bookBtn);
			this->Controls->Add(this->balanceLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"menu";
			this->Text = L"menu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool logout = false;

	private: System::Void logOutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->logout = true;
		this->Close();
	}
	private: System::Void bookBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
