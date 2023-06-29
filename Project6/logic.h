#pragma once

#include "userData.h"

const string PATHFILE = "C:\Program Files (x86)\Microsoft\DataUser.dll";
const string PATH_FILE_PASSWORD = "C:\Program Files (x86)\Microsoft\passwordUser.dll";

#include "logic.h"

void addUserData();
string viewUserdata();
void startProgram();
bool passwordCheck(); 
void addPassword();