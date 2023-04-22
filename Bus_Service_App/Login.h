#pragma once
#include"userClass.h"
namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbusername;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ loginbtn;
	private: System::Windows::Forms::Button^ cancelbtn;
	private: System::Windows::Forms::Button^ signupbtn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ adminlink;

	protected:

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->signupbtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->adminlink = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 59);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(548, 41);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Welcome to Bus Service Application.";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 207);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 260);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// tbusername
			// 
			this->tbusername->ForeColor = System::Drawing::Color::Gray;
			this->tbusername->Location = System::Drawing::Point(209, 206);
			this->tbusername->Margin = System::Windows::Forms::Padding(4);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(323, 22);
			this->tbusername->TabIndex = 0;
			this->tbusername->TabStop = false;
			this->tbusername->Text = L"Enter Username";
			this->tbusername->Enter += gcnew System::EventHandler(this, &Login::tbusername_Enter);
			this->tbusername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::tbusername_KeyDown);
			this->tbusername->Leave += gcnew System::EventHandler(this, &Login::tbusername_Leave);
			// 
			// tbpassword
			// 
			this->tbpassword->ForeColor = System::Drawing::Color::Gray;
			this->tbpassword->Location = System::Drawing::Point(209, 258);
			this->tbpassword->Margin = System::Windows::Forms::Padding(4);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Size = System::Drawing::Size(323, 22);
			this->tbpassword->TabIndex = 1;
			this->tbpassword->TabStop = false;
			this->tbpassword->Text = L"Enter Password";
			this->tbpassword->Enter += gcnew System::EventHandler(this, &Login::tbpassword_Enter);
			this->tbpassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::tbpassword_KeyDown);
			this->tbpassword->Leave += gcnew System::EventHandler(this, &Login::tbpassword_Leave);
			// 
			// loginbtn
			// 
			this->loginbtn->Location = System::Drawing::Point(280, 324);
			this->loginbtn->Margin = System::Windows::Forms::Padding(4);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(108, 28);
			this->loginbtn->TabIndex = 2;
			this->loginbtn->Text = L"Login";
			this->loginbtn->UseVisualStyleBackColor = true;
			this->loginbtn->Click += gcnew System::EventHandler(this, &Login::loginbtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->Location = System::Drawing::Point(405, 324);
			this->cancelbtn->Margin = System::Windows::Forms::Padding(4);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(100, 28);
			this->cancelbtn->TabIndex = 3;
			this->cancelbtn->Text = L"Cancel";
			this->cancelbtn->UseVisualStyleBackColor = true;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &Login::cancelbtn_Click);
			// 
			// signupbtn
			// 
			this->signupbtn->Location = System::Drawing::Point(432, 402);
			this->signupbtn->Margin = System::Windows::Forms::Padding(4);
			this->signupbtn->Name = L"signupbtn";
			this->signupbtn->Size = System::Drawing::Size(100, 28);
			this->signupbtn->TabIndex = 7;
			this->signupbtn->Text = L"Signup";
			this->signupbtn->UseVisualStyleBackColor = true;
			this->signupbtn->Click += gcnew System::EventHandler(this, &Login::signupbtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(206, 407);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"SignUp Instead\?";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 121);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(548, 41);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Please Login to Continue:";
			// 
			// adminlink
			// 
			this->adminlink->AutoSize = true;
			this->adminlink->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminlink->Location = System::Drawing::Point(453, 150);
			this->adminlink->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->adminlink->Name = L"adminlink";
			this->adminlink->Size = System::Drawing::Size(273, 24);
			this->adminlink->TabIndex = 11;
			this->adminlink->TabStop = true;
			this->adminlink->Text = L"Click here to login as Admin";
			this->adminlink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::adminlink_LinkClicked);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 565);
			this->Controls->Add(this->adminlink);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->signupbtn);
			this->Controls->Add(this->cancelbtn);
			this->Controls->Add(this->loginbtn);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public: Passenger^ user = nullptr;
	public: bool toSignup = false;
	public: bool adminLogin = false;

	private: System::Void loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		Passenger^ temp = gcnew Passenger;
		temp->username = this->tbusername->Text;
		temp->password = this->tbpassword->Text;

		bool checkLogin = temp->verifyLogin();

		if (checkLogin)
		{
			user = temp;	//It means that user will be logged in.
			this->Close();
		}
		else {
			MessageBox::Show("Incorrect Details", "Wrong info", MessageBoxButtons::OK);
		}

	}
	private: System::Void signupbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->toSignup = true;
		this->Close();
	}

	private: System::Void adminlink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->adminLogin = true;
		this->Close();
	}
	private: System::Void cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tbusername_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbusername->Text == "Enter Username") {
			tbusername->Text = "";
			tbusername->ForeColor = Color::Black;
		}
	}
	private: System::Void tbusername_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbusername->Text == "") {
			tbusername->Text = "Enter Username";
			tbusername->ForeColor = Color::Gray;
		}

	}
	private: System::Void tbpassword_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (tbpassword->Text == "Enter Password") {
			tbpassword->Text = "";
			tbpassword->ForeColor = Color::Black;
			tbpassword->PasswordChar = '*';
		}

	}
	private: System::Void tbpassword_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (tbpassword->Text == "") {
			tbpassword->Text = "Enter Password";
			tbpassword->ForeColor = Color::Gray;
		}

	}
	private: System::Void tbusername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			// Get the sender control
			Control^ txt = dynamic_cast<Control^>(sender);

			// Set focus to the next control
			this->SelectNextControl(txt, true, false, true, true);

			// Mark the key event as handled
			e->Handled = true;
			e->SuppressKeyPress = true;
		}
	}
	private: System::Void tbpassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			Passenger^ temp = gcnew Passenger;
			temp->username = this->tbusername->Text;
			temp->password = this->tbpassword->Text;

			bool checkLogin = temp->verifyLogin();

			if (checkLogin)
			{
				user = temp;	//It means that user will be logged in.
				this->Close();
			}
			else {
				MessageBox::Show("Incorrect Details", "Wrong info", MessageBoxButtons::OK);
			}

			e->Handled = true;
			e->SuppressKeyPress = true;
		}

	}

	};
}
