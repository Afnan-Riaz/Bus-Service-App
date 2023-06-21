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
	/// Summary for seeSchedules
	/// </summary>
	public ref class seeSchedules : public System::Windows::Forms::Form
	{
	Passenger^ user;
	public:
		seeSchedules(Passenger^ u)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			LoadDataIntoDataGridView(this->scedGrid);
			user = u;
			nameLabel->Text = u->name;
			balanceLabel->Text = "Rs. " + u->balance;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~seeSchedules()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ balanceLabel;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ scedGrid;
	private: System::Windows::Forms::Button^ applyBtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ timeFilter;
	private: System::Windows::Forms::Label^ mainLabel;
	private: System::Windows::Forms::Button^ allBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(seeSchedules::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->scedGrid = (gcnew System::Windows::Forms::DataGridView());
			this->applyBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timeFilter = (gcnew System::Windows::Forms::DateTimePicker());
			this->mainLabel = (gcnew System::Windows::Forms::Label());
			this->allBtn = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scedGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->balanceLabel);
			this->panel2->Controls->Add(this->nameLabel);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(-3, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(304, 97);
			this->panel2->TabIndex = 33;
			// 
			// balanceLabel
			// 
			this->balanceLabel->AutoSize = true;
			this->balanceLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balanceLabel->ForeColor = System::Drawing::Color::White;
			this->balanceLabel->Location = System::Drawing::Point(129, 54);
			this->balanceLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->balanceLabel->Name = L"balanceLabel";
			this->balanceLabel->Size = System::Drawing::Size(55, 22);
			this->balanceLabel->TabIndex = 2;
			this->balanceLabel->Text = L"Rs. 0";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::White;
			this->nameLabel->Location = System::Drawing::Point(153, 23);
			this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(60, 22);
			this->nameLabel->TabIndex = 10;
			this->nameLabel->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(33, 52);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Wallet:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(31, 22);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Signed in:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->back);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(304, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1087, 97);
			this->panel1->TabIndex = 32;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::SteelBlue;
			this->back->FlatAppearance->BorderSize = 0;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.Image")));
			this->back->Location = System::Drawing::Point(24, 10);
			this->back->Margin = System::Windows::Forms::Padding(4);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(92, 80);
			this->back->TabIndex = 32;
			this->back->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &seeSchedules::back_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(421, 27);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 47);
			this->label5->TabIndex = 0;
			this->label5->Text = L"See Schedules";
			// 
			// scedGrid
			// 
			this->scedGrid->AllowUserToAddRows = false;
			this->scedGrid->AllowUserToDeleteRows = false;
			this->scedGrid->AllowUserToResizeColumns = false;
			this->scedGrid->AllowUserToResizeRows = false;
			this->scedGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->scedGrid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->scedGrid->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->scedGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scedGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->scedGrid->DefaultCellStyle = dataGridViewCellStyle1;
			this->scedGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->scedGrid->GridColor = System::Drawing::SystemColors::Window;
			this->scedGrid->Location = System::Drawing::Point(169, 347);
			this->scedGrid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->scedGrid->Name = L"scedGrid";
			this->scedGrid->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->scedGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->scedGrid->RowHeadersWidth = 60;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			this->scedGrid->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->scedGrid->RowTemplate->Height = 24;
			this->scedGrid->Size = System::Drawing::Size(1053, 189);
			this->scedGrid->TabIndex = 37;
			// 
			// applyBtn
			// 
			this->applyBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->applyBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->applyBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->applyBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->applyBtn->Location = System::Drawing::Point(1055, 208);
			this->applyBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->applyBtn->Name = L"applyBtn";
			this->applyBtn->Size = System::Drawing::Size(119, 39);
			this->applyBtn->TabIndex = 36;
			this->applyBtn->Text = L"Apply";
			this->applyBtn->UseVisualStyleBackColor = true;
			this->applyBtn->Click += gcnew System::EventHandler(this, &seeSchedules::applyBtn_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(807, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 30);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Filter by Date:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timeFilter
			// 
			this->timeFilter->CustomFormat = L"MM/dd/yyyy";
			this->timeFilter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->timeFilter->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->timeFilter->Location = System::Drawing::Point(812, 217);
			this->timeFilter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->timeFilter->MinDate = System::DateTime(2023, 4, 25, 0, 0, 0, 0);
			this->timeFilter->Name = L"timeFilter";
			this->timeFilter->Size = System::Drawing::Size(151, 26);
			this->timeFilter->TabIndex = 34;
			// 
			// mainLabel
			// 
			this->mainLabel->BackColor = System::Drawing::Color::Transparent;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainLabel->Location = System::Drawing::Point(242, 217);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(313, 30);
			this->mainLabel->TabIndex = 38;
			this->mainLabel->Text = L"All Scheduled Buses:";
			this->mainLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// allBtn
			// 
			this->allBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->allBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->allBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->allBtn->Location = System::Drawing::Point(615, 209);
			this->allBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->allBtn->Name = L"allBtn";
			this->allBtn->Size = System::Drawing::Size(140, 39);
			this->allBtn->TabIndex = 39;
			this->allBtn->Text = L"See All";
			this->allBtn->UseVisualStyleBackColor = true;
			this->allBtn->Visible = false;
			this->allBtn->Click += gcnew System::EventHandler(this, &seeSchedules::allBtn_Click);
			// 
			// seeSchedules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1386, 674);
			this->Controls->Add(this->allBtn);
			this->Controls->Add(this->mainLabel);
			this->Controls->Add(this->scedGrid);
			this->Controls->Add(this->applyBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->timeFilter);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"seeSchedules";
			this->Text = L"Bus Service Application";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scedGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void LoadDataIntoDataGridView(DataGridView^ dgv)
		{
			// Set up connection string
			String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";

			// Create SQL command to select data from BUSINFO table
			String^ selectCommand = "SELECT Id, depLoc, arrLoc, classTr, servProv, depDT FROM busInfo";

			// Create data adapter and fill data into DataTable
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(selectCommand, connectionString);
			DataTable^ dataTable = gcnew DataTable();
			dataAdapter->Fill(dataTable);

			// Bind the data to the DataGridView
			dgv->DataSource = dataTable;
			dgv->Columns[0]->HeaderText = "Bus ID";
			dgv->Columns[1]->HeaderText = "Departure Location";
			dgv->Columns[2]->HeaderText = "Arrival Location";
			dgv->Columns[3]->HeaderText = "Class of Travel";
			dgv->Columns[4]->HeaderText = "Service Provider";
			dgv->Columns[5]->HeaderText = "Departure Date";
		}

		void FilterDataByDate(DataGridView^ dgv, DateTimePicker^ dateTimePicker)
		{
			// Get the selected date from the DateTimePicker
			DateTime depDate = dateTimePicker->Value;

			// Set up connection string
			String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";

			// Create SQL command to select data from BUSINFO table for the selected date
			String^ selectCommand = "SELECT Id, depLoc, arrLoc, classTr, servProv, depDT FROM busInfo WHERE CONVERT(date, depDT) = @depDate";

			// Create data adapter and fill data into DataTable
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(selectCommand, connectionString);
			dataAdapter->SelectCommand->Parameters->Add("@depDate", SqlDbType::Date)->Value = depDate;
			DataTable^ dataTable = gcnew DataTable();
			dataAdapter->Fill(dataTable);

			// Bind the filtered data to the DataGridView
			dgv->DataSource = dataTable;
		}



	private: System::Void applyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		FilterDataByDate(scedGrid, timeFilter);
		this->mainLabel->Text = "Filtered Results:";
		this->allBtn->Visible = true;
		this->allBtn->Enabled = true;
	}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void allBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadDataIntoDataGridView(this->scedGrid);
	this->allBtn->Enabled = false;

}
};
}
