#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class ticket {
public:
    int ticketnum;
    int seatNum;
    int fare;
    String^ seatClass;
    String^ sp;
    int userId;


    void generateTicket() {

    }
    void updateTicketInfo() {

    }

    bool checkTicket() {
        bool result = false;
        try
        {
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

            //Adding Refund amount into the wallet:
            SqlCommand^ updateWalletCommand = gcnew SqlCommand("UPDATE passengers SET balance = balance + @refund WHERE id = @userId", connection);
            updateWalletCommand->Parameters->AddWithValue("@refund", refund);
            updateWalletCommand->Parameters->AddWithValue("@userId", userId);

            updateWalletCommand->ExecuteNonQuery();

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
};
