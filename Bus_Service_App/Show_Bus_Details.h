#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
#include"ticketClass.h"
#include"Select_Seats.h"
#include"busClass.h"
#include"routeClass.h"
#include"sceduleClass.h"

namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Show_Bus_Details
	/// </summary>
	public ref class Show_Bus_Details : public System::Windows::Forms::Form
	{
	
	public:String^ username;
	private: System::Windows::Forms::Button^ back;
	public:
	public:Passenger^ user;
	public:BusData^ bus;
	public:
		Show_Bus_Details(Passenger^ u)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			user = u;
			username = u->username;
			nameLabel->Text = u->name;
			balanceLabel->Text = "Rs. " + u->balance;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Show_Bus_Details()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ deplabel;
	private: System::Windows::Forms::Label^ Depar;


	private: System::Windows::Forms::TextBox^ arrlabel;
	private: System::Windows::Forms::Label^ Arival;







	private: System::Windows::Forms::DateTimePicker^ depTimePick;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ showbutton;


	private: System::Windows::Forms::DataGridView^ grid;
	private: System::Windows::Forms::Button^ modButton;
	private: System::Windows::Forms::TextBox^ busidlabel;
	private: System::Windows::Forms::Label^ idlabel;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ balanceLabel;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Show_Bus_Details::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->deplabel = (gcnew System::Windows::Forms::TextBox());
			this->Depar = (gcnew System::Windows::Forms::Label());
			this->arrlabel = (gcnew System::Windows::Forms::TextBox());
			this->Arival = (gcnew System::Windows::Forms::Label());
			this->depTimePick = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->grid = (gcnew System::Windows::Forms::DataGridView());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->busidlabel = (gcnew System::Windows::Forms::TextBox());
			this->idlabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// deplabel
			// 
			this->deplabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deplabel->ForeColor = System::Drawing::SystemColors::WindowText;
			this->deplabel->Location = System::Drawing::Point(281, 138);
			this->deplabel->Margin = System::Windows::Forms::Padding(2);
			this->deplabel->Name = L"deplabel";
			this->deplabel->Size = System::Drawing::Size(515, 25);
			this->deplabel->TabIndex = 2;
			// 
			// Depar
			// 
			this->Depar->BackColor = System::Drawing::Color::Transparent;
			this->Depar->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Italic));
			this->Depar->Location = System::Drawing::Point(101, 138);
			this->Depar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Depar->Name = L"Depar";
			this->Depar->Size = System::Drawing::Size(176, 24);
			this->Depar->TabIndex = 10;
			this->Depar->Text = L"Departure Location:";
			this->Depar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// arrlabel
			// 
			this->arrlabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrlabel->ForeColor = System::Drawing::SystemColors::WindowText;
			this->arrlabel->Location = System::Drawing::Point(281, 170);
			this->arrlabel->Margin = System::Windows::Forms::Padding(2);
			this->arrlabel->Name = L"arrlabel";
			this->arrlabel->Size = System::Drawing::Size(515, 25);
			this->arrlabel->TabIndex = 13;
			this->arrlabel->TextChanged += gcnew System::EventHandler(this, &Show_Bus_Details::textBox1_TextChanged);
			// 
			// Arival
			// 
			this->Arival->BackColor = System::Drawing::Color::Transparent;
			this->Arival->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Italic));
			this->Arival->Location = System::Drawing::Point(128, 170);
			this->Arival->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Arival->Name = L"Arival";
			this->Arival->Size = System::Drawing::Size(141, 20);
			this->Arival->TabIndex = 15;
			this->Arival->Text = L"Arrival Location:";
			this->Arival->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// depTimePick
			// 
			this->depTimePick->CustomFormat = L"MM/dd/yyyy";
			this->depTimePick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->depTimePick->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->depTimePick->Location = System::Drawing::Point(221, 209);
			this->depTimePick->Margin = System::Windows::Forms::Padding(2);
			this->depTimePick->MinDate = System::DateTime(2023, 4, 25, 0, 0, 0, 0);
			this->depTimePick->Name = L"depTimePick";
			this->depTimePick->Size = System::Drawing::Size(114, 23);
			this->depTimePick->TabIndex = 16;
			this->depTimePick->ValueChanged += gcnew System::EventHandler(this, &Show_Bus_Details::depTimePick_ValueChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(110, 206);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Travel Date";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// showbutton
			// 
			this->showbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showbutton.BackgroundImage")));
			this->showbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->showbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->showbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showbutton->Location = System::Drawing::Point(246, 251);
			this->showbutton->Margin = System::Windows::Forms::Padding(2);
			this->showbutton->Name = L"showbutton";
			this->showbutton->Padding = System::Windows::Forms::Padding(22, 0, 0, 0);
			this->showbutton->Size = System::Drawing::Size(124, 36);
			this->showbutton->TabIndex = 23;
			this->showbutton->Text = L"  Search";
			this->showbutton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showbutton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->showbutton->UseVisualStyleBackColor = true;
			this->showbutton->Click += gcnew System::EventHandler(this, &Show_Bus_Details::showbutton_Click);
			// 
			// grid
			// 
			this->grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->grid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->grid->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grid->DefaultCellStyle = dataGridViewCellStyle1;
			this->grid->GridColor = System::Drawing::SystemColors::Window;
			this->grid->Location = System::Drawing::Point(185, 339);
			this->grid->Margin = System::Windows::Forms::Padding(2);
			this->grid->Name = L"grid";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grid->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->grid->RowHeadersWidth = 60;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Turquoise;
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			this->grid->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->grid->RowTemplate->Height = 24;
			this->grid->Size = System::Drawing::Size(648, 230);
			this->grid->TabIndex = 25;
			this->grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Show_Bus_Details::dataGridView1_CellContentClick_1);
			// 
			// modButton
			// 
			this->modButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modButton.BackgroundImage")));
			this->modButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->modButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->modButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->modButton->Location = System::Drawing::Point(728, 289);
			this->modButton->Margin = System::Windows::Forms::Padding(2);
			this->modButton->Name = L"modButton";
			this->modButton->Padding = System::Windows::Forms::Padding(22, 0, 0, 0);
			this->modButton->Size = System::Drawing::Size(102, 28);
			this->modButton->TabIndex = 26;
			this->modButton->Text = L"Next    ";
			this->modButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &Show_Bus_Details::modButton_Click);
			// 
			// busidlabel
			// 
			this->busidlabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->busidlabel->ForeColor = System::Drawing::SystemColors::WindowText;
			this->busidlabel->Location = System::Drawing::Point(478, 254);
			this->busidlabel->Margin = System::Windows::Forms::Padding(2);
			this->busidlabel->Name = L"busidlabel";
			this->busidlabel->Size = System::Drawing::Size(385, 25);
			this->busidlabel->TabIndex = 27;
			this->busidlabel->TextChanged += gcnew System::EventHandler(this, &Show_Bus_Details::textBox1_TextChanged_1);
			// 
			// idlabel
			// 
			this->idlabel->BackColor = System::Drawing::Color::Transparent;
			this->idlabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12.2F, System::Drawing::FontStyle::Italic));
			this->idlabel->Location = System::Drawing::Point(532, 207);
			this->idlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->idlabel->Name = L"idlabel";
			this->idlabel->Size = System::Drawing::Size(225, 44);
			this->idlabel->TabIndex = 28;
			this->idlabel->Text = L"Enter a Bus Id to proceed:";
			this->idlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->idlabel->Click += gcnew System::EventHandler(this, &Show_Bus_Details::label2_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12.2F, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(434, 254);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 24);
			this->label4->TabIndex = 29;
			this->label4->Text = L"ID:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Show_Bus_Details::label4_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->balanceLabel);
			this->panel2->Controls->Add(this->nameLabel);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(-2, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(228, 79);
			this->panel2->TabIndex = 31;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(23, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Signed in:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->back);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(228, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(798, 79);
			this->panel1->TabIndex = 30;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::SteelBlue;
			this->back->FlatAppearance->BorderSize = 0;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.Image")));
			this->back->Location = System::Drawing::Point(18, 8);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(69, 65);
			this->back->TabIndex = 32;
			this->back->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &Show_Bus_Details::back_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(316, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 38);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Select Bus";
			// 
			// Show_Bus_Details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1012, 609);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->idlabel);
			this->Controls->Add(this->busidlabel);
			this->Controls->Add(this->modButton);
			this->Controls->Add(this->grid);
			this->Controls->Add(this->showbutton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->depTimePick);
			this->Controls->Add(this->Arival);
			this->Controls->Add(this->arrlabel);
			this->Controls->Add(this->Depar);
			this->Controls->Add(this->deplabel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Show_Bus_Details";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Show_Bus_Details";
			this->Load += gcnew System::EventHandler(this, &Show_Bus_Details::Show_Bus_Details_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void depTimePick_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void showbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ arival = this->arrlabel->Text;
		String^ depar = this->deplabel->Text;

		if (arival->Length == 0 || depar->Length == 0) {
			MessageBox::Show("Please enter all the required information.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (arival->Length == 0) {
				Arival->Focus();
				Arival->ForeColor = Color::Red;
			}
			else if (depar->Length == 0) {
				Depar->Focus();
				Depar->ForeColor = Color::Red;
			}
		}
		Ticket^ t = gcnew Ticket();
		t->bus->route->arrLoc = arrlabel->Text;
		t->bus->route->depLoc = deplabel->Text;
		t->date = depTimePick->Value.Date;
		t->showsearch(grid);
		//try {
		//	String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
		//	SqlConnection sqlconn(connStr);
		//	sqlconn.Open();
		//	String^ que = "SELECT Id, servProv, classTr, depDT, arrDT, estTime FROM BusInfo WHERE arrLoc=@arrLoc AND depLoc=@depLoc AND CONVERT(date, depDT) =@depDT;";
		//	SqlCommand cmd(que, % sqlconn);
		//	cmd.Parameters->AddWithValue("@arrLoc", arrlabel->Text);
		//	cmd.Parameters->AddWithValue("@depLoc", deplabel->Text);
		//	cmd.Parameters->AddWithValue("@depDT", depTimePick->Value.Date);

		//	SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
		//	System::Data::DataTable^ dt = gcnew System::Data::DataTable();
		//	da->Fill(dt);
		//	grid->DataSource = dt;
		//	grid->Columns[0]->HeaderText = "Bus ID";
		//	grid->Columns[1]->HeaderText = "Service Provider";
		//	grid->Columns[2]->HeaderText = "Travel Class";
		//	grid->Columns[3]->HeaderText = "Arrival Time";
		//	grid->Columns[4]->HeaderText = "Departure Time";
		//	grid->Columns[5]->HeaderText = "Estimate Journey Time";

		//}
		//catch (Exception^ e) {
		//	MessageBox::Show("Database Connection Error", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//}
	}

	private: System::Void Aftersearchlabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	public:bool openAgain = false;
	
	private: System::Void modButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ busId = this->busidlabel->Text;
		/*idlabel->Focus();
		idlabel->ForeColor = Color::Red;*/
		bool found = false;
		if (busId->Length == 0)
			MessageBox::Show("Please Enter Bus Id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			try {
				String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
				SqlConnection sqlconn(connstring);
				sqlconn.Open();

				String^ que = "SELECT totSeat,Booked_Seats FROM BusInfo WHERE Id=@Id;";
				SqlCommand cmd(que, % sqlconn);
				cmd.Parameters->AddWithValue("@Id", busId);
				SqlDataReader^ reader = cmd.ExecuteReader();
				if (reader->Read()) {
					found = true;
				}
				reader->Close();
				sqlconn.Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Incorrect Bus ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				found = false;
			}
			if (found) {
				Select_Seats^ sel_seat = gcnew Select_Seats(busId, username, user);
				this->Close();
				sel_seat->ShowDialog();
				if (sel_seat->toMenu)
					openAgain = false;
				else openAgain = true;
			}
		}
	}

private: System::Void mainlabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
	//public:Ticket^ data() { return hold; }
private: System::Void Show_Bus_Details_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}