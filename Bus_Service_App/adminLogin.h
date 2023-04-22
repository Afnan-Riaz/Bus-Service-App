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
	/// Summary for adminLogin 
	/// </summary>
	public ref class adminLogin : public System::Windows::Forms::Form
	{
	public:
		adminLogin(void)
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
		~adminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ usernametbAdmin;
	private: System::Windows::Forms::TextBox^ passtbAdmin;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->usernametbAdmin = (gcnew System::Windows::Forms::TextBox());
			this->passtbAdmin = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->adminlink = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 98);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(512, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Please enter your Adminstrator Credentials:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(80, 212);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(81, 258);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// usernametbAdmin
			// 
			this->usernametbAdmin->ForeColor = System::Drawing::Color::Gray;
			this->usernametbAdmin->Location = System::Drawing::Point(203, 210);
			this->usernametbAdmin->Margin = System::Windows::Forms::Padding(4);
			this->usernametbAdmin->Name = L"usernametbAdmin";
			this->usernametbAdmin->Size = System::Drawing::Size(344, 22);
			this->usernametbAdmin->TabIndex = 0;
			this->usernametbAdmin->TabStop = false;
			this->usernametbAdmin->Text = L"Enter Username";
			this->usernametbAdmin->Enter += gcnew System::EventHandler(this, &adminLogin::usernametbAdmin_Enter);
			this->usernametbAdmin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminLogin::usernametbAdmin_KeyDown);
			this->usernametbAdmin->Leave += gcnew System::EventHandler(this, &adminLogin::usernametbAdmin_Leave);
			// 
			// passtbAdmin
			// 
			this->passtbAdmin->ForeColor = System::Drawing::Color::Gray;
			this->passtbAdmin->Location = System::Drawing::Point(203, 256);
			this->passtbAdmin->Margin = System::Windows::Forms::Padding(4);
			this->passtbAdmin->Name = L"passtbAdmin";
			this->passtbAdmin->Size = System::Drawing::Size(344, 22);
			this->passtbAdmin->TabIndex = 1;
			this->passtbAdmin->TabStop = false;
			this->passtbAdmin->Text = L"Enter Password";
			this->passtbAdmin->Enter += gcnew System::EventHandler(this, &adminLogin::passtbAdmin_Enter);
			this->passtbAdmin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminLogin::passtbAdmin_KeyDown);
			this->passtbAdmin->Leave += gcnew System::EventHandler(this, &adminLogin::passtbAdmin_Leave);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(252, 310);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminLogin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(388, 310);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 36);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminLogin::button2_Click);
			// 
			// adminlink
			// 
			this->adminlink->AutoSize = true;
			this->adminlink->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminlink->Location = System::Drawing::Point(431, 154);
			this->adminlink->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->adminlink->Name = L"adminlink";
			this->adminlink->Size = System::Drawing::Size(259, 24);
			this->adminlink->TabIndex = 12;
			this->adminlink->TabStop = true;
			this->adminlink->Text = L"Click here to login as User";
			this->adminlink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminLogin::adminlink_LinkClicked);
			// 
			// adminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(756, 481);
			this->Controls->Add(this->adminlink);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->passtbAdmin);
			this->Controls->Add(this->usernametbAdmin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"adminLogin";
			this->Text = L"adminLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Admin^ admin = nullptr;
	public: bool back = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Admin^ temp = gcnew Admin;
		temp->username = this->usernametbAdmin->Text;
		temp->password = this->passtbAdmin->Text;
		/*temp->id = 0;
		temp->type = "None";*/
		bool checkLogin = temp->verifyLogin();

		if (checkLogin)
		{
			//MessageBox::Show("Admin Login Successful", "Successful", MessageBoxButtons::OK);
			admin = temp;
			this->Close();
		}
		else {
			MessageBox::Show("Incorrect Details", "Wrong info", MessageBoxButtons::OK);
		}
	}
	private: System::Void adminlink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->back = true;
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void usernametbAdmin_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (usernametbAdmin->Text == "Enter Username") {
			usernametbAdmin->Text = "";
			usernametbAdmin->ForeColor = Color::Black;
		}
	}
	private: System::Void usernametbAdmin_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (usernametbAdmin->Text == "") {
			usernametbAdmin->Text = "Enter Username";
			usernametbAdmin->ForeColor = Color::Gray;
		}

	}
	private: System::Void passtbAdmin_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (passtbAdmin->Text == "Enter Password") {
			passtbAdmin->Text = "";
			passtbAdmin->ForeColor = Color::Black;
			passtbAdmin->PasswordChar = '*';
		}

	}
	private: System::Void passtbAdmin_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (passtbAdmin->Text == "") {
			passtbAdmin->Text = "Enter Password";
			passtbAdmin->ForeColor = Color::Gray;
		}

	}
	private: System::Void usernametbAdmin_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
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
	private: System::Void passtbAdmin_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			Admin^ temp = gcnew Admin;
			temp->username = this->usernametbAdmin->Text;
			temp->password = this->passtbAdmin->Text;
			/*temp->id = 0;
			temp->type = "None";*/
			bool checkLogin = temp->verifyLogin();

			if (checkLogin)
			{
				//MessageBox::Show("Admin Login Successful", "Successful", MessageBoxButtons::OK);
				admin = temp;
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
