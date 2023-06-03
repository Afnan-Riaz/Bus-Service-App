#pragma once
#include"ticketClass.h"
#include"busClass.h"
#include"routeClass.h"
#include"sceduleClass.h"
#include"ticketPayment.h"
#include <vcclr.h>
#include <ctime>
#include <cstdlib>

namespace Bus_Service_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Select_Seats
	/// </summary>
	public ref class Select_Seats : public System::Windows::Forms::Form
	{
	public:
		array<int>^ intarr = gcnew array<int>(40);
		array<int>^ selArr = gcnew array<int>(40);

		int row = 0,len,len1=0;

	public:
		int col = 0;

	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::Label^ arrlabel;
	private: System::Windows::Forms::Label^ dash;
	private: System::Windows::Forms::Label^ deplabel;
	private: System::Windows::Forms::TableLayoutPanel^ SeatingChart;
	private: System::Windows::Forms::Button^ modButton;
	private: System::Windows::Forms::Panel^ panel;

	public: String^ ID;
	public: String^ username;
	public: Passenger^ user;
	public: BusData^ busInfo;

	public:
		Select_Seats(String^ b, String^ name, Passenger^ p)
		{
			InitializeComponent();
			//
			//TODO: Add the	 constructor code here
			//
			ID = b;
			busInfo = gcnew BusData;
			busInfo->id = ID;
			username = name;
			user = p;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Select_Seats()
		{
			if (components)
			{
				delete components;
			}
		}





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Select_Seats::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->arrlabel = (gcnew System::Windows::Forms::Label());
			this->dash = (gcnew System::Windows::Forms::Label());
			this->deplabel = (gcnew System::Windows::Forms::Label());
			this->SeatingChart = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->arrlabel);
			this->panel1->Controls->Add(this->dash);
			this->panel1->Controls->Add(this->deplabel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1129, 105);
			this->panel1->TabIndex = 28;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Select_Seats::panel1_Paint);
			// 
			// arrlabel
			// 
			this->arrlabel->AutoSize = true;
			this->arrlabel->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrlabel->ForeColor = System::Drawing::Color::White;
			this->arrlabel->Location = System::Drawing::Point(619, 37);
			this->arrlabel->Name = L"arrlabel";
			this->arrlabel->Size = System::Drawing::Size(92, 32);
			this->arrlabel->TabIndex = 0;
			this->arrlabel->Text = L"label1";
			// 
			// dash
			// 
			this->dash->AutoSize = true;
			this->dash->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash->ForeColor = System::Drawing::Color::White;
			this->dash->Location = System::Drawing::Point(539, 37);
			this->dash->Name = L"dash";
			this->dash->Size = System::Drawing::Size(53, 32);
			this->dash->TabIndex = 0;
			this->dash->Text = L"TO";
			// 
			// deplabel
			// 
			this->deplabel->AutoSize = true;
			this->deplabel->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deplabel->ForeColor = System::Drawing::Color::White;
			this->deplabel->Location = System::Drawing::Point(417, 37);
			this->deplabel->Name = L"deplabel";
			this->deplabel->Size = System::Drawing::Size(92, 32);
			this->deplabel->TabIndex = 0;
			this->deplabel->Text = L"label1";
			// 
			// SeatingChart
			// 
			this->SeatingChart->AutoSize = true;
			this->SeatingChart->ColumnCount = 7;
			this->SeatingChart->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.2865F)));
			this->SeatingChart->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28652F)));
			this->SeatingChart->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28652F)));
			this->SeatingChart->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28092F)));
			this->SeatingChart->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28652F)));
			this->SeatingChart->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28652F)));
			this->SeatingChart->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28652F)));
			this->SeatingChart->Location = System::Drawing::Point(336, 81);
			this->SeatingChart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SeatingChart->Name = L"SeatingChart";
			this->SeatingChart->RowCount = 9;
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->SeatingChart->Size = System::Drawing::Size(467, 327);
			this->SeatingChart->TabIndex = 2;
			this->SeatingChart->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Select_Seats::tableLayoutPanel1_Paint);
			// 
			// modButton
			// 
			this->modButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modButton.BackgroundImage")));
			this->modButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->modButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->modButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->modButton->Location = System::Drawing::Point(519, 447);
			this->modButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->modButton->Name = L"modButton";
			this->modButton->Padding = System::Windows::Forms::Padding(29, 0, 0, 0);
			this->modButton->Size = System::Drawing::Size(136, 34);
			this->modButton->TabIndex = 27;
			this->modButton->Text = L"Next    ";
			this->modButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &Select_Seats::modButton_Click);
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel->Controls->Add(this->modButton);
			this->panel->Controls->Add(this->SeatingChart);
			this->panel->Location = System::Drawing::Point(0, 95);
			this->panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(1129, 551);
			this->panel->TabIndex = 29;
			// 
			// Select_Seats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1129, 640);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Select_Seats";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Select_Seats";
			this->Load += gcnew System::EventHandler(this, &Select_Seats::Select_Seats_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void Select_Seats::SeatButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ seatButton = dynamic_cast<Button^>(sender);
	
	if (seatButton->Tag->ToString() == "Available")
	{
		seatButton->BackColor = Color::Blue; 
		seatButton->Tag = "Selected";
		intarr[len++] = System::Convert::ToInt32(seatButton->Text);
		selArr[len1++] = System::Convert::ToInt32(seatButton->Text);

	}
	else if (seatButton->Tag->ToString() == "Selected")
	{
		seatButton->BackColor = Color::Gray; 
		seatButton->Tag = "Available"; 
		int no = System::Convert::ToInt32(seatButton->Text);
		int newlen = 0;
		for (int i = 0; i < len; i++) {
			if (intarr[i] != no) {
				intarr[newlen] = intarr[i];
				newlen++;
			}
		}
		len = newlen;
		newlen = 0;
		for (int i = 0; i < len1; i++) {
			if (selArr[i] != no) {
				selArr[newlen] = selArr[i];
				newlen++;
			}
		}
		len1 = newlen;
	}
	else if (seatButton->Tag->ToString() == "Booked")
	{
		MessageBox::Show("This seat has already been booked.");
	}
} 
		   

