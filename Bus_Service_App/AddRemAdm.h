#pragma once
#include"userClass.h"
#include"AdminControl.h"
#include"PassengerControl.h"
namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRemAdm
	/// </summary>
	public ref class AddRemAdm : public System::Windows::Forms::Form
	{
	public:
		bool S_ADMIN = false;
		AddRemAdm(Admin^ admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			AdName->Text = admin->name;
			if (admin->username == "admin")
				S_ADMIN = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddRemAdm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ srchButton;
	private: System::Windows::Forms::Button^ delButton;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ AdName;
	private: System::Windows::Forms::Button^ showbutton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ modButton;
	private: System::Windows::Forms::Button^ mngBusButton;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ BackButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ userTabButton;
	private: System::Windows::Forms::Button^ adTabButton;
	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Button^ makeAdmButton;
	private: Bus_Service_App::AdminControl^ adminCtrl;
	private: Bus_Service_App::PassengerControl^ passCtrl;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRemAdm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->srchButton = (gcnew System::Windows::Forms::Button());
			this->delButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AdName = (gcnew System::Windows::Forms::Label());
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->makeAdmButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->mngBusButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BackButton = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->userTabButton = (gcnew System::Windows::Forms::Button());
			this->adTabButton = (gcnew System::Windows::Forms::Button());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackButton))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel1->Controls->Add(this->srchButton);
			this->panel1->Controls->Add(this->delButton);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->showbutton);
			this->panel1->Controls->Add(this->makeAdmButton);
			this->panel1->Controls->Add(this->addButton);
			this->panel1->Controls->Add(this->modButton);
			this->panel1->Controls->Add(this->mngBusButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->MinimumSize = System::Drawing::Size(289, 749);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 749);
			this->panel1->TabIndex = 15;
			// 
			// srchButton
			// 
			this->srchButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"srchButton.BackgroundImage")));
			this->srchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->srchButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->srchButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->srchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->srchButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"srchButton.Image")));
			this->srchButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->srchButton->Location = System::Drawing::Point(-2, 466);
			this->srchButton->Name = L"srchButton";
			this->srchButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->srchButton->Size = System::Drawing::Size(292, 82);
			this->srchButton->TabIndex = 9;
			this->srchButton->Text = L"  Search";
			this->srchButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->srchButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srchButton->UseVisualStyleBackColor = true;
			this->srchButton->Click += gcnew System::EventHandler(this, &AddRemAdm::srchButton_Click);
			// 
			// delButton
			// 
			this->delButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delButton.BackgroundImage")));
			this->delButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->delButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delButton.Image")));
			this->delButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->delButton->Location = System::Drawing::Point(-2, 390);
			this->delButton->Name = L"delButton";
			this->delButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->delButton->Size = System::Drawing::Size(292, 76);
			this->delButton->TabIndex = 9;
			this->delButton->Text = L"  Delete";
			this->delButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->delButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->delButton->UseVisualStyleBackColor = true;
			this->delButton->Click += gcnew System::EventHandler(this, &AddRemAdm::delButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->AdName);
			this->panel2->Location = System::Drawing::Point(0, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(292, 94);
			this->panel2->TabIndex = 9;
			// 
			// AdName
			// 
			this->AdName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AdName->Font = (gcnew System::Drawing::Font(L"Poppins", 13, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AdName->Location = System::Drawing::Point(0, 0);
			this->AdName->Name = L"AdName";
			this->AdName->Size = System::Drawing::Size(292, 94);
			this->AdName->TabIndex = 0;
			this->AdName->Text = L"Name";
			this->AdName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// showbutton
			// 
			this->showbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showbutton.BackgroundImage")));
			this->showbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->showbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->showbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showbutton.Image")));
			this->showbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showbutton->Location = System::Drawing::Point(-2, 548);
			this->showbutton->Name = L"showbutton";
			this->showbutton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->showbutton->Size = System::Drawing::Size(292, 80);
			this->showbutton->TabIndex = 11;
			this->showbutton->Text = L"  Refresh";
			this->showbutton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showbutton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->showbutton->UseVisualStyleBackColor = true;
			this->showbutton->Click += gcnew System::EventHandler(this, &AddRemAdm::showbutton_Click);
			// 
			// makeAdmButton
			// 
			this->makeAdmButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"makeAdmButton.BackgroundImage")));
			this->makeAdmButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->makeAdmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->makeAdmButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->makeAdmButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->makeAdmButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->makeAdmButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"makeAdmButton.Image")));
			this->makeAdmButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->makeAdmButton->Location = System::Drawing::Point(-1, 628);
			this->makeAdmButton->Margin = System::Windows::Forms::Padding(0);
			this->makeAdmButton->Name = L"makeAdmButton";
			this->makeAdmButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->makeAdmButton->Size = System::Drawing::Size(291, 79);
			this->makeAdmButton->TabIndex = 9;
			this->makeAdmButton->Text = L"  Make Admin";
			this->makeAdmButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->makeAdmButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->makeAdmButton->UseVisualStyleBackColor = true;
			this->makeAdmButton->Click += gcnew System::EventHandler(this, &AddRemAdm::makeAdmButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addButton.BackgroundImage")));
			this->addButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->addButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addButton.Image")));
			this->addButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->Location = System::Drawing::Point(-2, 235);
			this->addButton->Margin = System::Windows::Forms::Padding(0);
			this->addButton->Name = L"addButton";
			this->addButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->addButton->Size = System::Drawing::Size(291, 79);
			this->addButton->TabIndex = 9;
			this->addButton->Text = L"  Add";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &AddRemAdm::addButton_Click);
			// 
			// modButton
			// 
			this->modButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modButton.BackgroundImage")));
			this->modButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->modButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->modButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modButton.Image")));
			this->modButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->modButton->Location = System::Drawing::Point(0, 314);
			this->modButton->Name = L"modButton";
			this->modButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->modButton->Size = System::Drawing::Size(290, 76);
			this->modButton->TabIndex = 9;
			this->modButton->Text = L"  Modify";
			this->modButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->modButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &AddRemAdm::modButton_Click);
			// 
			// mngBusButton
			// 
			this->mngBusButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->mngBusButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mngBusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mngBusButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mngBusButton.Image")));
			this->mngBusButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mngBusButton->Location = System::Drawing::Point(0, 94);
			this->mngBusButton->Name = L"mngBusButton";
			this->mngBusButton->Padding = System::Windows::Forms::Padding(10);
			this->mngBusButton->Size = System::Drawing::Size(290, 141);
			this->mngBusButton->TabIndex = 10;
			this->mngBusButton->Text = L"   Manage Users";
			this->mngBusButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mngBusButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->mngBusButton->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->BackButton);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(289, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1125, 95);
			this->panel3->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(432, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(264, 53);
			this->label7->TabIndex = 0;
			this->label7->Text = L"MANAGE USERS";
			// 
			// BackButton
			// 
			this->BackButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->BackButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackButton.Image")));
			this->BackButton->Location = System::Drawing::Point(23, 23);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(54, 54);
			this->BackButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->BackButton->TabIndex = 13;
			this->BackButton->TabStop = false;
			this->BackButton->Click += gcnew System::EventHandler(this, &AddRemAdm::BackButton_Click);
			this->BackButton->MouseEnter += gcnew System::EventHandler(this, &AddRemAdm::BackButton_MouseEnter);
			this->BackButton->MouseLeave += gcnew System::EventHandler(this, &AddRemAdm::BackButton_MouseLeave);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->userTabButton, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->adTabButton, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(289, 94);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1125, 60);
			this->tableLayoutPanel1->TabIndex = 17;
			// 
			// userTabButton
			// 
			this->userTabButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->userTabButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userTabButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->userTabButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->userTabButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->userTabButton->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userTabButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userTabButton.Image")));
			this->userTabButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->userTabButton->Location = System::Drawing::Point(3, 3);
			this->userTabButton->Name = L"userTabButton";
			this->userTabButton->Padding = System::Windows::Forms::Padding(130, 0, 0, 0);
			this->userTabButton->Size = System::Drawing::Size(556, 54);
			this->userTabButton->TabIndex = 0;
			this->userTabButton->Text = L"  PASSENGERS";
			this->userTabButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->userTabButton->UseVisualStyleBackColor = false;
			this->userTabButton->Click += gcnew System::EventHandler(this, &AddRemAdm::userTabButton_Click);
			// 
			// adTabButton
			// 
			this->adTabButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->adTabButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->adTabButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->adTabButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->adTabButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->adTabButton->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adTabButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adTabButton.Image")));
			this->adTabButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->adTabButton->Location = System::Drawing::Point(565, 3);
			this->adTabButton->Name = L"adTabButton";
			this->adTabButton->Padding = System::Windows::Forms::Padding(130, 0, 0, 0);
			this->adTabButton->Size = System::Drawing::Size(557, 54);
			this->adTabButton->TabIndex = 1;
			this->adTabButton->Text = L"  ADMINS";
			this->adTabButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->adTabButton->UseVisualStyleBackColor = false;
			this->adTabButton->Click += gcnew System::EventHandler(this, &AddRemAdm::adTabButton_Click);
			// 
			// panelMain
			// 
			this->panelMain->Location = System::Drawing::Point(289, 154);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1125, 595);
			this->panelMain->TabIndex = 18;
			// 
			// AddRemAdm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1414, 749);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(289, 749);
			this->Name = L"AddRemAdm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Service Application";
			this->Load += gcnew System::EventHandler(this, &AddRemAdm::AddRemAdm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackButton))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:	bool go_back = false;
	private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		BackButton->BorderStyle = BorderStyle::Fixed3D;
		go_back = true;
		this->Close();
	}
