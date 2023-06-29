#pragma once

#include "userData.h"

const string PATHFILE = "UserData.dll";
const string PATH_FILE_PASSWORD = "UserDataPassword.dll";

#include "logic.h"

void addUserData();
string viewUserdata();
void startProgram();
bool passwordCheck(); 
void addPassword();