#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class Route {
public:
	String^ depLoc;
	String^ arrLoc;
	int stops;
	String^ estTime;
	Route() {
		depLoc = nullptr;
		arrLoc = nullptr;
		estTime = nullptr;
	}

};
