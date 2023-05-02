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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ toAdminBtn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toAdminBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(59, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(59, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// tbusername
			// 
			this->tbusername->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tbusername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbusername->ForeColor = System::Drawing::Color::DimGray;
			this->tbusername->Location = System::Drawing::Point(71, 219);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(288, 24);
			this->tbusername->TabIndex = 0;
			this->tbusername->TabStop = false;
			this->tbusername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::tbusername_KeyDown);
			// 
			// tbpassword
			// 
			this->tbpassword->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tbpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpassword->ForeColor = System::Drawing::Color::DimGray;
			this->tbpassword->Location = System::Drawing::Point(70, 313);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(288, 24);
			this->tbpassword->TabIndex = 1;
			this->tbpassword->TabStop = false;
			this->tbpassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::tbpassword_KeyDown);
			// 
			// loginbtn
			// 
			this->loginbtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->loginbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginbtn->FlatAppearance->BorderSize = 0;
			this->loginbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbtn->ForeColor = System::Drawing::Color::White;
			this->loginbtn->Location = System::Drawing::Point(92, 393);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(112, 36);
			this->loginbtn->TabIndex = 2;
			this->loginbtn->Text = L"Login";
			this->loginbtn->UseVisualStyleBackColor = false;
			this->loginbtn->Click += gcnew System::EventHandler(this, &Login::loginbtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelbtn->ForeColor = System::Drawing::Color::RoyalBlue;
			this->cancelbtn->Location = System::Drawing::Point(221, 393);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(106, 36);
			this->cancelbtn->TabIndex = 3;
			this->cancelbtn->Text = L"Cancel";
			this->cancelbtn->UseVisualStyleBackColor = true;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &Login::cancelbtn_Click);
			// 
			// signupbtn
			// 
			this->signupbtn->BackColor = System::Drawing::Color::Gray;
			this->signupbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signupbtn->FlatAppearance->BorderSize = 0;
			this->signupbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupbtn->ForeColor = System::Drawing::Color::White;
			this->signupbtn->Location = System::Drawing::Point(94, 488);
			this->signupbtn->Name = L"signupbtn";
			this->signupbtn->Size = System::Drawing::Size(106, 35);
			this->signupbtn->TabIndex = 7;
			this->signupbtn->Text = L"Signup";
			this->signupbtn->UseVisualStyleBackColor = false;
			this->signupbtn->Click += gcnew System::EventHandler(this, &Login::signupbtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(97, 470);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"SignUp Instead\?";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(51, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(281, 56);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Login.";
			// 
			// adminlink
			// 
			this->adminlink->AutoSize = true;
			this->adminlink->BackColor = System::Drawing::Color::Transparent;
			this->adminlink->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminlink->LinkColor = System::Drawing::Color::LightGray;
			this->adminlink->Location = System::Drawing::Point(777, 571);
			this->adminlink->Name = L"adminlink";
			this->adminlink->Size = System::Drawing::Size(220, 19);
			this->adminlink->TabIndex = 11;
			this->adminlink->TabStop = true;
			this->adminlink->Text = L"Click here to login as Admin";
			this->adminlink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::adminlink_LinkClicked);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(62, 252);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 4);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(62, 347);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(303, 4);
			this->textBox2->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(225, 470);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 15);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Login as Admin.";
			// 
			// toAdminBtn
			// 
			this->toAdminBtn->BackColor = System::Drawing::Color::Gray;
			this->toAdminBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toAdminBtn->FlatAppearance->BorderSize = 0;
			this->toAdminBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->toAdminBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toAdminBtn->ForeColor = System::Drawing::Color::White;
			this->toAdminBtn->Location = System::Drawing::Point(220, 488);
			this->toAdminBtn->Name = L"toAdminBtn";
			this->toAdminBtn->Size = System::Drawing::Size(106, 35);
			this->toAdminBtn->TabIndex = 14;
			this->toAdminBtn->Text = L"Admin";
			this->toAdminBtn->UseVisualStyleBackColor = false;
			this->toAdminBtn->Click += gcnew System::EventHandler(this, &Login::toAdminBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(438, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(606, 617);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1028, 609);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toAdminBtn);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(221, 597);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Service Application";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	/*private: System::Void tbusername_Enter(System::Object^ sender, System::EventArgs^ e) {
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

	}*/
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

	private: System::Void AddRemUserButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->adminLogin = true;
		this->Close();
	}
	
	private: System::Void toAdminBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->adminLogin = true;
		this->Close();
	}
};
}
