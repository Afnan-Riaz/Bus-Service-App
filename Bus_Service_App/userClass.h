#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class User {
public:
	int id;
	String^ username;
	String^ password;
	String^ type;
};

public ref class Passenger : public User {
public:
	String^ name;
	String^ email;
	String^ phone;
	String^ address;
	int balance;

	bool verifyLogin() {
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquerry = "SELECT * FROM passengers WHERE username=@user AND password=@pass;";
			SqlCommand command(sqlquerry, % sqlconn);
			command.Parameters->AddWithValue("@user", username);
			command.Parameters->AddWithValue("@pass", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {	//It means that username and password found

				this->id = reader->GetInt32(0);
				this->username = reader->GetString(1);
				this->password = reader->GetString(2);
				this->name = reader->GetString(3);
				this->email = reader->GetString(4);
				this->phone = reader->GetString(5);
				this->address = reader->GetString(6);
				this->balance = reader->GetInt32(7);
				this->type = "passenger";
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

	bool addbalance(int amount,String^user) {
		try{
		String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
		SqlConnection additionConn(connStr);
		additionConn.Open();

		String^ querry = "SELECT balance FROM passengers WHERE username=@user;";
		SqlCommand command(querry, % additionConn);
		command.Parameters->AddWithValue("@user", user);
		
		int balance = (int)command.ExecuteScalar();
		balance += amount; 
		String^ querry1 = "UPDATE passengers SET balance = @balance WHERE username = @user;";
		SqlCommand command1(querry1, % additionConn);
		command1.Parameters->AddWithValue("@user", user);
		command1.Parameters->AddWithValue("@balance", balance);
	
		command1.ExecuteNonQuery();

		return true;
	}
	catch (Exception^) {
		return false;
	}
	}
	bool addPassenger() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();

			String^ querry = "INSERT INTO passengers (username, password, name, email, phone, address, balance) VALUES (@username, @pass, @name, @email, @phone, @address, @balance);";
			SqlCommand command(querry, % additionConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pass", password);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			int x = 0;
			command.Parameters->AddWithValue("@balance", x);

			command.ExecuteNonQuery();

			return true;
		}
		catch (Exception^ ) {
			return false;
		}
	}
};

public ref class Admin : public User {
public:
	int employeeId;
	String^ name;
	String^ email;

	bool verifyLogin() {
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquerry = "SELECT * FROM admins WHERE username=@user AND password=@pass;";
			SqlCommand command(sqlquerry, % sqlconn);
			command.Parameters->AddWithValue("@user", username);
			command.Parameters->AddWithValue("@pass", password);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				this->id = reader->GetInt32(0);
				this->username = reader->GetString(1);
				this->password = reader->GetString(2);
				this->name = reader->GetString(3);
				this->email = reader->GetString(4);
				this->type = "admin";
				return true;

			}
			else {
				return false;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}
	}
};

