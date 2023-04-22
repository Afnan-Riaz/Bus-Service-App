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
	private: System::Windows::Forms::Button^ enterbtn;
	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::LinkLabel^ loginInsteadBtn;
	private: System::Windows::Forms::TextBox^ tbaddress;
	private: System::Windows::Forms::Label^ label9;





	private: System::Windows::Forms::TextBox^ usernametb;
	private: System::Windows::Forms::TextBox^ emailtb;









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
			this->nametb = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->phonetb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->passtb = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->repasstb = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->enterbtn = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->loginInsteadBtn = (gcnew System::Windows::Forms::LinkLabel());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->usernametb = (gcnew System::Windows::Forms::TextBox());
			this->emailtb = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SignUp";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 123);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(519, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the following Details:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 185);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Username:";
			// 
			// nametb
			// 
			this->nametb->BackColor = System::Drawing::SystemColors::Control;
			this->nametb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nametb->ForeColor = System::Drawing::Color::Gray;
			this->nametb->Location = System::Drawing::Point(515, 243);
			this->nametb->Margin = System::Windows::Forms::Padding(4);
			this->nametb->Multiline = true;
			this->nametb->Name = L"nametb";
			this->nametb->Size = System::Drawing::Size(368, 22);
			this->nametb->TabIndex = 4;
			this->nametb->TabStop = false;
			this->nametb->Text = L"Enter Name";
			this->nametb->Enter += gcnew System::EventHandler(this, &Signup::nametb_Enter);
			this->nametb->Leave += gcnew System::EventHandler(this, &Signup::nametb_Leave);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(72, 237);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 34);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Name:";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(72, 277);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 34);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Email Address:";
			// 
			// phonetb
			// 
			this->phonetb->BackColor = System::Drawing::SystemColors::Control;
			this->phonetb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phonetb->ForeColor = System::Drawing::Color::Gray;
			this->phonetb->Location = System::Drawing::Point(515, 321);
			this->phonetb->Margin = System::Windows::Forms::Padding(4);
			this->phonetb->Multiline = true;
			this->phonetb->Name = L"phonetb";
			this->phonetb->Size = System::Drawing::Size(368, 22);
			this->phonetb->TabIndex = 6;
			this->phonetb->TabStop = false;
			this->phonetb->Text = L"Enter Phone No.";
			this->phonetb->Enter += gcnew System::EventHandler(this, &Signup::phonetb_Enter);
			this->phonetb->Leave += gcnew System::EventHandler(this, &Signup::phonetb_Leave);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 315);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 34);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Phone No:";
			// 
			// passtb
			// 
			this->passtb->BackColor = System::Drawing::SystemColors::Control;
			this->passtb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passtb->ForeColor = System::Drawing::Color::Gray;
			this->passtb->Location = System::Drawing::Point(515, 405);
			this->passtb->Margin = System::Windows::Forms::Padding(4);
			this->passtb->Multiline = true;
			this->passtb->Name = L"passtb";
			this->passtb->Size = System::Drawing::Size(368, 22);
			this->passtb->TabIndex = 8;
			this->passtb->TabStop = false;
			this->passtb->Text = L"Enter Password";
			this->passtb->Enter += gcnew System::EventHandler(this, &Signup::passtb_Enter);
			this->passtb->Leave += gcnew System::EventHandler(this, &Signup::passtb_Leave);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(72, 399);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(232, 34);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Create a Password:";
			// 
			// repasstb
			// 
			this->repasstb->BackColor = System::Drawing::SystemColors::Control;
			this->repasstb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->repasstb->ForeColor = System::Drawing::Color::Gray;
			this->repasstb->Location = System::Drawing::Point(515, 443);
			this->repasstb->Margin = System::Windows::Forms::Padding(4);
			this->repasstb->Multiline = true;
			this->repasstb->Name = L"repasstb";
			this->repasstb->Size = System::Drawing::Size(368, 22);
			this->repasstb->TabIndex = 9;
			this->repasstb->TabStop = false;
			this->repasstb->Text = L"Re-Enter Password";
			this->repasstb->Enter += gcnew System::EventHandler(this, &Signup::repasstb_Enter);
			this->repasstb->Leave += gcnew System::EventHandler(this, &Signup::repasstb_Leave);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(72, 437);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 34);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Re-enter Password:";
			// 
			// enterbtn
			// 
			this->enterbtn->Location = System::Drawing::Point(344, 530);
			this->enterbtn->Margin = System::Windows::Forms::Padding(4);
			this->enterbtn->Name = L"enterbtn";
			this->enterbtn->Size = System::Drawing::Size(121, 38);
			this->enterbtn->TabIndex = 10;
			this->enterbtn->Text = L"Signup";
			this->enterbtn->UseVisualStyleBackColor = true;
			this->enterbtn->Click += gcnew System::EventHandler(this, &Signup::enterbtn_Click);
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(491, 530);
			this->cancel->Margin = System::Windows::Forms::Padding(4);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(121, 38);
			this->cancel->TabIndex = 18;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &Signup::cancel_Click);
			// 
			// loginInsteadBtn
			// 
			this->loginInsteadBtn->AutoSize = true;
			this->loginInsteadBtn->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginInsteadBtn->Location = System::Drawing::Point(102, 513);
			this->loginInsteadBtn->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->loginInsteadBtn->Name = L"loginInsteadBtn";
			this->loginInsteadBtn->Size = System::Drawing::Size(107, 19);
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
			this->tbaddress->Location = System::Drawing::Point(515, 363);
			this->tbaddress->Margin = System::Windows::Forms::Padding(4);
			this->tbaddress->Multiline = true;
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(368, 22);
			this->tbaddress->TabIndex = 7;
			this->tbaddress->TabStop = false;
			this->tbaddress->Text = L"Enter Your Address";
			this->tbaddress->Enter += gcnew System::EventHandler(this, &Signup::tbaddress_Enter);
			this->tbaddress->Leave += gcnew System::EventHandler(this, &Signup::tbaddress_Leave);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(72, 357);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(196, 34);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Address";
			// 
			// usernametb
			// 
			this->usernametb->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->usernametb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametb->ForeColor = System::Drawing::Color::Gray;
			this->usernametb->Location = System::Drawing::Point(515, 191);
			this->usernametb->Margin = System::Windows::Forms::Padding(4);
			this->usernametb->Multiline = true;
			this->usernametb->Name = L"usernametb";
			this->usernametb->Size = System::Drawing::Size(343, 30);
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
			this->emailtb->Location = System::Drawing::Point(515, 283);
			this->emailtb->Margin = System::Windows::Forms::Padding(4);
			this->emailtb->Multiline = true;
			this->emailtb->Name = L"emailtb";
			this->emailtb->Size = System::Drawing::Size(368, 22);
			this->emailtb->TabIndex = 5;
			this->emailtb->TabStop = false;
			this->emailtb->Text = L"Enter Email Address";
			this->emailtb->Enter += gcnew System::EventHandler(this, &Signup::emailtb_Enter);
			this->emailtb->Leave += gcnew System::EventHandler(this, &Signup::emailtb_Leave);
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(963, 578);
			this->Controls->Add(this->repasstb);
			this->Controls->Add(this->passtb);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->emailtb);
			this->Controls->Add(this->nametb);
			this->Controls->Add(this->usernametb);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->loginInsteadBtn);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->enterbtn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->phonetb);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Signup";
			this->Padding = System::Windows::Forms::Padding(6);
			this->Text = L"Signup";
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
		else
			MessageBox::Show("Unable to write to the database.", "Database Error", MessageBoxButtons::OK);

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
	};
}