private: System::Void AddRemAdm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->passCtrl = (gcnew Bus_Service_App::PassengerControl());
	this->adminCtrl = (gcnew Bus_Service_App::AdminControl());
	userTabButton->PerformClick();
}
	private: void add_Ucontrol(UserControl^ usercontrol) {
		usercontrol->Dock = DockStyle::Fill;
		panelMain->Controls->Clear();
		panelMain->Controls->Add(usercontrol);
		usercontrol->BringToFront();
	}
	public:	   bool passShow = false;
	public:	   bool adminShow = false;

private: System::Void userTabButton_Click(System::Object^ sender, System::EventArgs^ e) {
	add_Ucontrol(passCtrl);
	userTabButton->BackColor = Color::Gray;
	adTabButton->BackColor = Color::WhiteSmoke;
	makeAdmButton->Visible = true;
	passShow = true;
	adminShow = false;
	showbutton->PerformClick();
}
private: System::Void adTabButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (S_ADMIN) {
		add_Ucontrol(adminCtrl);
		adTabButton->BackColor = Color::Gray;
		userTabButton->BackColor = Color::WhiteSmoke;
		makeAdmButton->Visible = false;
		adminShow = true;
		passShow = false;
		showbutton->PerformClick();
	}
	else {
		MessageBox::Show("You do not have the access permission");
		userTabButton->PerformClick();
	}
}

