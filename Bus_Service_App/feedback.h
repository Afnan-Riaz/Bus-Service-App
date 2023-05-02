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
