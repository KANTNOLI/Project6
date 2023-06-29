#pragma once

#include "userData.h"

const string PATHFILE = "D:\\DataUser.dll";
const string PATH_FILE_PASSWORD = "D:\\PasswordUser.dll";

#include "logic.h"

void addUserData();
string viewUserdata();
void startProgram();
bool passwordCheck(); 
void addPassword();