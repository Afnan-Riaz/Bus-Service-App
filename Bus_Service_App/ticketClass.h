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
	int tot_seats;
	int seat_no;
	String^ seat_class;
	String^ Passenger_name;
	String^ Email;
	String^ Phone;
	 String ^ Id;
	 String^ arrloc;
	 String^ deploc;

public:
	int Ticket::ticketno = 0;
	int changeticket_no(){
		return ++ticketno;
	}
};