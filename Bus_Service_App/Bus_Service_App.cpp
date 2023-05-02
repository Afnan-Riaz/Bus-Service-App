#include "pch.h" 
#include <Windows.h>
#include <ShellScalingAPI.h>

#pragma comment(lib, "Shcore.lib")
using namespace System;
#include "Comp_Feed.h"
#include "AddRemAdm.h"
#include "ModRoute.h"
#include "ModSced.h"
#include "AddRemBus.h"
#include "Login.h"
#include "Signup.h"
#include "adminLogin.h"
#include "menu.h"
#include "adminMenu.h"
#include "payment.h"

using namespace System::Windows::Forms;

bool adminmenu(Admin^& admin) {
	while (true) {
		Bus_Service_App::adminMenu adMenu(admin);
		adMenu.ShowDialog();
		if (adMenu.logoutAdmin) {
			admin = nullptr;
			return 1;
		}
		else if (adMenu.toMng) {
			Bus_Service_App::AddRemBus mngbus(admin);
			mngbus.ShowDialog();
			if (mngbus.go_back) {
				continue;
			}
		}
		else if (adMenu.toSced) {
			Bus_Service_App::ModSced modSd(admin);
			modSd.ShowDialog();
			if (modSd.go_back) {
				continue;
			}
		}
		else if (adMenu.toRoute) {
			Bus_Service_App::ModRoute modRt(admin);
			modRt.ShowDialog();
			if (modRt.go_back) {
				continue;
			}
		}
		else if (adMenu.toUsers) {
			Bus_Service_App::AddRemAdm mnguser(admin);
			mnguser.ShowDialog();
			if (mnguser.go_back) {
				continue;
			}
		}
		else if (adMenu.toFeedback) {
			Bus_Service_App::Comp_Feed feedback(admin);
			feedback.ShowDialog();
			if (feedback.go_back) {
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