private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (passShow) {
		Passenger^ pass = gcnew Passenger;
		pass->username = passCtrl->tbUsername->Text;
		pass->password = passCtrl->tbPass->Text;
		pass->name = passCtrl->tbName->Text;
		pass->email = passCtrl->tbEmail->Text;
		pass->phone = passCtrl->tbPhone->Text;
		pass->address = passCtrl->tbAddress->Text;
		pass->balance = Decimal::ToInt32(passCtrl->udBalance->Value);
		if (pass->addPassenger()) {
			MessageBox::Show("Successfully Added");
		}
		else
			MessageBox::Show("An error occured");
		showbutton->PerformClick();
	}
	else if (adminShow) {
		Admin^ admin = gcnew Admin;
		admin->username = adminCtrl->tbAdUsername->Text;
		admin->password = adminCtrl->tbAdPass->Text;
		admin->name = adminCtrl->tbAdName->Text;
		admin->email = adminCtrl->tbAdEmail->Text;
		if (admin->addAdmin()) {
			MessageBox::Show("Successfully Added");
		}
		else
			MessageBox::Show("An error occured");
		showbutton->PerformClick();
	}
}
private: System::Void delButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (passShow) {
		Passenger^ pass = gcnew Passenger;
		pass->username = passCtrl->tbUsername->Text;
		if (pass->delPassenger()) {
			MessageBox::Show("Successfully Deleted");
		}
		else
			MessageBox::Show("An error occured");
		showbutton->PerformClick();
	}
	else if (adminShow) {
		Admin^ admin = gcnew Admin;
		admin->username = adminCtrl->tbAdUsername->Text;
		if (admin->delAdmin()) {
			MessageBox::Show("Successfully Deleted");
		}
		else
			MessageBox::Show("An error occured");
		showbutton->PerformClick();
	}

}
private: System::Void modButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (passShow) {
		Passenger^ pass = gcnew Passenger;
		pass->username = passCtrl->tbUsername->Text;
		pass->password = passCtrl->tbPass->Text;
		pass->name = passCtrl->tbName->Text;
		pass->email = passCtrl->tbEmail->Text;
		pass->phone = passCtrl->tbPhone->Text;
		pass->address = passCtrl->tbAddress->Text;
		pass->balance = Decimal::ToInt32(passCtrl->udBalance->Value);
		if (pass->modPassenger()) {
			MessageBox::Show("Successfully Modified");
		}
		else
			MessageBox::Show("An error occured");
		showbutton->PerformClick();
	}
	else if (adminShow) {
		Admin^ admin = gcnew Admin;
		admin->username = adminCtrl->tbAdUsername->Text;
		admin->password = adminCtrl->tbAdPass->Text;
		admin->name = adminCtrl->tbAdName->Text;
		admin->email = adminCtrl->tbAdEmail->Text;
		if (admin->modAdmin()) {
			MessageBox::Show("Successfully Modified");
		}
		else
			MessageBox::Show("An error occured");
		showbutton->PerformClick();
	}

}
private: System::Void srchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (passShow) {
		Passenger^ pass = gcnew Passenger;
		pass->username = passCtrl->tbUsername->Text;
		pass->searchPassenger(passCtrl->dataGridViewPass);
	}
	else if (adminShow) {
		Admin^ admin = gcnew Admin;
		admin->username = adminCtrl->tbAdUsername->Text;
		admin->searchAdmin(adminCtrl->dataGridViewAdm);
	}
}
private: System::Void showbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (passShow) {
		Passenger^ pass = gcnew Passenger;
		pass->showPassenger(passCtrl->dataGridViewPass);
	}
	else if (adminShow) {
		Admin^ admin = gcnew Admin;
		admin->showAdmin(adminCtrl->dataGridViewAdm);
	}
}



private: System::Void makeAdmButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Passenger^ pass = gcnew Passenger;
	pass->username = passCtrl->tbUsername->Text;
	if (pass->makeAdmin()) {
		MessageBox::Show("Successfully Updated");
	}
	else
		MessageBox::Show("An error occured");
	showbutton->PerformClick();
}
private: System::Void BackButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	BackButton->BorderStyle = BorderStyle::FixedSingle;
}
private: System::Void BackButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	BackButton->BorderStyle = BorderStyle::None;
}
};
}