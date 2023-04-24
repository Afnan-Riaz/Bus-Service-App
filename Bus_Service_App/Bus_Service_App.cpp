#include "pch.h" 
#include <Windows.h>
#include <ShellScalingAPI.h>

#pragma comment(lib, "Shcore.lib")
using namespace System;

#include "AddRemBus.h"
#include "Login.h"
#include "Signup.h"
#include"adminLogin.h"
#include"menu.h"
#include"adminMenu.h"
using namespace System::Windows::Forms;
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

bool adminmenu(Admin^& admin) {
	while (true) {
		Bus_Service_App::adminMenu adMenu(admin);
		adMenu.ShowDialog();
		if (adMenu.logoutAdmin) {
			admin = nullptr;
			return 1;
		}
		else if (adMenu.toMng) {
			Bus_Service_App::AddRemBus mngbus;
			mngbus.ShowDialog();
			if (mngbus.go_back) {
				continue;
			}

		}
		return 0;
	}

}
[STAThread]
int main()
{
	SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Passenger^ user = nullptr;
	Admin^ admin = nullptr;

	while (true) {
		Bus_Service_App::Login loginform;
		loginform.ShowDialog();

		if (loginform.toSignup == true) {
			Bus_Service_App::Signup signform;
			signform.ShowDialog();

			if (signform.toLogin)
				continue;
			else {
				user = signform.user;
			}
		}
		else if (loginform.adminLogin) {
			Bus_Service_App::adminLogin adminlog;
			adminlog.ShowDialog();

			if (adminlog.back)
				continue;
			else {
				admin = adminlog.admin;
			}
		}
		else {
			user = loginform.user;
		}

		if (user != nullptr) { //Means Login is successful.
			Bus_Service_App::menu Menu(user);
			Menu.ShowDialog();
			if (Menu.logout) {
				user = nullptr;
				continue;
			}
		}
		if (admin != nullptr) {
			if (adminmenu(admin)) {
				continue;
			}
		}
		break;
	}

	return 0;
}