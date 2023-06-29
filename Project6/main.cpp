#include "logic.h"

int main() {
	setlocale(LC_ALL, "RUS");
	vector<UserData> info; 
	bool addOrView = true; //add - true / view - false
	int input;
	cout << "Вы хотите посмотреть данные или добавить новые? 1 - просмотр | Другие клавиши - добаавление: ";
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