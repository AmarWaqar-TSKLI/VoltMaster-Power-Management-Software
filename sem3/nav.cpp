#include "nav.h"
#include "HomeForm.h"
#include "scheduleGenerationForm.h"
#include "ApplianceFrom.h"
#include "historyForm.h"
#include "Settings.h"
#include "Login.h"

namespace sem3 {
		nav::nav(int userID) {
			home = gcnew HomeForm(userID);
			schedules = gcnew scheduleGenerationForm(userID);
			appliances = gcnew ApplianceFrom(userID);
			history = gcnew historyForm(userID);
			settings = gcnew Settings(userID);
		}
		void  nav::initialize(int userID,Login^ loginForm) {
			if (instance == nullptr) {
				instance = gcnew nav(userID);
				instance->login = loginForm;
			}
		}

		nav^ nav::getInstance() {
			return instance;
		}

		void nav::showHome() {
			home->Show();
			schedules->Hide();
			appliances->Hide();
			history->Hide();
			settings->Hide();
		}

		void nav::showSchedules() {
			home->Hide();
			schedules->Show();
			appliances->Hide();
			history->Hide();
			settings->Hide();
		}

		void nav::showAppliances() {
			home->Hide();
			schedules->Hide();
			appliances->Show();
			history->Hide();
			settings->Hide();
		}

		void nav::showHistory() {
			home->Hide();
			schedules->Hide();
			appliances->Hide();
			history->Show();
			settings->Hide();
		}

		void nav::showSettings() {
			home->Hide();
			schedules->Hide();
			appliances->Hide();
			history->Hide();
			settings->Show();
		}

		void nav::showLogin() {
			home->Hide();
			schedules->Hide();
			appliances->Hide();
			history->Hide();
			settings->Hide();
			login->Show();
		}
}
