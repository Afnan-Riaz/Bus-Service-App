#pragma once
#include "busClass.h"

namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRemBus
	/// </summary>
	public ref class AddRemBus : public System::Windows::Forms::Form
	{
	public:
		AddRemBus(void)
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
		~AddRemBus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbSerProv;
	private: System::Windows::Forms::TextBox^ tbTotS;
	private: System::Windows::Forms::TextBox^ tbAvS;
	protected:

	protected:


	private: System::Windows::Forms::ComboBox^ tbClass;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ modButton;
	private: System::Windows::Forms::Button^ delButton;
	private: System::Windows::Forms::Button^ srchButton;








	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ tbBId;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ showbutton;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ BackButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRemBus::typeid));
			this->tbSerProv = (gcnew System::Windows::Forms::TextBox());
			this->tbTotS = (gcnew System::Windows::Forms::TextBox());
			this->tbAvS = (gcnew System::Windows::Forms::TextBox());
			this->tbClass = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->delButton = (gcnew System::Windows::Forms::Button());
			this->srchButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbBId = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BackButton = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackButton))->BeginInit();
			this->SuspendLayout();
			// 
			// tbSerProv
			// 
			this->tbSerProv->BackColor = System::Drawing::SystemColors::Control;
			this->tbSerProv->Location = System::Drawing::Point(366, 182);
			this->tbSerProv->Name = L"tbSerProv";
			this->tbSerProv->Size = System::Drawing::Size(261, 22);
			this->tbSerProv->TabIndex = 0;
			// 
			// tbTotS
			// 
			this->tbTotS->BackColor = System::Drawing::SystemColors::Control;
			this->tbTotS->Location = System::Drawing::Point(867, 182);
			this->tbTotS->Name = L"tbTotS";
			this->tbTotS->Size = System::Drawing::Size(93, 22);
			this->tbTotS->TabIndex = 1;
			// 
			// tbAvS
			// 
			this->tbAvS->BackColor = System::Drawing::SystemColors::Control;
			this->tbAvS->Location = System::Drawing::Point(997, 182);
			this->tbAvS->Name = L"tbAvS";
			this->tbAvS->Size = System::Drawing::Size(125, 22);
			this->tbAvS->TabIndex = 2;
			// 
			// tbClass
			// 
			this->tbClass->BackColor = System::Drawing::SystemColors::Control;
			this->tbClass->FormattingEnabled = true;
			this->tbClass->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Economy", L"Business Class", L"First Class" });
			this->tbClass->Location = System::Drawing::Point(687, 181);
			this->tbClass->Name = L"tbClass";
			this->tbClass->Size = System::Drawing::Size(121, 24);
			this->tbClass->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Service Provider";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(684, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 26);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Class of Travel";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(864, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Total Seats";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(994, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 26);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Available Seats";
			// 
			// addButton
			// 
			this->addButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addButton.BackgroundImage")));
			this->addButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->addButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Location = System::Drawing::Point(208, 267);
			this->addButton->Margin = System::Windows::Forms::Padding(0);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(110, 30);
			this->addButton->TabIndex = 9;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &AddRemBus::addButton_Click);
			// 
			// modButton
			// 
			this->modButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modButton.BackgroundImage")));
			this->modButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->modButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->modButton->Location = System::Drawing::Point(368, 267);
			this->modButton->Name = L"modButton";
			this->modButton->Size = System::Drawing::Size(110, 30);
			this->modButton->TabIndex = 9;
			this->modButton->Text = L"Modify";
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &AddRemBus::modButton_Click);
			// 
			// delButton
			// 
			this->delButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delButton.BackgroundImage")));
			this->delButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->delButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delButton->Location = System::Drawing::Point(531, 267);
			this->delButton->Name = L"delButton";
			this->delButton->Size = System::Drawing::Size(110, 30);
			this->delButton->TabIndex = 9;
			this->delButton->Text = L"Delete";
			this->delButton->UseVisualStyleBackColor = true;
			this->delButton->Click += gcnew System::EventHandler(this, &AddRemBus::delButton_Click);
			// 
			// srchButton
			// 
			this->srchButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"srchButton.BackgroundImage")));
			this->srchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->srchButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->srchButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->srchButton->Location = System::Drawing::Point(700, 267);
			this->srchButton->Name = L"srchButton";
			this->srchButton->Size = System::Drawing::Size(108, 30);
			this->srchButton->TabIndex = 9;
			this->srchButton->Text = L"Search";
			this->srchButton->UseVisualStyleBackColor = true;
			this->srchButton->Click += gcnew System::EventHandler(this, &AddRemBus::srchButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(113, 376);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1006, 210);
			this->dataGridView1->TabIndex = 10;
			// 
			// tbBId
			// 
			this->tbBId->BackColor = System::Drawing::SystemColors::Control;
			this->tbBId->Location = System::Drawing::Point(116, 181);
			this->tbBId->Name = L"tbBId";
			this->tbBId->Size = System::Drawing::Size(180, 22);
			this->tbBId->TabIndex = 0;
			this->tbBId->TextChanged += gcnew System::EventHandler(this, &AddRemBus::tbBId_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(113, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 26);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Bus Id (eg. DW-22-LEX3421)";
			// 
			// showbutton
			// 
			this->showbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showbutton.BackgroundImage")));
			this->showbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->showbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->showbutton->Location = System::Drawing::Point(863, 267);
			this->showbutton->Name = L"showbutton";
			this->showbutton->Size = System::Drawing::Size(110, 30);
			this->showbutton->TabIndex = 11;
			this->showbutton->Text = L"Refresh";
			this->showbutton->UseVisualStyleBackColor = true;
			this->showbutton->Click += gcnew System::EventHandler(this, &AddRemBus::showbutton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(109, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(279, 60);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Manage Buses";
			// 
			// BackButton
			// 
			this->BackButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackButton.Image")));
			this->BackButton->Location = System::Drawing::Point(65, 64);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(38, 32);
			this->BackButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->BackButton->TabIndex = 13;
			this->BackButton->TabStop = false;
			this->BackButton->Click += gcnew System::EventHandler(this, &AddRemBus::BackButton_Click);
			// 
			// AddRemBus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1236, 625);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->showbutton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->srchButton);
			this->Controls->Add(this->delButton);
			this->Controls->Add(this->modButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbClass);
			this->Controls->Add(this->tbAvS);
			this->Controls->Add(this->tbTotS);
			this->Controls->Add(this->tbBId);
			this->Controls->Add(this->tbSerProv);
			this->Name = L"AddRemBus";
			this->Text = L"AddRemBus";
			this->Load += gcnew System::EventHandler(this, &AddRemBus::AddRemBus_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackButton))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bd = gcnew BusData;
	bd->id = this->tbBId->Text;
	bd->sProv = this->tbSerProv->Text;
	bd->trClass = this->tbClass->Text;
	int::TryParse(this->tbTotS->Text, bd->tot_Seats);
	int::TryParse(this->tbAvS->Text, bd->av_Seats);
	if (bd->insert()) {
		MessageBox::Show("Successfully Saved");
	}
	else
		MessageBox::Show("An error occured");
}
private: System::Void tbBId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	tbBId->Text = tbBId->Text->ToUpper();
	tbBId->SelectionStart = tbBId->Text->Length;
}
private: System::Void modButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bd = gcnew BusData;
	bd->id = this->tbBId->Text;
	bd->sProv = this->tbSerProv->Text;
	bd->trClass = this->tbClass->Text;
	int::TryParse(this->tbTotS->Text, bd->tot_Seats);
	int::TryParse(this->tbAvS->Text, bd->av_Seats);
	if (bd->update()) {
		MessageBox::Show("Successfully Modified");
	}
	else
		MessageBox::Show("An error occured");

}
private: System::Void delButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bd = gcnew BusData;
	bd->id = this->tbBId->Text;
	bd->sProv = this->tbSerProv->Text;
	bd->trClass = this->tbClass->Text;
	int::TryParse(this->tbTotS->Text, bd->tot_Seats);
	int::TryParse(this->tbAvS->Text, bd->av_Seats);
	if (bd->del()) {
		MessageBox::Show("Successfully Deleted");
	}
	else
		MessageBox::Show("An error occured");

}

private: System::Void srchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bd = gcnew BusData;
	bd->id = this->tbBId->Text;
	bd->sProv = this->tbSerProv->Text;
	bd->trClass = this->tbClass->Text;
	int::TryParse(this->tbTotS->Text, bd->tot_Seats);
	int::TryParse(this->tbAvS->Text, bd->av_Seats);
	bd->search(dataGridView1);
}


private: System::Void showbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	BusData^ bd = gcnew BusData;
	bd->show(dataGridView1);
}
private: System::Void AddRemBus_Load(System::Object^ sender, System::EventArgs^ e) {
	showbutton->PerformClick();
}
public: bool go_back=false;
private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	go_back = true;
	this->Close();
}
};
}
