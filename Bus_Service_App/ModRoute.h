#pragma once
#include"userClass.h"
#include"busClass.h"
namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModRoute
	/// </summary>
	public ref class ModRoute : public System::Windows::Forms::Form
	{
	public:
		ModRoute(Admin^ admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->AdName->Text = admin->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModRoute()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ srchButton;
	private: System::Windows::Forms::Button^ delButton;
	private: System::Windows::Forms::Button^ showbutton;
	private: System::Windows::Forms::Button^ modButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ AdName;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ backButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbBId;
	private: System::Windows::Forms::TextBox^ tbLocDep;
	private: System::Windows::Forms::TextBox^ tbLocArr;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ updownStops;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModRoute::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AdName = (gcnew System::Windows::Forms::Label());
			this->srchButton = (gcnew System::Windows::Forms::Button());
			this->delButton = (gcnew System::Windows::Forms::Button());
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->backButton = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbBId = (gcnew System::Windows::Forms::TextBox());
			this->tbLocDep = (gcnew System::Windows::Forms::TextBox());
			this->tbLocArr = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->updownStops = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->updownStops))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->srchButton);
			this->panel1->Controls->Add(this->delButton);
			this->panel1->Controls->Add(this->showbutton);
			this->panel1->Controls->Add(this->modButton);
			this->panel1->Controls->Add(this->addButton);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 749);
			this->panel1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->AdName);
			this->panel2->Location = System::Drawing::Point(0, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(292, 94);
			this->panel2->TabIndex = 23;
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
			this->srchButton->TabIndex = 19;
			this->srchButton->Text = L"  Search";
			this->srchButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->srchButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srchButton->UseVisualStyleBackColor = true;
			this->srchButton->Click += gcnew System::EventHandler(this, &ModRoute::srchButton_Click);
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
			this->delButton->TabIndex = 20;
			this->delButton->Text = L"  Delete";
			this->delButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->delButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->delButton->UseVisualStyleBackColor = true;
			this->delButton->Click += gcnew System::EventHandler(this, &ModRoute::delButton_Click);
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
			this->showbutton->TabIndex = 22;
			this->showbutton->Text = L"  Refresh";
			this->showbutton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showbutton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->showbutton->UseVisualStyleBackColor = true;
			this->showbutton->Click += gcnew System::EventHandler(this, &ModRoute::showbutton_Click);
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
			this->modButton->TabIndex = 21;
			this->modButton->Text = L"  Modify";
			this->modButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->modButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &ModRoute::modButton_Click);
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
			this->addButton->Location = System::Drawing::Point(0, 235);
			this->addButton->Margin = System::Windows::Forms::Padding(0);
			this->addButton->Name = L"addButton";
			this->addButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->addButton->Size = System::Drawing::Size(291, 79);
			this->addButton->TabIndex = 18;
			this->addButton->Text = L"  Add";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &ModRoute::addButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 91);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(290, 144);
			this->button1->TabIndex = 0;
			this->button1->Text = L"  Modify Routes";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Controls->Add(this->backButton);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(289, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1125, 95);
			this->panel3->TabIndex = 13;
			// 
			// backButton
			// 
			this->backButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.Image")));
			this->backButton->Location = System::Drawing::Point(23, 23);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(54, 54);
			this->backButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backButton->TabIndex = 1;
			this->backButton->TabStop = false;
			this->backButton->Click += gcnew System::EventHandler(this, &ModRoute::backButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(408, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MODIFY ROUTES";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(352, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 26);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Bus Id (eg. DW-22-LEX3421)";
			// 
			// tbBId
			// 
			this->tbBId->BackColor = System::Drawing::SystemColors::Control;
			this->tbBId->Location = System::Drawing::Point(355, 266);
			this->tbBId->Name = L"tbBId";
			this->tbBId->Size = System::Drawing::Size(219, 22);
			this->tbBId->TabIndex = 15;
			// 
			// tbLocDep
			// 
			this->tbLocDep->BackColor = System::Drawing::SystemColors::Control;
			this->tbLocDep->Location = System::Drawing::Point(625, 266);
			this->tbLocDep->Name = L"tbLocDep";
			this->tbLocDep->Size = System::Drawing::Size(183, 22);
			this->tbLocDep->TabIndex = 17;
			// 
			// tbLocArr
			// 
			this->tbLocArr->BackColor = System::Drawing::SystemColors::Control;
			this->tbLocArr->Location = System::Drawing::Point(857, 265);
			this->tbLocArr->Name = L"tbLocArr";
			this->tbLocArr->Size = System::Drawing::Size(164, 22);
			this->tbLocArr->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9));
			this->label2->Location = System::Drawing::Point(620, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 26);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Location of Departure";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9));
			this->label3->Location = System::Drawing::Point(852, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 26);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Location of Arrival";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(491, 407);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(633, 210);
			this->dataGridView1->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9));
			this->label4->Location = System::Drawing::Point(1076, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 26);
			this->label4->TabIndex = 22;
			this->label4->Text = L"No. of Stops";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9));
			this->label6->Location = System::Drawing::Point(1207, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 26);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Est. Journey Time";
			// 
			// updownStops
			// 
			this->updownStops->Location = System::Drawing::Point(1081, 265);
			this->updownStops->Name = L"updownStops";
			this->updownStops->Size = System::Drawing::Size(61, 22);
			this->updownStops->TabIndex = 24;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"HH:mm";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(1212, 265);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(101, 22);
			this->dateTimePicker1->TabIndex = 25;
			// 
			// ModRoute
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1414, 749);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->updownStops);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbLocArr);
			this->Controls->Add(this->tbLocDep);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbBId);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(289, 749);
			this->Name = L"ModRoute";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Service Application";
			this->Load += gcnew System::EventHandler(this, &ModRoute::ModRoute_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->updownStops))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool go_back = false;

	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		backButton->BorderStyle = BorderStyle::Fixed3D;
		go_back = true;
		this->Close();
	}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bus = gcnew BusData;
	bus->id = tbBId->Text;
	bus->route->depLoc = tbLocDep->Text;
	bus->route->arrLoc = tbLocArr->Text;
	bus->route->stops = Decimal::ToInt32(updownStops->Value);
	DateTime DT = dateTimePicker1->Value;
	bus->route->estTime = DT.ToString("HH\\h\\r\\s\\ mm\\m\\i\\n\\s");
	if (bus->addRoute()) {
		MessageBox::Show("Successfully Saved");
	}
	else
		MessageBox::Show("An error occured");
	showbutton->PerformClick();

}
private: System::Void modButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bus = gcnew BusData;
	bus->id = tbBId->Text;
	bus->route->depLoc = tbLocDep->Text;
	bus->route->arrLoc = tbLocArr->Text;
	bus->route->stops = Decimal::ToInt32(updownStops->Value);
	DateTime DT = dateTimePicker1->Value;
	bus->route->estTime = DT.ToString("HH\\h\\r\\s\\ mm\\m\\i\\n\\s");
	if (bus->updRoute()) {
		MessageBox::Show("Successfully Modified");
	}
	else
		MessageBox::Show("An error occured");
	showbutton->PerformClick();

}
private: System::Void delButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bus = gcnew BusData;
	bus->id = tbBId->Text;
	if (bus->delRoute()) {
		MessageBox::Show("Successfully Deleted");
	}
	else
		MessageBox::Show("An error occured");
	showbutton->PerformClick();
}

private: System::Void srchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bus = gcnew BusData;
	bus->id = tbBId->Text;
	if (!(bus->searchRoute(dataGridView1))) {
		MessageBox::Show("An error occured");
	}
}
private: System::Void showbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bd = gcnew BusData;
	bd->showRoute(dataGridView1);
}
private: System::Void ModRoute_Load(System::Object^ sender, System::EventArgs^ e) {
	showbutton->PerformClick();
}
};
}
