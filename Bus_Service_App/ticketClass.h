#pragma once
#include"busclass.h"
#include"userclass.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
public ref class Ticket{
public:
	static int ticketno;
	float fare;
	int seat_no;
	String^ seat_class;
	String^ passengerName;
	String^ Id;
	String^ arrloc;
	String^ deploc;
	DateTime^ date;
public:
	int Ticket::ticketno = 0;
	int changeticket_no(){
		return ++ticketno;
	}
	void showsearch(DataGridView^grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT Id, servProv, classTr, depDT, arrDT, estTime FROM BusInfo WHERE arrLoc=@arrLoc AND depLoc=@depLoc AND CONVERT(date, depDT) =@depDT;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@arrLoc", arrloc);
			cmd.Parameters->AddWithValue("@depLoc", deploc);
			cmd.Parameters->AddWithValue("@depDT", date);

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
	void setbookedseats(String^ s, String^selSeats) {
		String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
		SqlConnection sqlconn(connstring);
		sqlconn.Open();


		String^ que = "UPDATE BusInfo SET Booked_Seats = @Booked_Seats WHERE Id = @id;";
		SqlCommand cmd(que, % sqlconn);
		cmd.Parameters->AddWithValue("@id", Id);
		cmd.Parameters->AddWithValue("@Booked_Seats", s);
		cmd.ExecuteNonQuery();
		
		String^ que2 = "INSERT INTO ticket (passenger_name,Bus_id,Booked_Seats,fare) VALUES (@name,@busId,@Booked_Seats,@fare);";
		SqlCommand cmd2(que2, % sqlconn);
		cmd2.Parameters->AddWithValue("@name", passengerName);
		cmd2.Parameters->AddWithValue("@busId",Id);
		cmd2.Parameters->AddWithValue("@Booked_Seats", selSeats);
		cmd2.Parameters->AddWithValue("@fare",fare);
		cmd2.ExecuteNonQuery();



		sqlconn.Close();

	}
	void setinfo() {
		try {
			String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connstring);
			sqlconn.Open();


			String^ que = "UPDATE ticket SET passenger_name = @passenger_name WHERE Bus_id = @Bus_id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Bus_id", Id);
			cmd.Parameters->AddWithValue("@passenger_name", passengerName);
			cmd.ExecuteNonQuery();

			sqlconn.Close();

		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
};