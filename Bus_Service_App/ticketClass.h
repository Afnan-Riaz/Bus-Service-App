#pragma once
#include "busClass.h"
#include "userClass.h"
#include "routeClass.h"
#include "sceduleClass.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class Ticket {
public:
    static int ticketnum;
    float fare;
    String^ seatNum;
    Passenger^ user;
    BusData^ bus;
    DateTime^ date;
    //int ticketnum;
    //int seatNum;
    //int fare;
    //String^ seatClass;
public:
    Ticket() {
        user = gcnew Passenger();
        bus = gcnew BusData();
    }

    int Ticket::ticketnum = 0;
    int changeticket_no() {
        return ++ticketnum;
    }
    void showsearch(DataGridView^ grid) {
        try {
            String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
            SqlConnection sqlconn(connStr);
            sqlconn.Open();
            String^ que = "SELECT Id, servProv, classTr, depDT, estTime FROM BusInfo WHERE arrLoc=@arrLoc AND depLoc=@depLoc AND CONVERT(date, depDT) =@depDT;";
            SqlCommand cmd(que, % sqlconn);
            cmd.Parameters->AddWithValue("@arrLoc", bus->route->arrLoc);
            cmd.Parameters->AddWithValue("@depLoc", bus->route->depLoc);
            cmd.Parameters->AddWithValue("@depDT", date);

            SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
            System::Data::DataTable^ dt = gcnew System::Data::DataTable();
            da->Fill(dt);
            grid->DataSource = dt;
            grid->Columns[0]->HeaderText = "Bus ID";
            grid->Columns[1]->HeaderText = "Service Provider";
            grid->Columns[2]->HeaderText = "Travel Class";
            //grid->Columns[3]->HeaderText = "Arrival Time";
            grid->Columns[3]->HeaderText = "Departure Time";
            grid->Columns[4]->HeaderText = "Estimate Journey Time";

        }
        catch (Exception^ e) {
            MessageBox::Show("Database Connection Error", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
    }

    int totalTickets() {
        try {
            String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
            SqlConnection sqlconn(connString);
            sqlconn.Open();

            String^ sqlquery = "SELECT COUNT(*) FROM tickets;";
            SqlCommand command(sqlquery, % sqlconn);
            int count = (int)command.ExecuteScalar();

            sqlconn.Close();

            return count;
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
            return -1;
        }
    }

    void setbookedseats(String^ s, String^ selSeats) {
        try {
            String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
            SqlConnection sqlconn(connstring);
            sqlconn.Open();
            String^ que = "UPDATE BusInfo SET Booked_Seats = @Booked_Seats WHERE Id = @id;";
            SqlCommand cmd(que, % sqlconn);
            cmd.Parameters->AddWithValue("@id", bus->id);
            cmd.Parameters->AddWithValue("@Booked_Seats", s);
            cmd.ExecuteNonQuery();

            String^ que3 = "SELECT arrLoc,depLoc,classTr,servProv FROM BusInfo WHERE Id=@Id;";
            SqlCommand cmd3(que3, % sqlconn);
            cmd3.Parameters->AddWithValue("@Id", bus->id);
            SqlDataReader^ reader3 = cmd3.ExecuteReader();
            if (reader3->Read()) {
                bus->route->arrLoc = reader3["arrLoc"]->ToString();
                bus->route->depLoc = reader3["depLoc"]->ToString();
                bus->trClass = reader3["classTr"]->ToString();
                bus->sProv = reader3["servProv"]->ToString();
                /* ar = reader3["arrDT"]->ToString();
                 dep = reader3["depDT"]->ToString();*/
            }
            reader3->Close();
            /* bus->sced->arrTime = DateTime::Parse(ar);
             bus->sced->depTime = DateTime::Parse(dep);*/

             // to add to ticket table
             //String^ que2 = "INSERT INTO ticket (passenger_name,Bus_id,Booked_Seats,fare,arrLoc,depLoc,travelClass,arrtime,deptime) VALUES (@name,@busId,@Booked_Seats,@fare,@arrLoc,@depLoc,@classTr,@arrDT,@depDT);";
             //SqlCommand cmd2(que2, % sqlconn);
             //cmd2.Parameters->AddWithValue("@name", passengerName);
             //cmd2.Parameters->AddWithValue("@busId", bus->id);
             //cmd2.Parameters->AddWithValue("@Booked_Seats", selSeats);
             //cmd2.Parameters->AddWithValue("@fare", fare);
             //cmd2.Parameters->AddWithValue("@totSeat", bus->tot_Seats);
             //cmd2.Parameters->AddWithValue("@arrLoc", bus->route->arrLoc);
             //cmd2.Parameters->AddWithValue("@depLoc", bus->route->depLoc);
             //cmd2.Parameters->AddWithValue("@classTr", bus->trClass);
             //cmd2.Parameters->AddWithValue("@arrDT", bus->sced->arrTime);
             //cmd2.Parameters->AddWithValue("@depDT", bus->sced->depTime);

             //cmd2.ExecuteNonQuery();

            String^ que2 = "INSERT INTO tickets (ticketnum,passenger_name,Bus_id,Booked_Seats,fare,arrLoc,depLoc,class,provider) VALUES (@ticketnum,@name,@busId,@Booked_Seats,@fare,@arr,@dep,@cls,@pro);";
            SqlCommand cmd2(que2, % sqlconn);
            cmd2.Parameters->AddWithValue("@ticketnum", ticketnum);
            cmd2.Parameters->AddWithValue("@name", user->username);
            cmd2.Parameters->AddWithValue("@busId", bus->id);
            cmd2.Parameters->AddWithValue("@Booked_Seats", selSeats);
            cmd2.Parameters->AddWithValue("@fare", fare);
            cmd2.Parameters->AddWithValue("@arr", bus->route->arrLoc);
            cmd2.Parameters->AddWithValue("@dep", bus->route->depLoc);
            cmd2.Parameters->AddWithValue("@cls", bus->trClass);
            cmd2.Parameters->AddWithValue("@pro", bus->sProv);
            cmd2.ExecuteNonQuery();
            sqlconn.Close();

            seatNum = selSeats;

        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    bool checkTicket() {
        bool result = false;
        try
        {
            // Connect to the database
            SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True");
            connection->Open();

            // Prepare the SQL query
            SqlCommand^ command = gcnew SqlCommand("SELECT * FROM tickets WHERE ticketnum = @num AND passenger_name = @user", connection);
            command->Parameters->AddWithValue("@num", ticketnum);
            command->Parameters->AddWithValue("@user", user->username);
            SqlDataReader^ reader = command->ExecuteReader();
            if (reader->Read()) {
                result = true;

                // Read the additional data members from the database

                ticketnum = reader->GetInt32(0);
                user->username = reader->GetString(1);
                seatNum = reader->GetString(2);
                fare = reader->GetInt32(3);
                bus->trClass = reader->GetString(4);
                bus->sProv = reader->GetString(5);
                bus->id = reader->GetString(6);
                bus->route->arrLoc = reader->GetString(7);
                bus->route->depLoc = reader->GetString(8);
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
            SqlCommand^ command = gcnew SqlCommand("DELETE FROM tickets WHERE ticketnum = @ticketnum AND passenger_name = @user", connection);
            command->Parameters->AddWithValue("@ticketnum", ticketnum);
            command->Parameters->AddWithValue("@user", user->username);

            //Adding Refund amount into the wallet:
            SqlCommand^ updateWalletCommand = gcnew SqlCommand("UPDATE passengers SET balance = balance + @refund WHERE id = @id", connection);
            updateWalletCommand->Parameters->AddWithValue("@refund", refund);
            updateWalletCommand->Parameters->AddWithValue("@id", user->id);

            updateWalletCommand->ExecuteNonQuery();

            // Execute the query and check the result
            int rowsAffected = command->ExecuteNonQuery();
            if (rowsAffected > 0) {
                result = true;
            }
            // Close the connection and return the result
            connection->Close();

            return result;
        }
        catch (Exception^ e)
        {
            MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            refund = 0;
            return false;
        }
    }

    void deleteSeats(int& refund) {
        try {
            String^ ticketarr;
            String^ busarr;
            String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
            SqlConnection sqlconn(connstring);
            sqlconn.Open();
            String^ que3 = "SELECT Booked_Seats FROM tickets WHERE ticketnum = @num";
            SqlCommand cmd3(que3, % sqlconn);
            cmd3.Parameters->AddWithValue("@num", ticketnum);
            SqlDataReader^ reader3 = cmd3.ExecuteReader();
            if (reader3->Read()) {
                ticketarr = reader3["Booked_Seats"]->ToString();
            }
            reader3->Close();
            String^ que = "SELECT Booked_Seats FROM BusInfo WHERE Id=@Id;";
            SqlCommand cmd(que, % sqlconn);
            cmd.Parameters->AddWithValue("@Id", bus->id);
            SqlDataReader^ reader = cmd.ExecuteReader();
            if (reader->Read()) {
                busarr = reader["Booked_Seats"]->ToString();
            }
            reader->Close();
            array<String^>^ split1 = ticketarr->Split(',');
            array<String^>^ split2 = busarr->Split(',');
            array<int>^ tickets = gcnew array<int>(split1->Length);
            array<int>^ busSeats = gcnew array<int>(split2->Length);

            for (int i = 0; i < split1->Length; i++) {
                tickets[i] = Int32::Parse(split1[i]);
            }
            for (int i = 0; i < split2->Length; i++) {
                busSeats[i] = Int32::Parse(split2[i]);
            }

            array<int>^ remainingSeats = gcnew array<int>(busSeats->Length);
            int index = 0;

            for (int i = 0; i < busSeats->Length; i++) {
                bool found = false;
                for (int j = 0; j < tickets->Length; j++) {
                    if (busSeats[i] == tickets[j]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    remainingSeats[index++] = busSeats[i];
                }
            }

            String^ result = "";
            for (int i = 0; i < index; i++) {
                result += remainingSeats[i].ToString();
                if (i != index - 1)
                    result += ",";
            }
            String^ que4 = "UPDATE BusInfo SET Booked_Seats = @BookedSeats WHERE Id = @Id;";
            SqlCommand cmd4(que4, % sqlconn);
            cmd4.Parameters->AddWithValue("@BookedSeats", result);
            cmd4.Parameters->AddWithValue("@Id", bus->id);
            cmd4.ExecuteNonQuery();
        }

        catch (Exception^ e) {
            MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        this->cancelTicket(refund);
    }

    void setinfo() {
        try {
            String^ connstring = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
            SqlConnection sqlconn(connstring);
            sqlconn.Open();

           
            String^ que = "UPDATE ticket SET passenger_name = @passenger_name WHERE Bus_id = @Bus_id;";
            SqlCommand cmd(que, % sqlconn);
            cmd.Parameters->AddWithValue("@Bus_id", bus->id);
            cmd.Parameters->AddWithValue("@passenger_name", user->username);
            cmd.ExecuteNonQuery();

            sqlconn.Close();
         
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

    }
};