#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class Card {
public:
	String^username;
	long long int cardnum;
	int cvv;
	DateTime^ Expiry;
	int amount;
	Card(){}
	Card(String^ n,long long int ca, int c, DateTime^ d, int m)
	{
		username = n;
		cardnum = ca;
		cvv = c;
		Expiry = d;
		amount = m;
		adddetails();
	}
	bool adddetails() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();

			String^ querry = "INSERT INTO cards (username, cardnumber, cvv, expiry, amount) VALUES (@username, @cn, @cv, @ex, @a);";
			SqlCommand command(querry, % additionConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@cn", cardnum);
			command.Parameters->AddWithValue("@cv", cvv);
			command.Parameters->AddWithValue("@ex", Expiry);
			command.Parameters->AddWithValue("@a", amount);
			

			command.ExecuteNonQuery();

			return true;
		}
		catch (Exception^) {
			return false;
		}
	
	}
};