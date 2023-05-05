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
    //int ticketnum;
    //int seatNum;
    //int fare;
    //String^ seatClass;
    //String^ sp;
    //int userId;
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

    bool checkTicket() {
        bool result = false;
        try
        {
		sqlconn.Close();
            // Connect to the database
            SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True");
            connection->Open();

            // Prepare the SQL query
            SqlCommand^ command = gcnew SqlCommand("SELECT * FROM tickets WHERE ticketnum = @num AND userId = @userId", connection);
            command->Parameters->AddWithValue("@num", ticketnum);
            command->Parameters->AddWithValue("@userId", userId);
            SqlDataReader^ reader = command->ExecuteReader();
            if (reader->Read()) {
                result = true;

                // Read the additional data members from the database

                ticketnum = reader->GetInt32(0);
                userId = reader->GetInt32(1);
                fare = reader->GetInt32(2);
                seatNum = reader->GetInt32(3);
                seatClass = reader->GetString(4);
                sp = reader->GetString(5);
            }

            // Close the reader, connection, and return the result
            reader->Close();
            connection->Close();
            return result;
        }
        catch (Exception^ e)
        {
            MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return 0;
        }
        return result;
    }

    bool cancelTicket(int& refund) {
        bool result = false;
        try
        {
            refund = fare * 70 / 100;

            // Connect to the database
            SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True");
            connection->Open();

            // Prepare the SQL query
            SqlCommand^ command = gcnew SqlCommand("DELETE FROM tickets WHERE ticketnum = @ticketnum AND userId = @userId", connection);
            command->Parameters->AddWithValue("@ticketnum", ticketnum);
            command->Parameters->AddWithValue("@userId", userId);

            // Execute the query and check the result
            int rowsAffected = command->ExecuteNonQuery();
            if (rowsAffected > 0) {
                result = true;
            }
	void setinfo() {
		try {
			String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connstring);
			sqlconn.Open();

            //Adding Refund amount into the wallet:
            SqlCommand^ updateWalletCommand = gcnew SqlCommand("UPDATE passengers SET balance = balance + @refund WHERE id = @userId", connection);
            updateWalletCommand->Parameters->AddWithValue("@refund", refund);
            updateWalletCommand->Parameters->AddWithValue("@userId", userId);

            updateWalletCommand->ExecuteNonQuery();
			String^ que = "UPDATE ticket SET passenger_name = @passenger_name WHERE Bus_id = @Bus_id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Bus_id", Id);
			cmd.Parameters->AddWithValue("@passenger_name", passengerName);
			cmd.ExecuteNonQuery();

			sqlconn.Close();
            // Close the connection and return the result
            connection->Close();

            return result;
        }
        catch (Exception^ e)
        {
            MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            refund = 0;
            return false;
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

    }
};
