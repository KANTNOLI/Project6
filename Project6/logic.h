#pragma once

#include "userData.h"

const string PATHFILE = "UserData.txt";
const string PATH_FILE_PASSWORD = "UserDataPassword.txt";

#include "logic.h"

void addUserData();
string viewUserdata();
void startProgram();
bool passwordCheck(); 
void addPassword();