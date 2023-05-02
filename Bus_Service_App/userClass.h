#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
public ref class User {
public:
	int id;
	String^ username;
	String^ password;
};

public ref class Passenger : public User {
public:
	String^ name;
	String^ email;
	String^ phone;
	String^ address;
	int balance;
	
	int countUsers() {	//Returns the total users in database.
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquery = "SELECT COUNT(*) FROM passengers;";
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
	int countBalance() {	//Returns the total balance of users in database.
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquery = "SELECT SUM(balance) FROM passengers;";
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
			command.Parameters->AddWithValue("@balance", balance);
			command.ExecuteNonQuery();

			return true;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return false;
		}
	}
	bool delPassenger() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "DELETE passengers WHERE username=@username;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@username",username);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool modPassenger() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();
			String^ querry = "UPDATE passengers SET password=@pass, name=@name, email=@email, phone=@phone, address=@address, balance=@balance WHERE username=@username;";
			SqlCommand command(querry, % additionConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pass", password);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@balance", balance);
			command.ExecuteNonQuery();

			return true;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return false;
		}
	}
	bool searchPassenger(DataGridView^ grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT username,password,name,email,phone,address,balance FROM passengers WHERE username=@username;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@username", username);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Username";
			grid->Columns[1]->HeaderText = "Password";
			grid->Columns[2]->HeaderText = "Name";
			grid->Columns[3]->HeaderText = "Email";
			grid->Columns[4]->HeaderText = "Phone No.";
			grid->Columns[5]->HeaderText = "Address";
			grid->Columns[6]->HeaderText = "Balance";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool showPassenger(DataGridView^ grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT username,password,name,email,phone,address,balance FROM passengers;";
			SqlCommand cmd(que, % sqlconn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Username";
			grid->Columns[1]->HeaderText = "Password";
			grid->Columns[2]->HeaderText = "Name";
			grid->Columns[3]->HeaderText = "Email";
			grid->Columns[4]->HeaderText = "Phone No.";
			grid->Columns[5]->HeaderText = "Address";
			grid->Columns[6]->HeaderText = "Balance";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool makeAdmin() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();
			String^ selQuerry = "SELECT username,password,name,email FROM passengers WHERE username=@username;";
			SqlCommand^ selCommand=gcnew SqlCommand(selQuerry, % additionConn);
			selCommand->Parameters->AddWithValue("@username", username);
			SqlDataReader^ reader = selCommand->ExecuteReader();
			if (reader->Read())
			{
				String^ pas = reader->GetString(1);
				String^ nm = reader->GetString(2);
				String^ mail = reader->GetString(3);

				String^ insQuerry = "INSERT INTO admins (username, password, name, email) VALUES (@username, @pass, @name, @email);";
				SqlCommand^ insCommand = gcnew SqlCommand(insQuerry,% additionConn);
				insCommand->Parameters->AddWithValue("@username", username);
				insCommand->Parameters->AddWithValue("@pass", pas);
				insCommand->Parameters->AddWithValue("@name", nm);
				insCommand->Parameters->AddWithValue("@email", mail);

				String^ delQuerry = "DELETE FROM passengers WHERE username=@username;";
				SqlCommand^ delCommand = gcnew SqlCommand(delQuerry,% additionConn);
				delCommand->Parameters->AddWithValue("@username", username);

				reader->Close(); // Close the reader after retrieving the values

				insCommand->ExecuteNonQuery();
				delCommand->ExecuteNonQuery();
				additionConn.Close();
			}
			else
			{
				reader->Close(); // Close the reader if no row is found
				additionConn.Close();
			}

			return true;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
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
	bool addAdmin() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();
			String^ querry = "INSERT INTO admins (username, password, name, email) VALUES (@username, @pass, @name, @email);";
			SqlCommand command(querry, % additionConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pass", password);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.ExecuteNonQuery();
			return true;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return false;
		}
	}
	bool delAdmin() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "DELETE admins WHERE username=@username;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@username",username);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool modAdmin() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection additionConn(connStr);
			additionConn.Open();
			String^ querry = "UPDATE admins SET password=@pass, name=@name, email=@email WHERE username=@username;";
			SqlCommand command(querry, % additionConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pass", password);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.ExecuteNonQuery();
			return true;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return false;
		}
	}
	bool searchAdmin(DataGridView^ grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT username,password,name,email FROM admins WHERE username=@username;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@username", username);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Username";
			grid->Columns[1]->HeaderText = "Password";
			grid->Columns[2]->HeaderText = "Name";
			grid->Columns[3]->HeaderText = "Email";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool showAdmin(DataGridView^ grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT username,password,name,email FROM admins;";
			SqlCommand cmd(que, % sqlconn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Username";
			grid->Columns[1]->HeaderText = "Password";
			grid->Columns[2]->HeaderText = "Name";
			grid->Columns[3]->HeaderText = "Email";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}


};

