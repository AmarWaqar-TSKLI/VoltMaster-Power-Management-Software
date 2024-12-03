#pragma once

namespace sem3 {
	ref class HomeForm;
	ref class scheduleGenerationForm;
	ref class ApplianceFrom;
	ref class historyForm;
	ref class Settings;
	ref class Login;

	public ref class nav {
	private:
		static nav^ instance = nullptr;
		Login^ login;
		HomeForm^ home;
		scheduleGenerationForm^ schedules;
		ApplianceFrom^ appliances;
		historyForm^ history;
		Settings^ settings;
		nav(int userID);
	public:
		static void initialize(int userID, Login^ loginForm);
		static nav^ getInstance();
		void showHome();
		void showSchedules();
		void showAppliances();
		void showHistory();
		void showSettings();
		void showLogin();
	};
}
