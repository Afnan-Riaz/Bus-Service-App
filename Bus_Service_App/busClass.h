#pragma once


#include "sceduleClass.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
public ref class BusData {
public:
	String^ id;
	String^ sProv;
	String^ trClass;
	Scedule^ sced;
	int tot_Seats;
	int av_Seats;
	BusData() {
		sced = gcnew Scedule();
	}
	bool insert() {
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
	bool update() {
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
	bool del() {
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
	bool search(DataGridView^ grid) {
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
	bool show(DataGridView^ grid) {
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
	bool addSced() {
		String^ connStr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Bus;Integrated Security=True";
		SqlConnection sqlconn(connStr);
		sqlconn.Open();
		String^ que = "UPDATE BusInfo SET depDT=@dep, arrDT=@arr WHERE Id=@Id;";
		SqlCommand cmd(que, % sqlconn);
		cmd.Parameters->AddWithValue("@Id", id);
		cmd.Parameters->AddWithValue("@dep",sced->depTime );
		cmd.Parameters->AddWithValue("@arr",sced->arrTime );
		cmd.ExecuteNonQuery();
		sqlconn.Close();
		return 1;
	}
	bool delSced() {
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
	bool updSced() {
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
	bool searchSced(DataGridView^ grid) {
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
	bool showSced(DataGridView^ grid) {
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
};