#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class User
{
public:
    string fname, lname, uname, email, password;
    User();
    User(User *u);
    User(string fname, string lname, string uname, string email, string password);
    ~User();
    User(ifstream& ifs);
};