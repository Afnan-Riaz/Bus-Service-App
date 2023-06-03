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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ gotoUserButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usernametbAdmin = (gcnew System::Windows::Forms::TextBox());
			this->passtbAdmin = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gotoUserButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(68, 128);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 62);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Admin Login.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(79, 240);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(79, 356);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// usernametbAdmin
			// 
			this->usernametbAdmin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametbAdmin->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernametbAdmin->ForeColor = System::Drawing::Color::Gray;
			this->usernametbAdmin->Location = System::Drawing::Point(95, 270);
			this->usernametbAdmin->Margin = System::Windows::Forms::Padding(4);
			this->usernametbAdmin->Multiline = true;
			this->usernametbAdmin->Name = L"usernametbAdmin";
			this->usernametbAdmin->Size = System::Drawing::Size(384, 30);
			this->usernametbAdmin->TabIndex = 0;
			this->usernametbAdmin->TabStop = false;
			this->usernametbAdmin->Text = L"Enter Username";
			this->usernametbAdmin->TextChanged += gcnew System::EventHandler(this, &adminLogin::usernametbAdmin_TextChanged);
			this->usernametbAdmin->Enter += gcnew System::EventHandler(this, &adminLogin::usernametbAdmin_Enter);
			this->usernametbAdmin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminLogin::usernametbAdmin_KeyDown);
			this->usernametbAdmin->Leave += gcnew System::EventHandler(this, &adminLogin::usernametbAdmin_Leave);
			// 
			// passtbAdmin
			// 
			this->passtbAdmin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passtbAdmin->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F));
			this->passtbAdmin->ForeColor = System::Drawing::Color::Gray;
			this->passtbAdmin->Location = System::Drawing::Point(93, 385);
			this->passtbAdmin->Margin = System::Windows::Forms::Padding(4);
			this->passtbAdmin->Multiline = true;
			this->passtbAdmin->Name = L"passtbAdmin";
			this->passtbAdmin->Size = System::Drawing::Size(384, 30);
			this->passtbAdmin->TabIndex = 1;
			this->passtbAdmin->TabStop = false;
			this->passtbAdmin->Text = L"Enter Password";
			this->passtbAdmin->TextChanged += gcnew System::EventHandler(this, &adminLogin::passtbAdmin_TextChanged);
			this->passtbAdmin->Enter += gcnew System::EventHandler(this, &adminLogin::passtbAdmin_Enter);
			this->passtbAdmin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminLogin::passtbAdmin_KeyDown);
			this->passtbAdmin->Leave += gcnew System::EventHandler(this, &adminLogin::passtbAdmin_Leave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(123, 484);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &adminLogin::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->button2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button2->Location = System::Drawing::Point(295, 484);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 44);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminLogin::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(617, -58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(757, 939);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(83, 310);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(404, 5);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(83, 427);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(404, 5);
			this->textBox2->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(140, 594);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Login as User.";
			// 
			// gotoUserButton
			// 
			this->gotoUserButton->BackColor = System::Drawing::Color::Gray;
			this->gotoUserButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gotoUserButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->gotoUserButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gotoUserButton->Location = System::Drawing::Point(295, 577);
			this->gotoUserButton->Name = L"gotoUserButton";
			this->gotoUserButton->Size = System::Drawing::Size(141, 43);
			this->gotoUserButton->TabIndex = 17;
			this->gotoUserButton->Text = L"User";
			this->gotoUserButton->UseVisualStyleBackColor = false;
			this->gotoUserButton->Click += gcnew System::EventHandler(this, &adminLogin::gotoUserButton_Click);
			// 
			// adminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1371, 750);
			this->Controls->Add(this->gotoUserButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->passtbAdmin);
			this->Controls->Add(this->usernametbAdmin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"adminLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Service Application";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	private: System::Void usernametbAdmin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void passtbAdmin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gotoUserButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->back = true;
	this->Close();

}
};
}
