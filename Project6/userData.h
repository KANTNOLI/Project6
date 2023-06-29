#pragma once
#include "main.h"
class UserData {
private:
	string mail;
	string social;
	string password;
public:
	UserData(string mail, string social, string password) : mail(mail), social(social), password(password) {};
	UserData(string social, string password) : mail("None mail"), social(social), password(password) {};

	string get_mail() { return mail; }
	string get_social() { return social; }
	string get_password() { return password; }
};

