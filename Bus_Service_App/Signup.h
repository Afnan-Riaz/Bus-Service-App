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
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ nametb;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ phonetb;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ passtb;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ repasstb;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::LinkLabel^ loginInsteadBtn;
	private: System::Windows::Forms::TextBox^ tbaddress;
	private: System::Windows::Forms::Label^ label9;





	private: System::Windows::Forms::TextBox^ usernametb;
	private: System::Windows::Forms::TextBox^ emailtb;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ cancelBtn;
	private: System::Windows::Forms::Button^ signupBtn;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nametb = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->phonetb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->passtb = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->repasstb = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->loginInsteadBtn = (gcnew System::Windows::Forms::LinkLabel());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->usernametb = (gcnew System::Windows::Forms::TextBox());
			this->emailtb = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->signupBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(22, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Signup.";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(280, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the following Details:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Username:";
			// 
			// nametb
			// 
			this->nametb->BackColor = System::Drawing::SystemColors::Control;
			this->nametb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nametb->ForeColor = System::Drawing::Color::Gray;
			this->nametb->Location = System::Drawing::Point(46, 225);
			this->nametb->Multiline = true;
			this->nametb->Name = L"nametb";
			this->nametb->Size = System::Drawing::Size(257, 18);
			this->nametb->TabIndex = 4;
			this->nametb->TabStop = false;
			this->nametb->Text = L"Enter Name";
			this->nametb->Enter += gcnew System::EventHandler(this, &Signup::nametb_Enter);
			this->nametb->Leave += gcnew System::EventHandler(this, &Signup::nametb_Leave);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Name:";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(33, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Email Address:";
			// 
			// phonetb
			// 
			this->phonetb->BackColor = System::Drawing::SystemColors::Control;
			this->phonetb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phonetb->ForeColor = System::Drawing::Color::Gray;
			this->phonetb->Location = System::Drawing::Point(46, 361);
			this->phonetb->Multiline = true;
			this->phonetb->Name = L"phonetb";
			this->phonetb->Size = System::Drawing::Size(257, 18);
			this->phonetb->TabIndex = 6;
			this->phonetb->TabStop = false;
			this->phonetb->Text = L"Enter Phone No.";
			this->phonetb->Enter += gcnew System::EventHandler(this, &Signup::phonetb_Enter);
			this->phonetb->Leave += gcnew System::EventHandler(this, &Signup::phonetb_Leave);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(33, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 22);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Phone No:";
			// 
			// passtb
			// 
			this->passtb->BackColor = System::Drawing::SystemColors::Control;
			this->passtb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passtb->ForeColor = System::Drawing::Color::Gray;
			this->passtb->Location = System::Drawing::Point(46, 496);
			this->passtb->Multiline = true;
			this->passtb->Name = L"passtb";
			this->passtb->Size = System::Drawing::Size(257, 18);
			this->passtb->TabIndex = 8;
			this->passtb->TabStop = false;
			this->passtb->Text = L"Enter Password";
			this->passtb->Enter += gcnew System::EventHandler(this, &Signup::passtb_Enter);
			this->passtb->Leave += gcnew System::EventHandler(this, &Signup::passtb_Leave);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(33, 458);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 27);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Create a Password:";
			// 
			// repasstb
			// 
			this->repasstb->BackColor = System::Drawing::SystemColors::Control;
			this->repasstb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->repasstb->ForeColor = System::Drawing::Color::Gray;
			this->repasstb->Location = System::Drawing::Point(46, 567);
			this->repasstb->Multiline = true;
			this->repasstb->Name = L"repasstb";
			this->repasstb->Size = System::Drawing::Size(257, 18);
			this->repasstb->TabIndex = 9;
			this->repasstb->TabStop = false;
			this->repasstb->Text = L"Re-Enter Password";
			this->repasstb->Enter += gcnew System::EventHandler(this, &Signup::repasstb_Enter);
			this->repasstb->Leave += gcnew System::EventHandler(this, &Signup::repasstb_Leave);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(33, 531);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 24);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Re-enter Password:";
			// 
			// loginInsteadBtn
			// 
			this->loginInsteadBtn->AutoSize = true;
			this->loginInsteadBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginInsteadBtn->Location = System::Drawing::Point(205, 52);
			this->loginInsteadBtn->Name = L"loginInsteadBtn";
			this->loginInsteadBtn->Size = System::Drawing::Size(109, 21);
			this->loginInsteadBtn->TabIndex = 17;
			this->loginInsteadBtn->TabStop = true;
			this->loginInsteadBtn->Text = L"Login Instead";
			this->loginInsteadBtn->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Signup::loginInsteadBtn_LinkClicked);
			// 
			// tbaddress
			// 
			this->tbaddress->BackColor = System::Drawing::SystemColors::Control;
			this->tbaddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbaddress->ForeColor = System::Drawing::Color::Gray;
			this->tbaddress->Location = System::Drawing::Point(46, 425);
			this->tbaddress->Multiline = true;
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(257, 18);
			this->tbaddress->TabIndex = 7;
			this->tbaddress->TabStop = false;
			this->tbaddress->Text = L"Enter Your Address";
			this->tbaddress->Enter += gcnew System::EventHandler(this, &Signup::tbaddress_Enter);
			this->tbaddress->Leave += gcnew System::EventHandler(this, &Signup::tbaddress_Leave);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(33, 389);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 21);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Address";
			// 
			// usernametb
			// 
			this->usernametb->BackColor = System::Drawing::SystemColors::Control;
			this->usernametb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametb->ForeColor = System::Drawing::Color::Gray;
			this->usernametb->Location = System::Drawing::Point(46, 156);
			this->usernametb->Multiline = true;
			this->usernametb->Name = L"usernametb";
			this->usernametb->Size = System::Drawing::Size(257, 16);
			this->usernametb->TabIndex = 3;
			this->usernametb->TabStop = false;
			this->usernametb->Text = L"Enter Username";
			this->usernametb->Enter += gcnew System::EventHandler(this, &Signup::usernametb_Enter);
			this->usernametb->Leave += gcnew System::EventHandler(this, &Signup::usernametb_Leave);
			// 
			// emailtb
			// 
			this->emailtb->BackColor = System::Drawing::SystemColors::Control;
			this->emailtb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->emailtb->ForeColor = System::Drawing::Color::Gray;
			this->emailtb->Location = System::Drawing::Point(46, 291);
			this->emailtb->Multiline = true;
			this->emailtb->Name = L"emailtb";
			this->emailtb->Size = System::Drawing::Size(257, 18);
			this->emailtb->TabIndex = 5;
			this->emailtb->TabStop = false;
			this->emailtb->Text = L"Enter Email Address";
			this->emailtb->Enter += gcnew System::EventHandler(this, &Signup::emailtb_Enter);
			this->emailtb->Leave += gcnew System::EventHandler(this, &Signup::emailtb_Leave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 146);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(276, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(36, 216);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(276, 37);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(36, 282);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(276, 37);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(36, 351);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(276, 37);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(36, 416);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(276, 37);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(36, 487);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(276, 37);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 24;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(36, 557);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(276, 37);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 25;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(339, -8);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(622, 706);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 26;
			this->pictureBox8->TabStop = false;
			// 
			// cancelBtn
			// 
			this->cancelBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancelBtn->FlatAppearance->BorderSize = 2;
			this->cancelBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelBtn->ForeColor = System::Drawing::Color::MediumBlue;
			this->cancelBtn->Location = System::Drawing::Point(185, 613);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(106, 31);
			this->cancelBtn->TabIndex = 27;
			this->cancelBtn->Text = L"Cancel";
			this->cancelBtn->UseVisualStyleBackColor = true;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &Signup::cancelBtn_Click);
			// 
			// signupBtn
			// 
			this->signupBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->signupBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signupBtn->FlatAppearance->BorderSize = 0;
			this->signupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupBtn->ForeColor = System::Drawing::Color::White;
			this->signupBtn->Location = System::Drawing::Point(61, 613);
			this->signupBtn->Name = L"signupBtn";
			this->signupBtn->Size = System::Drawing::Size(106, 31);
			this->signupBtn->TabIndex = 28;
			this->signupBtn->Text = L"Signup";
			this->signupBtn->UseVisualStyleBackColor = false;
			this->signupBtn->Click += gcnew System::EventHandler(this, &Signup::signupBtn_Click);
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(951, 681);
			this->Controls->Add(this->signupBtn);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->repasstb);
			this->Controls->Add(this->passtb);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->emailtb);
			this->Controls->Add(this->nametb);
			this->Controls->Add(this->usernametb);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->loginInsteadBtn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->phonetb);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Signup";
			this->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Signup";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Passenger^ user = nullptr;
	public: bool toLogin = false;

	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void loginInsteadBtn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		toLogin = true;
		this->Close();
	}
	private: System::Void enterbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Passenger^ temp = gcnew Passenger;
		temp->username = this->usernametb->Text;
		temp->name = this->nametb->Text;
		temp->email = this->emailtb->Text;
		temp->phone = this->phonetb->Text;
		temp->password = this->passtb->Text;
		temp->address = this->tbaddress->Text;
		temp->balance = 0;
		String^ repass = this->repasstb->Text;

		if (String::Compare(temp->password, repass) != 0) {
			MessageBox::Show("Passwords doesn't match. Please Try Again.", "Error", MessageBoxButtons::OK);
			return;
		}
		if (temp->username->Length == 0 || temp->name->Length == 0 || temp->email->Length == 0 || temp->phone->Length == 0 || temp->password->Length == 0) {
			MessageBox::Show("Please Fill All the Fields.", "Incomplete Fields", MessageBoxButtons::OK);
			return;
		}

		if (temp->addPassenger())
		{
			MessageBox::Show("Signup Successful.", "Congratulations", MessageBoxButtons::OK);
			user = temp;
		}
		this->Close();
	}
	private: System::Void usernametb_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (usernametb->Text == "Enter Username") {
			usernametb->Text = "";
			usernametb->ForeColor = Color::Black;
		}
	}
	private: System::Void nametb_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (nametb->Text == "Enter Name") {
			nametb->Text = "";
			nametb->ForeColor = Color::Black;
		}

	}
	private: System::Void emailtb_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (emailtb->Text == "Enter Email Address") {
			emailtb->Text = "";
			emailtb->ForeColor = Color::Black;
		}

	}
	private: System::Void phonetb_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (phonetb->Text == "Enter Phone No.") {
			phonetb->Text = "";
			phonetb->ForeColor = Color::Black;
		}

	}
	private: System::Void tbaddress_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbaddress->Text == "Enter Your Address") {
			tbaddress->Text = "";
			tbaddress->ForeColor = Color::Black;
		}

	}
	private: System::Void passtb_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (passtb->Text == "Enter Password") {
			passtb->Text = "";
			passtb->ForeColor = Color::Black;
			passtb->PasswordChar = '*';
		}

	}
	private: System::Void repasstb_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (repasstb->Text == "Re-Enter Password") {
			repasstb->Text = "";
			repasstb->ForeColor = Color::Black;
			repasstb->PasswordChar = '*';
		}

	}
	private: System::Void usernametb_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (usernametb->Text == "") {
			usernametb->Text = "Enter Username";
			usernametb->ForeColor = Color::Gray;
		}
	}
	private: System::Void nametb_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (nametb->Text == "") {
			nametb->Text = "Enter Name";
			nametb->ForeColor = Color::Gray;
		}

	}
	private: System::Void emailtb_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (emailtb->Text == "") {
			emailtb->Text = "Enter Email Address";
			emailtb->ForeColor = Color::Gray;
		}

	}
	private: System::Void phonetb_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (phonetb->Text == "") {
			phonetb->Text = "Enter Phone No.";
			phonetb->ForeColor = Color::Gray;
		}

	}
	private: System::Void tbaddress_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbaddress->Text == "") {
			tbaddress->Text = "Enter Your Address";
			tbaddress->ForeColor = Color::Gray;
		}

	}
	private: System::Void passtb_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (passtb->Text == "") {
			passtb->Text = "Enter Password";
			passtb->ForeColor = Color::Gray;
		}

	}
	private: System::Void repasstb_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (repasstb->Text == "") {
			repasstb->Text = "Re-Enter Password";
			repasstb->ForeColor = Color::Gray;
		}

	}

	private: System::Void signupBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Passenger^ temp = gcnew Passenger;
		temp->username = this->usernametb->Text;
		temp->name = this->nametb->Text;
		temp->email = this->emailtb->Text;
		temp->phone = this->phonetb->Text;
		temp->password = this->passtb->Text;
		temp->address = this->tbaddress->Text;
		temp->balance = 0;
		String^ repass = this->repasstb->Text;

		if (String::Compare(temp->password, repass) != 0) {
			MessageBox::Show("Passwords doesn't match. Please Try Again.", "Error", MessageBoxButtons::OK);
			return;
		}
		if (temp->username->Length == 0 || temp->name->Length == 0 || temp->email->Length == 0 || temp->phone->Length == 0 || temp->password->Length == 0) {
			MessageBox::Show("Please Fill All the Fields.", "Incomplete Fields", MessageBoxButtons::OK);
			return;
		}

		if (temp->addPassenger())
		{
			MessageBox::Show("Signup Successful.", "Congratulations", MessageBoxButtons::OK);
			user = temp;
		}
		else
			MessageBox::Show("Unable to write to the database.", "Database Error", MessageBoxButtons::OK);

		this->Close();
	}
	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
