#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
#include"ticketClass.h"
#include"Select_Seats.h"


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
	

	public:
		Show_Bus_Details(void)
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
		~Show_Bus_Details()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mainlabel;
	private: System::Windows::Forms::TextBox^ deplabel;
	private: System::Windows::Forms::Label^ Depar;


	private: System::Windows::Forms::TextBox^ arrlabel;
	private: System::Windows::Forms::Label^ Arival;







	private: System::Windows::Forms::DateTimePicker^ depTimePick;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ showbutton;
	private: System::Windows::Forms::Label^ Aftersearchlabel;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::DataGridView^ grid;
	private: System::Windows::Forms::Button^ modButton;
	private: System::Windows::Forms::TextBox^ busidlabel;
	private: System::Windows::Forms::Label^ idlabel;



	private: System::Windows::Forms::Label^ label4;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->mainlabel = (gcnew System::Windows::Forms::Label());
			this->deplabel = (gcnew System::Windows::Forms::TextBox());
			this->Depar = (gcnew System::Windows::Forms::Label());
			this->arrlabel = (gcnew System::Windows::Forms::TextBox());
			this->Arival = (gcnew System::Windows::Forms::Label());
			this->depTimePick = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->Aftersearchlabel = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->grid = (gcnew System::Windows::Forms::DataGridView());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->busidlabel = (gcnew System::Windows::Forms::TextBox());
			this->idlabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->BeginInit();
			this->SuspendLayout();
			// 
			// mainlabel
			// 
			this->mainlabel->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->mainlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainlabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->mainlabel->Location = System::Drawing::Point(2, 0);
			this->mainlabel->Name = L"mainlabel";
			this->mainlabel->Size = System::Drawing::Size(925, 239);
			this->mainlabel->TabIndex = 1;
			this->mainlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->mainlabel->Click += gcnew System::EventHandler(this, &Show_Bus_Details::mainlabel_Click);
			// 
			// deplabel
			// 
			this->deplabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deplabel->ForeColor = System::Drawing::SystemColors::WindowText;
			this->deplabel->Location = System::Drawing::Point(232, 33);
			this->deplabel->Name = L"deplabel";
			this->deplabel->Size = System::Drawing::Size(685, 29);
			this->deplabel->TabIndex = 2;
			// 
			// Depar
			// 
			this->Depar->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Depar->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Italic));
			this->Depar->Location = System::Drawing::Point(4, 33);
			this->Depar->Name = L"Depar";
			this->Depar->Size = System::Drawing::Size(196, 29);
			this->Depar->TabIndex = 10;
			this->Depar->Text = L"Enter Departure point";
			this->Depar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// arrlabel
			// 
			this->arrlabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrlabel->ForeColor = System::Drawing::SystemColors::WindowText;
			this->arrlabel->Location = System::Drawing::Point(232, 72);
			this->arrlabel->Name = L"arrlabel";
			this->arrlabel->Size = System::Drawing::Size(685, 29);
			this->arrlabel->TabIndex = 13;
			this->arrlabel->TextChanged += gcnew System::EventHandler(this, &Show_Bus_Details::textBox1_TextChanged);
			// 
			// Arival
			// 
			this->Arival->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Arival->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12.2F, System::Drawing::FontStyle::Italic));
			this->Arival->Location = System::Drawing::Point(4, 72);
			this->Arival->Name = L"Arival";
			this->Arival->Size = System::Drawing::Size(196, 25);
			this->Arival->TabIndex = 15;
			this->Arival->Text = L"Enter Arrival point";
			this->Arival->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// depTimePick
			// 
			this->depTimePick->CustomFormat = L"MM/dd/yyyy";
			this->depTimePick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->depTimePick->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->depTimePick->Location = System::Drawing::Point(152, 116);
			this->depTimePick->MinDate = System::DateTime(2023, 4, 25, 0, 0, 0, 0);
			this->depTimePick->Name = L"depTimePick";
			this->depTimePick->Size = System::Drawing::Size(151, 26);
			this->depTimePick->TabIndex = 16;
			this->depTimePick->ValueChanged += gcnew System::EventHandler(this, &Show_Bus_Details::depTimePick_ValueChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 29);
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
			this->showbutton->Location = System::Drawing::Point(184, 161);
			this->showbutton->Name = L"showbutton";
			this->showbutton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->showbutton->Size = System::Drawing::Size(166, 44);
			this->showbutton->TabIndex = 23;
			this->showbutton->Text = L"  Search";
			this->showbutton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showbutton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->showbutton->UseVisualStyleBackColor = true;
			this->showbutton->Click += gcnew System::EventHandler(this, &Show_Bus_Details::showbutton_Click);
			// 
			// Aftersearchlabel
			// 
			this->Aftersearchlabel->BackColor = System::Drawing::SystemColors::Window;
			this->Aftersearchlabel->Location = System::Drawing::Point(-3, 239);
			this->Aftersearchlabel->Name = L"Aftersearchlabel";
			this->Aftersearchlabel->Size = System::Drawing::Size(930, 361);
			this->Aftersearchlabel->TabIndex = 24;
			this->Aftersearchlabel->Click += gcnew System::EventHandler(this, &Show_Bus_Details::Aftersearchlabel_Click);
			// 
			// grid
			// 
			this->grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->grid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->grid->BackgroundColor = System::Drawing::SystemColors::Window;
			this->grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grid->DefaultCellStyle = dataGridViewCellStyle4;
			this->grid->GridColor = System::Drawing::SystemColors::Window;
			this->grid->Location = System::Drawing::Point(33, 242);
			this->grid->Name = L"grid";
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grid->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->grid->RowHeadersWidth = 60;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Turquoise;
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			this->grid->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->grid->RowTemplate->Height = 24;
			this->grid->Size = System::Drawing::Size(864, 296);
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
			this->modButton->Location = System::Drawing::Point(748, 204);
			this->modButton->Name = L"modButton";
			this->modButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->modButton->Size = System::Drawing::Size(136, 35);
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
			this->busidlabel->Location = System::Drawing::Point(415, 161);
			this->busidlabel->Name = L"busidlabel";
			this->busidlabel->Size = System::Drawing::Size(512, 29);
			this->busidlabel->TabIndex = 27;
			this->busidlabel->TextChanged += gcnew System::EventHandler(this, &Show_Bus_Details::textBox1_TextChanged_1);
			// 
			// idlabel
			// 
			this->idlabel->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->idlabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12.2F, System::Drawing::FontStyle::Italic));
			this->idlabel->Location = System::Drawing::Point(487, 104);
			this->idlabel->Name = L"idlabel";
			this->idlabel->Size = System::Drawing::Size(300, 54);
			this->idlabel->TabIndex = 28;
			this->idlabel->Text = L"Enter a Bus Id to proceed:";
			this->idlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->idlabel->Click += gcnew System::EventHandler(this, &Show_Bus_Details::label2_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12.2F, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(356, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 29);
			this->label4->TabIndex = 29;
			this->label4->Text = L"ID:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Show_Bus_Details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(926, 609);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->idlabel);
			this->Controls->Add(this->busidlabel);
			this->Controls->Add(this->modButton);
			this->Controls->Add(this->grid);
			this->Controls->Add(this->Aftersearchlabel);
			this->Controls->Add(this->showbutton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->depTimePick);
			this->Controls->Add(this->Arival);
			this->Controls->Add(this->arrlabel);
			this->Controls->Add(this->Depar);
			this->Controls->Add(this->deplabel);
			this->Controls->Add(this->mainlabel);
			this->Name = L"Show_Bus_Details";
			this->Text = L"Show_Bus_Details";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->EndInit();
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

		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT Id, servProv, classTr, depDT, arrDT, estTime FROM BusInfo WHERE arrLoc=@arrLoc AND depLoc=@depLoc AND CONVERT(date, depDT) =@depDT;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@arrLoc", arrlabel->Text);
			cmd.Parameters->AddWithValue("@depLoc", deplabel->Text);
			cmd.Parameters->AddWithValue("@depDT", depTimePick->Value.Date);

			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Bus ID";
			grid->Columns[1]->HeaderText = "Service Provider";
			grid->Columns[2]->HeaderText = "Travel Class";
			grid->Columns[3]->HeaderText = "Arrival Time";
			grid->Columns[4]->HeaderText = "Departure Time";
			grid->Columns[5]->HeaderText = "Estimate Journey Time";

		}
		catch (Exception^ e) {
			MessageBox::Show("Database Connection Error", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

		   //private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		   //}

		   //private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		   //}
	private: System::Void Aftersearchlabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //public:Ticket^ hold = gcnew Ticket();

	
private: System::Void modButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ idd = this->busidlabel->Text;
	if(idd->Length==0)
		MessageBox::Show("Please enter Bus Id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	idlabel->Focus();
	idlabel->ForeColor = Color::Red;

		Select_Seats^ sel_seat = gcnew Select_Seats(busidlabel->Text);
		this->Close();
		sel_seat->ShowDialog();

}
private: System::Void mainlabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
	//public:Ticket^ data() { return hold; }
};
}