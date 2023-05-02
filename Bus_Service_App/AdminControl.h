#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Bus_Service_App {

	/// <summary>
	/// Summary for AdminControl
	/// </summary>
	public ref class AdminControl : public System::Windows::Forms::UserControl
	{
	public:
		AdminControl(void)
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
		~AdminControl()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ tbAdUsername;

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ tbAdPass;


	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ tbAdName;
	public: System::Windows::Forms::TextBox^ tbAdEmail;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::DataGridView^ dataGridViewAdm;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tbAdUsername = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbAdPass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbAdName = (gcnew System::Windows::Forms::TextBox());
			this->tbAdEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewAdm = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAdm))->BeginInit();
			this->SuspendLayout();
			// 
			// tbAdUsername
			// 
			this->tbAdUsername->BackColor = System::Drawing::SystemColors::Control;
			this->tbAdUsername->Location = System::Drawing::Point(186, 109);
			this->tbAdUsername->Name = L"tbAdUsername";
			this->tbAdUsername->Size = System::Drawing::Size(305, 22);
			this->tbAdUsername->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label1->Location = System::Drawing::Point(186, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// tbAdPass
			// 
			this->tbAdPass->BackColor = System::Drawing::SystemColors::Control;
			this->tbAdPass->Location = System::Drawing::Point(646, 109);
			this->tbAdPass->Name = L"tbAdPass";
			this->tbAdPass->Size = System::Drawing::Size(305, 22);
			this->tbAdPass->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label2->Location = System::Drawing::Point(641, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// tbAdName
			// 
			this->tbAdName->BackColor = System::Drawing::SystemColors::Control;
			this->tbAdName->Location = System::Drawing::Point(186, 231);
			this->tbAdName->Name = L"tbAdName";
			this->tbAdName->Size = System::Drawing::Size(305, 22);
			this->tbAdName->TabIndex = 0;
			// 
			// tbAdEmail
			// 
			this->tbAdEmail->BackColor = System::Drawing::SystemColors::Control;
			this->tbAdEmail->Location = System::Drawing::Point(646, 231);
			this->tbAdEmail->Name = L"tbAdEmail";
			this->tbAdEmail->Size = System::Drawing::Size(305, 22);
			this->tbAdEmail->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label3->Location = System::Drawing::Point(186, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 28);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 9.200001F));
			this->label4->Location = System::Drawing::Point(641, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 28);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Email";
			// 
			// dataGridViewAdm
			// 
			this->dataGridViewAdm->AllowUserToAddRows = false;
			this->dataGridViewAdm->AllowUserToDeleteRows = false;
			this->dataGridViewAdm->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewAdm->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewAdm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAdm->Location = System::Drawing::Point(234, 347);
			this->dataGridViewAdm->Name = L"dataGridViewAdm";
			this->dataGridViewAdm->RowHeadersWidth = 51;
			this->dataGridViewAdm->RowTemplate->Height = 24;
			this->dataGridViewAdm->Size = System::Drawing::Size(660, 192);
			this->dataGridViewAdm->TabIndex = 2;
			// 
			// AdminControl
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->dataGridViewAdm);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbAdEmail);
			this->Controls->Add(this->tbAdName);
			this->Controls->Add(this->tbAdPass);
			this->Controls->Add(this->tbAdUsername);
			this->Margin = System::Windows::Forms::Padding(0);
			this->Name = L"AdminControl";
			this->Size = System::Drawing::Size(1126, 598);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAdm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
