#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class Feedback {
public:
	String^ username;
	String^ Q1;
	String^ Q2;
	String^ Q3;
	String^ Q4;
	String^ FB;
	String^ Comp;


	Feedback() {
	}
	Feedback(String^ u) {
		username = u;
	}
	Feedback(String^ u, String^ q1, String^ q2, String^ q3, String^ q4, String^ f)
	{
		username = u;
		Q1 = q1; Q2 = q2; Q3 = q3; Q4 = q4;
		FB = f;
	}
	bool setComplaint(String^ c)
	{
		Comp = c;
		if (addcomplaint())
			return true;
		else return false;
	}
	int countFeedback() {
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquery = "SELECT COUNT(*) FROM feedback;";
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
	bool addcomplaint() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();

			String^ querry = "INSERT INTO feedback (username, complaint) VALUES (@username, @complaint);";
			SqlCommand command(querry, % additionConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@complaint", Comp);

			command.ExecuteNonQuery();

			return true;
		}
		catch (Exception^e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
	}
	bool getData(String^ user) {
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquerry = "SELECT * FROM feedback WHERE username=@user;";
			SqlCommand command(sqlquerry, % sqlconn);
			command.Parameters->AddWithValue("@user", user);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {	//It means that username and password found
				this->username = reader->GetString(0);
				this->Q1 = reader->GetString(1);
				this->Q2 = reader->GetString(2);
				this->Q3 = reader->GetString(3);
				this->Q4 = reader->GetString(4);
				this->FB = reader->IsDBNull(5) ? String::Empty : reader->GetString(5);
				this->Comp = reader->IsDBNull(6) ? String::Empty : reader->GetString(6);
				return true;
			}
			else {
				return false;	//Incorrect username and password
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool showFeedback(DataGridView^ grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT username FROM feedback;";
			SqlCommand cmd(que, % sqlconn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Username";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool delfeedback() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "DELETE feedback WHERE username=@username;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@username", username);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool addfeedback() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();

			String^ querry = "INSERT INTO feedback (username, experience, needs, pricing, assistance, feedback) VALUES (@username, @ex, @needs, @price, @assi, @feed);";
			SqlCommand command(querry, % additionConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@ex", Q1);
			command.Parameters->AddWithValue("@needs", Q2);
			command.Parameters->AddWithValue("@price", Q3);
			command.Parameters->AddWithValue("@assi", Q4);
			command.Parameters->AddWithValue("@feed", FB);

			command.ExecuteNonQuery();

			return true;
		}
		catch (Exception^) {
			return false;
		}
	}
};
