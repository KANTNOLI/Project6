#include "logic.h"

void startProgram() {
	bool flag = true;

	while (flag) {
		if (flag) {
			flag = passwordCheck();
		}
	}

	bool addOrView = true; //add - true / view - false
	string input;


	while (true) {
		cout << "�������� ������ - ������� 1: ������ ������� ����������" << endl;;
		cin >> input;

		addOrView = input != "1";

		if (addOrView) {
			addUserData();
		}
		else {
			cout << viewUserdata() << endl;
		}

		cout << "\n������ ��������� �����? 1 - ������: ";
		string input2;
		cin >> input2;

		if (input2 != "1") {
			break;
		}
		system("cls");
	}

}

bool passwordCheck() {
	bool flag = true;
	ifstream fin;
	ofstream fout;
	fout.open(PATH_FILE_PASSWORD, ifstream::app);
	fin.open(PATH_FILE_PASSWORD);


	if (!fin.is_open()) {
		cout << "ERROR 0004" << endl;
	}
	else {
		string check;
		fin >> check;
		if (check == "") {
			addPassword();
			flag = false;
		}
		else {
			string password;
			cout << "������� ������: ";
			do
			{
				cin >> password;
			} while (password != check);
			flag = false;
		}
		fin.close();
	}

	system("cls");
	return flag;
}

void addPassword() {

	ofstream fout;

	fout.open(PATH_FILE_PASSWORD);

	if (!fout.is_open()) {
		cout << "ERROR 0001" << endl;
	}
	else {
		string password;
		cout << "������� �������� ������ � ������ (��� ��������): " << endl;
		cin >> password;

		fout << password;

		fout.close();
	}
}

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
		cout << "������� �����: ";
		cin >> mail;
		mail += " ";
		cout << "�������, ������ �������� ������: ";
		cin >> social;
		social += " ";
		cout << "������� ������: ";
		cin >> password;
		password;
		fout << "\n" << mail << social << password;

		fout.close();
	}




}

string viewUserdata() {
	string msg = "";
	ifstream fin;
	fin.open(PATHFILE);
	system("cls");

	if (!fin.is_open()) {
		cout << "ERROR 0001" << endl;
	}
	else {
		while (!fin.eof()) {
			string temp = " ";

			fin >> temp;
			msg += "\n\n�����: " + temp + "\n";
			temp = "";
			fin >> temp;
			msg += "������: " + temp + "\n";
			temp = "";
			fin >> temp;
			msg += "������: " + temp;
			temp = "";
		}
		fin.close();
	}



	msg += "\n\n";
	return msg;
}




