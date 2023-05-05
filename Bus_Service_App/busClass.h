#pragma once


#include "sceduleClass.h"
#include"ticketClass.h"
#include "routeClass.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
public ref class BusData {
public:
	String^ id;
	String^ sProv;
	String^ trClass;
	Scedule^ sced;
	Route^ route;
	int tot_Seats;
	int av_Seats;
	BusData() {
		sced = gcnew Scedule();
		route = gcnew Route();
	}
	int countBuses() {	//Returns the total buses in database.
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquery = "SELECT COUNT(*) FROM BusInfo;";
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
	int getCities() {
		int city = 7;
		return city;
	}
	bool insert() {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "INSERT INTO BusInfo (Id, servProv, classTr, totSeat, avSeat) VALUES (@Id, @servProv, @classTr, @totSeat, @avSeat);";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.Parameters->AddWithValue("@servProv", sProv);
			cmd.Parameters->AddWithValue("@classTr", trClass);
			cmd.Parameters->AddWithValue("@totSeat", tot_Seats);
			cmd.Parameters->AddWithValue("@avSeat", av_Seats);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool update() {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "UPDATE BusInfo SET servProv = @servProv, classTr = @classTr, totSeat = @totSeat, avSeat = @avSeat WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.Parameters->AddWithValue("@servProv", sProv);
			cmd.Parameters->AddWithValue("@classTr", trClass);
			cmd.Parameters->AddWithValue("@totSeat", tot_Seats);
			cmd.Parameters->AddWithValue("@avSeat", av_Seats);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool del() {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "DELETE BusInfo WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool search(DataGridView^ grid) {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT * FROM BusInfo WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Bus ID";
			grid->Columns[1]->HeaderText = "Service Provider";
			grid->Columns[2]->HeaderText = "Travel Class";
			grid->Columns[3]->HeaderText = "Total Seats";
			grid->Columns[4]->HeaderText = "Available Seats";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool show(DataGridView^ grid) {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT Id, servProv, classTr, totSeat, avSeat FROM BusInfo;";
			SqlCommand cmd(que, % sqlconn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Bus ID";
			grid->Columns[1]->HeaderText = "Service Provider";
			grid->Columns[2]->HeaderText = "Travel Class";
			grid->Columns[3]->HeaderText = "Total Seats";
			grid->Columns[4]->HeaderText = "Available Seats";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool addSced() {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "UPDATE BusInfo SET depDT=@dep, arrDT=@arr WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.Parameters->AddWithValue("@dep", sced->depTime);
			cmd.Parameters->AddWithValue("@arr", sced->arrTime);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool updSced() {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "UPDATE BusInfo SET depDT=@dep, arrDT=@arr WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.Parameters->AddWithValue("@dep", sced->depTime);
			cmd.Parameters->AddWithValue("@arr", sced->arrTime);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool delSced() {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "UPDATE BusInfo SET depDT=NULL, arrDT=NULL WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool searchSced(DataGridView^ grid) {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT Id, depDT, arrDT FROM BusInfo WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Bus ID";
			grid->Columns[1]->HeaderText = "Departure Time";
			grid->Columns[2]->HeaderText = "Arrival Time";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool showSced(DataGridView^ grid) {
		try{
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT Id, depDT, arrDT FROM BusInfo;";
			SqlCommand cmd(que, % sqlconn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Bus ID";
			grid->Columns[1]->HeaderText = "Departure Time";
			grid->Columns[2]->HeaderText = "Arrival Time";
			return 1;

		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}
	}
	bool addRoute() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "UPDATE BusInfo SET depLoc=@dep, arrLoc=@arr, stop=@stop, estTime=@est WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.Parameters->AddWithValue("@dep", route->depLoc);
			cmd.Parameters->AddWithValue("@arr", route->arrLoc);
			cmd.Parameters->AddWithValue("@stop", route->stops);
			cmd.Parameters->AddWithValue("@est", route->estTime);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool updRoute() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "UPDATE BusInfo SET depLoc=@dep, arrLoc=@arr, stop=@stop, estTime=@est WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.Parameters->AddWithValue("@dep", route->depLoc);
			cmd.Parameters->AddWithValue("@arr", route->arrLoc);
			cmd.Parameters->AddWithValue("@stop", route->stops);
			cmd.Parameters->AddWithValue("@est", route->estTime);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool delRoute() {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "UPDATE BusInfo SET depLoc=NULL, arrLoc=NULL, stop=0, estTime=NULL WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			cmd.ExecuteNonQuery();
			sqlconn.Close();
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}

	}
	bool showRoute(DataGridView^ grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT Id, depLoc, arrLoc, stop, estTime FROM BusInfo;";
			SqlCommand cmd(que, % sqlconn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Bus ID";
			grid->Columns[1]->HeaderText = "Departure Location";
			grid->Columns[2]->HeaderText = "Arrival Location";
			grid->Columns[3]->HeaderText = "No. of Stops";
			grid->Columns[4]->HeaderText = "Est. Journey Time";
			return 1;

		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}
	}
	bool searchRoute(DataGridView^ grid) {
		try {
			String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
			SqlConnection sqlconn(connStr);
			sqlconn.Open();
			String^ que = "SELECT Id, depLoc, arrLoc, stop, estTime FROM BusInfo WHERE Id=@Id;";
			SqlCommand cmd(que, % sqlconn);
			cmd.Parameters->AddWithValue("@Id", id);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% cmd);
			System::Data::DataTable^ dt = gcnew System::Data::DataTable();
			da->Fill(dt);
			grid->DataSource = dt;
			grid->Columns[0]->HeaderText = "Bus ID";
			grid->Columns[1]->HeaderText = "Departure Location";
			grid->Columns[2]->HeaderText = "Arrival Location";
			grid->Columns[3]->HeaderText = "No. of Stops";
			grid->Columns[4]->HeaderText = "Est. Journey Time";
			return 1;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
			return 0;
		}
	}

};