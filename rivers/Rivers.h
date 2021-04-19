#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class River
{
public:
	River();
	River(ifstream &ifs);
	string saxeli, saw, das;
    int sig, n;
	void pr();
};