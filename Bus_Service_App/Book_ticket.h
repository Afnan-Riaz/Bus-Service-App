#pragma once
#include"ticketclass.h"
namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for Book_ticket
	/// </summary>
	public ref class Book_ticket : public System::Windows::Forms::Form
	{
		String^ ID;
	public:
		Book_ticket(String^ id)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ID = id;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Book_ticket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Name;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Phoneno;
	private: System::Windows::Forms::TextBox^ Email;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ backButton;
	private: System::Windows::Forms::Label^ namelabel;
	private: System::Windows::Forms::Label^ phonelabel;
	private: System::Windows::Forms::Label^ emaillabel;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Book_ticket::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Phoneno = (gcnew System::Windows::Forms::TextBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::PictureBox());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->phonelabel = (gcnew System::Windows::Forms::Label());
			this->emaillabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButton))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1100, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TICKET BOOKING";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name
			// 
			this->Name->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Name->Location = System::Drawing::Point(32, 163);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(709, 29);
			this->Name->TabIndex = 1;
			this->Name->TextChanged += gcnew System::EventHandler(this, &Book_ticket::Name_TextChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(97, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(552, 44);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Information of main passenger";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Phoneno
			// 
			this->Phoneno->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phoneno->Location = System::Drawing::Point(32, 227);
			this->Phoneno->Name = L"Phoneno";
			this->Phoneno->Size = System::Drawing::Size(709, 29);
			this->Phoneno->TabIndex = 3;
			// 
			// Email
			// 
			this->Email->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->Location = System::Drawing::Point(32, 291);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(709, 29);
			this->Email->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13, System::Drawing::FontStyle::Italic));
			this->button1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button1->Location = System::Drawing::Point(126, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 43);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Book_ticket::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13, System::Drawing::FontStyle::Italic));
			this->button3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button3->Location = System::Drawing::Point(412, 339);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 43);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Book_ticket::button3_Click);
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::LightSkyBlue;
			this->backButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.Image")));
			this->backButton->Location = System::Drawing::Point(21, 9);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(54, 41);
			this->backButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backButton->TabIndex = 8;
			this->backButton->TabStop = false;
			// 
			// namelabel
			// 
			this->namelabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namelabel->Location = System::Drawing::Point(84, 131);
			this->namelabel->Name = L"namelabel";
			this->namelabel->Size = System::Drawing::Size(72, 29);
			this->namelabel->TabIndex = 9;
			this->namelabel->Text = L"Name";
			this->namelabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// phonelabel
			// 
			this->phonelabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonelabel->Location = System::Drawing::Point(69, 195);
			this->phonelabel->Name = L"phonelabel";
			this->phonelabel->Size = System::Drawing::Size(172, 29);
			this->phonelabel->TabIndex = 10;
			this->phonelabel->Text = L"Phone Number";
			this->phonelabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// emaillabel
			// 
			this->emaillabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emaillabel->Location = System::Drawing::Point(69, 259);
			this->emaillabel->Name = L"emaillabel";
			this->emaillabel->Size = System::Drawing::Size(72, 29);
			this->emaillabel->TabIndex = 11;
			this->emaillabel->Text = L"Email";
			this->emaillabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Book_ticket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(1103, 455);
			this->Controls->Add(this->emaillabel);
			this->Controls->Add(this->phonelabel);
			this->Controls->Add(this->namelabel);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->Phoneno);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Text = L"Book_ticket";
			this->Load += gcnew System::EventHandler(this, &Book_ticket::Book_ticket_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButton))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->Email->Text;
	String^ phoneno = this->Phoneno->Text;
	String^ name = this->Name->Text;

	if (name->Length == 0 || phoneno->Length == 0 || email->Length == 0) {
		MessageBox::Show("Please enter all the required information.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (name->Length == 0) {
			namelabel->Focus();
			namelabel->ForeColor = Color::Red;
		}
		else if (email->Length == 0) {
			emaillabel->Focus();
			emaillabel->ForeColor = Color::Red;
		}
		else if (phoneno->Length == 0) {
			phonelabel->Focus();
			phonelabel->ForeColor = Color::Red;
		}
	}
	Ticket^ t = gcnew Ticket();
	t->Id = ID;
	t->passengerName = name;
	//t->Email = email;
	//t->Phone = phoneno;
	t->setinfo();

}
private: System::Void Name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Book_ticket_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
