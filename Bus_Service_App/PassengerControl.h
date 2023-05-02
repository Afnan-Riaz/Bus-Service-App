#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Bus_Service_App {

	/// <summary>
	/// Summary for PassengerControl
	/// </summary>
	public ref class PassengerControl : public System::Windows::Forms::UserControl
	{
	public:
		PassengerControl(void)
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
		~PassengerControl()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridViewPass;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ tbEmail;
	public: System::Windows::Forms::TextBox^ tbName;
	public: System::Windows::Forms::TextBox^ tbPass;
	public: System::Windows::Forms::TextBox^ tbUsername;
	public: System::Windows::Forms::TextBox^ tbPhone;
	public: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::NumericUpDown^ udBalance;
	private:



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
	public:
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridViewPass = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPass = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->udBalance = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->udBalance))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewPass
			// 
			this->dataGridViewPass->AllowUserToAddRows = false;
			this->dataGridViewPass->AllowUserToDeleteRows = false;
			this->dataGridViewPass->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewPass->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewPass->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPass->Location = System::Drawing::Point(110, 363);
			this->dataGridViewPass->Name = L"dataGridViewPass";
			this->dataGridViewPass->ReadOnly = true;
			this->dataGridViewPass->RowHeadersWidth = 51;
			this->dataGridViewPass->RowTemplate->Height = 24;
			this->dataGridViewPass->Size = System::Drawing::Size(910, 192);
			this->dataGridViewPass->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label4->Location = System::Drawing::Point(636, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 28);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label2->Location = System::Drawing::Point(636, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 28);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label3->Location = System::Drawing::Point(181, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 28);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label1->Location = System::Drawing::Point(181, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 28);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Username";
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::SystemColors::Control;
			this->tbEmail->Location = System::Drawing::Point(641, 165);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(305, 22);
			this->tbEmail->TabIndex = 3;
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Control;
			this->tbName->Location = System::Drawing::Point(181, 165);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(305, 22);
			this->tbName->TabIndex = 4;
			// 
			// tbPass
			// 
			this->tbPass->BackColor = System::Drawing::SystemColors::Control;
			this->tbPass->Location = System::Drawing::Point(641, 79);
			this->tbPass->Name = L"tbPass";
			this->tbPass->Size = System::Drawing::Size(305, 22);
			this->tbPass->TabIndex = 5;
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::SystemColors::Control;
			this->tbUsername->Location = System::Drawing::Point(181, 79);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(305, 22);
			this->tbUsername->TabIndex = 6;
			// 
			// tbPhone
			// 
			this->tbPhone->BackColor = System::Drawing::SystemColors::Control;
			this->tbPhone->Location = System::Drawing::Point(181, 250);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(305, 22);
			this->tbPhone->TabIndex = 4;
			// 
			// tbAddress
			// 
			this->tbAddress->BackColor = System::Drawing::SystemColors::Control;
			this->tbAddress->Location = System::Drawing::Point(641, 250);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(305, 22);
			this->tbAddress->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label5->Location = System::Drawing::Point(181, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 28);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Phone";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label6->Location = System::Drawing::Point(636, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 28);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Address";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label7->Location = System::Drawing::Point(504, 279);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 28);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Balance";
			// 
			// udBalance
			// 
			this->udBalance->BackColor = System::Drawing::SystemColors::Control;
			this->udBalance->InterceptArrowKeys = false;
			this->udBalance->Location = System::Drawing::Point(509, 310);
			this->udBalance->Name = L"udBalance";
			this->udBalance->Size = System::Drawing::Size(104, 22);
			this->udBalance->TabIndex = 12;
			// 
			// PassengerControl
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->udBalance);
			this->Controls->Add(this->dataGridViewPass);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbPass);
			this->Controls->Add(this->tbUsername);
			this->Name = L"PassengerControl";
			this->Size = System::Drawing::Size(1126, 598);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->udBalance))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
