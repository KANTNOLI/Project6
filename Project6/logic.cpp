#include "logic.h"

//void checkEmptyFile(vector<UserData> info) {
//	ifstream fin;
//
//
//	fin.open(pathFile, ifstream::app);
//	if (!fin.is_open()) {
//		cout << "ERROR 0001" << endl;
//	}
//	else {
//		bool empty = false;
//		string tempCheck;
//		fin >> tempCheck;
//		if (tempCheck == "") {
//			addUserData(empty = false, info);
//		}
//		else {
//			addUserData(empty = true, info);
//		}
//
//		fin.close();
//	}
//
//
//}

void addUserData() {
	ofstream fout;
	string mail;
	string social;
	string password;

	fout.open(PATHFILE, ifstream::app);
	if (!fout.is_open()) {
		cout << "ERROR 0002" << endl;
	}
	else {
			cout << "Введите почту: ";
			cin >> mail;
			mail += " ";
			cout << "Введите, откуда сохранен пароль: ";
			cin >> social;
			social += " ";
			cout << "Введите пароль: ";
			cin >> password;
			password;
			fout << "\n" << mail << social << password;

		fout.close(); 
	}




}

//void createArrayUserData(vector<UserData> info) {
//	ifstream fin;
//
//	fin.open(pathFile, ifstream::app);
//	if (!fin.is_open()) {
//		cout << "ERROR 0003" << endl;
//	}
//	else {
//
//		while (!fin.eof()) {
//			string mail;
//			string social;
//			string password;
//			fin >> mail;
//			fin >> social;
//			fin >> password;
//			UserData current(mail, social, password);
//			info.push_back(current);
//		}
//
//		fin.close();
//	}
//}

//void createNewFile(vector<UserData> info) {
//	ofstream fout;
//
//	fout.open(pathFile);
//	if (!fout.is_open()) {
//		cout << "ERROR 0004" << endl;
//	}
//	else {
//
//		for (auto i = 0; i < info.size(); i++) {
//			fout << info[i].get_mail();
//			fout << info[i].get_social();
//			fout << info[i].get_password();
//			fout << "\n";
//		}
//
//		fout.close();
//	}
//}


string viewUserdata() {
	string msg = "";
	ifstream fin;
	fin.open(PATHFILE);
	system("cls");
	while (!fin.eof()) {
		string temp = " ";
		
			fin >> temp;
			msg += "\n\nПочта: " + temp + "\n"; 
			temp = ""; 
			fin >> temp; 
			msg += "Откуда: " + temp + "\n"; 
			temp = ""; 
			fin >> temp; 
			msg += "Пароль: " + temp;
			temp = "";
	}

	msg += "\n\n";
	return msg;
}




