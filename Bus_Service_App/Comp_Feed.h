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
	/// Summary for Comp_Feed
	/// </summary>
	public ref class Comp_Feed : public System::Windows::Forms::Form
	{
	public:
		Comp_Feed(Admin^ admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			AdName->Text = admin->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Comp_Feed()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ delButton;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ AdName;
	private: System::Windows::Forms::Button^ addButton;

	private: System::Windows::Forms::Button^ mngBusButton;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ BackButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ assistlabel;
	private: System::Windows::Forms::Label^ pricelabel;
	private: System::Windows::Forms::Label^ needlabel;
	private: System::Windows::Forms::Label^ explabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Comp_Feed::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->delButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AdName = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->mngBusButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BackButton = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->explabel = (gcnew System::Windows::Forms::Label());
			this->needlabel = (gcnew System::Windows::Forms::Label());
			this->pricelabel = (gcnew System::Windows::Forms::Label());
			this->assistlabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel1->Controls->Add(this->delButton);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->addButton);
			this->panel1->Controls->Add(this->mngBusButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->MinimumSize = System::Drawing::Size(289, 749);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 749);
			this->panel1->TabIndex = 16;
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
			this->delButton->Location = System::Drawing::Point(-2, 314);
			this->delButton->Name = L"delButton";
			this->delButton->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->delButton->Size = System::Drawing::Size(292, 76);
			this->delButton->TabIndex = 9;
			this->delButton->Text = L"  Ignore";
			this->delButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->delButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->delButton->UseVisualStyleBackColor = true;
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
			this->addButton->Text = L"  Reply";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->addButton->UseVisualStyleBackColor = true;
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
			this->mngBusButton->Padding = System::Windows::Forms::Padding(10, 10, 0, 10);
			this->mngBusButton->Size = System::Drawing::Size(290, 141);
			this->mngBusButton->TabIndex = 10;
			this->mngBusButton->Text = L"  User Feedback";
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
			this->panel3->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(411, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(268, 53);
			this->label7->TabIndex = 0;
			this->label7->Text = L"USER FEEDBACK";
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
			this->BackButton->Click += gcnew System::EventHandler(this, &Comp_Feed::BackButton_Click);
			this->BackButton->MouseEnter += gcnew System::EventHandler(this, &Comp_Feed::BackButton_MouseEnter);
			this->BackButton->MouseLeave += gcnew System::EventHandler(this, &Comp_Feed::BackButton_MouseLeave);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(385, 217);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->ShowCellToolTips = false;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->ShowRowErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(193, 419);
			this->dataGridView1->TabIndex = 18;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Comp_Feed::dataGridView1_CellClick);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::AliceBlue;
			this->panel4->Controls->Add(this->linkLabel1);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->assistlabel);
			this->panel4->Controls->Add(this->pricelabel);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->needlabel);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->explabel);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(677, 217);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(644, 419);
			this->panel4->TabIndex = 19;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->linkLabel1->Location = System::Drawing::Point(243, 348);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(154, 36);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"See Feedback";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(254, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 42);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Feedback";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(86, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 36);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Assistance:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(86, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Pricing:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(86, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Needs:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Experience:";
			// 
			// explabel
			// 
			this->explabel->AutoSize = true;
			this->explabel->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->explabel->Location = System::Drawing::Point(217, 103);
			this->explabel->Name = L"explabel";
			this->explabel->Size = System::Drawing::Size(122, 36);
			this->explabel->TabIndex = 0;
			this->explabel->Text = L"Experience";
			// 
			// needlabel
			// 
			this->needlabel->AutoSize = true;
			this->needlabel->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->needlabel->Location = System::Drawing::Point(178, 162);
			this->needlabel->Name = L"needlabel";
			this->needlabel->Size = System::Drawing::Size(77, 36);
			this->needlabel->TabIndex = 1;
			this->needlabel->Text = L"Needs";
			// 
			// pricelabel
			// 
			this->pricelabel->AutoSize = true;
			this->pricelabel->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricelabel->Location = System::Drawing::Point(182, 222);
			this->pricelabel->Name = L"pricelabel";
			this->pricelabel->Size = System::Drawing::Size(83, 36);
			this->pricelabel->TabIndex = 2;
			this->pricelabel->Text = L"Pricing";
			// 
			// assistlabel
			// 
			this->assistlabel->AutoSize = true;
			this->assistlabel->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assistlabel->Location = System::Drawing::Point(217, 279);
			this->assistlabel->Name = L"assistlabel";
			this->assistlabel->Size = System::Drawing::Size(121, 36);
			this->assistlabel->TabIndex = 3;
			this->assistlabel->Text = L"Assistance";
			// 
			// Comp_Feed
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1414, 749);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(289, 749);
			this->Name = L"Comp_Feed";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Service Application";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:	bool go_back = false;
	private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		BackButton->BorderStyle = BorderStyle::Fixed3D;
		go_back = true;
		this->Close();
	}
		   String^ activeCell;
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0)
		activeCell = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
}

private: System::Void BackButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	BackButton->BorderStyle = BorderStyle::FixedSingle;
}
private: System::Void BackButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	BackButton->BorderStyle = BorderStyle::None;
}
};
}
