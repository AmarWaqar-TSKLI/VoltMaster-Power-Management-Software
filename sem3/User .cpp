#include"User .h"

User::User(const char* username, const char* password)
{
	this->username = username;
	this->password = password;
	appliances = nullptr;
	
	this->ID = 1;
	//this->peakHours = peakHours;

}
