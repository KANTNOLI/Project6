#include "logic.h"

int main() {
	setlocale(LC_ALL, "RUS");
	vector<UserData> info; 
	bool addOrView = true; //add - true / view - false
	int input;




	cout << "Просмотр данных - 1: Другие клавиши ДОБАВЛЕНИЕ";
	cin >> input;

	addOrView = input != 1;

	if (addOrView) {
		addUserData();
		cout << "true";
	}
	else {
		cout << viewUserdata() << endl; 
		cout << "false";
	}

	return 0;
}