private: System::Void Selectbutton_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   int GenerateUniqueRandomNumber()
	   {
		   // Set up random number generation
		   srand(time(NULL));

		   // Keep track of generated numbers
		   List<int>^ generatedNumbers = gcnew List<int>();

		   // Generate random number until a unique one is found
		   int randomNumber;
		   do {
			   randomNumber = rand() % 1000 + 1;
		   } while (generatedNumbers->Contains(randomNumber));

		   // Add the generated number to the list of generated numbers
		   generatedNumbers->Add(randomNumber);

		   // Return the generated number
		   return randomNumber;
	   }

	   public:bool toMenu = false;
	private: System::Void modButton_Click(System::Object^ sender, System::EventArgs^ e) {
		bool check;		
		if (len1 != 0)			//Checks if user has selected a seat or not
			check = true;
		else {
			MessageBox::Show("You have not selected any seat.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			check = false;
		}
		if (check) {
			Ticket^ t = gcnew Ticket();
			t->bus = busInfo;
			t->user = user;
			t->ticketnum = GenerateUniqueRandomNumber();

			int f; //fare
			if (busInfo->trClass == "Business")
				f = len1 * 1500;
			else if (busInfo->trClass == "Economy")
				f = len1 * 500;
			else f = len1 * 1000;

			t->fare = f;

			String^ s = "";
			for (int i = 0; i < len; i++) {
				s += intarr[i].ToString();
				if (i != len && i < len - 1)
					s += ",";
			}
			String^ s1 = "";
			for (int i = 0; i < len1; i++) {
				s1 += selArr[i].ToString();
				if (i != len1 && i < len1 - 1)
					s1 += ",";
			}


			//Ticket^ t = gcnew Ticket;
			//t->Id = ID;
			//t->setbookedseats(s, s1);

			//MessageBox::Show("Seats booked Successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			//this->Close();

			Bus_Service_App::ticketPayment paymentForm(user, t, s, s1);
			paymentForm.ShowDialog();
			if (paymentForm.backToMenu)
			{
				this->Close();
				toMenu = true;
			}
			if (paymentForm.bookMore) {
				this->Close();
				toMenu = false;
			}
		}
	}
private: System::Void Select_Seats_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ bookedSeats;
	String^ ss;
	int seats;
	String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
	SqlConnection sqlconn(connstring);
	sqlconn.Open();

	String^ que = "SELECT totSeat,Booked_Seats,servProv,classTr,depLoc,arrLoc FROM BusInfo WHERE Id=@Id;";
	SqlCommand cmd(que, % sqlconn);
	cmd.Parameters->AddWithValue("@Id", ID);
	SqlDataReader^ reader = cmd.ExecuteReader();
	if (reader->Read()) {
		ss = reader["totSeat"]->ToString();
		bookedSeats = reader["Booked_Seats"]->ToString();
		busInfo->sProv = reader["servProv"]->ToString();
		busInfo->trClass = reader["classTr"]->ToString();
		busInfo->route->arrLoc = reader["arrLoc"]->ToString();
		busInfo->route->depLoc = reader["depLoc"]->ToString();
	}
	reader->Close();
	seats = System::Convert::ToInt32(ss);

	array<String^>^ seatNumbers = bookedSeats->Split(',');
	len = seatNumbers->Length;

	for (int i = 0; i < seatNumbers->Length; i++) {
		intarr[i] = Int32::Parse(seatNumbers[i]);
	}
	int rows=seats/6;
	int exseats = seats - 6 * rows,count=0;
	for (row = 0; row <rows ; row++)
	{
		for (col = 0; col < 6; col++)
		{
			Button^ seatButton = gcnew Button();
			seatButton->Dock = System::Windows::Forms::DockStyle::Fill;
			count++;
			seatButton->Text = (row * 6+ col + 1).ToString();
			seatButton->Tag = "Available";
			seatButton->Click += gcnew EventHandler(this, &Select_Seats::SeatButton_Click);
			for (int i = 0; i < len; i++) {
				if (row * 6 + col + 1 == intarr[i]) {
					seatButton->Tag = "Booked";
					seatButton->BackColor = System::Drawing::Color::LightSalmon;
				}
			}
			SeatingChart->Controls->Add(seatButton, col, row);

		}
	}
	row++;
		col = 0;
	for (int i = 0; i < exseats; i++) {
		Button^ seatButton = gcnew Button();
		seatButton->Dock = System::Windows::Forms::DockStyle::Fill;
		seatButton->Text = (count).ToString();
		seatButton->Tag = "Available";
		seatButton->Click += gcnew EventHandler(this, &Select_Seats::SeatButton_Click);
		for (int i = 0; i < len; i++) {
			if (count == intarr[i]) {
				seatButton->Tag = "Booked";
				seatButton->BackColor = System::Drawing::Color::LightSalmon;
			}
		}
		SeatingChart->Controls->Add(seatButton, col++, row);
		count++;
	}
	String^ que1 = "SELECT arrLoc, depLoc FROM BusInfo WHERE Id= @id;";
	SqlCommand cmd1(que1, % sqlconn);
	cmd1.Parameters->AddWithValue("@id", ID);
	SqlDataReader^ reader1 = cmd1.ExecuteReader();
	if (reader1->Read()) {
		arrlabel->Text = reader1["arrLoc"]->ToString();
		deplabel->Text = reader1["depLoc"]->ToString();
	}
	reader1->Close();
	sqlconn.Close();

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
