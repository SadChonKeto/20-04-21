#include "Rivers.h"
#include<iostream>
using namespace std;
River::River() 
{
	cout << "created" << endl;
}
River::River(ifstream& ifs) 
{
	ifs >> saxeli >> sig >> saw >> das >> n;
}
void River::pr() 
{
	cout << saxeli << "\t" << sig << " \t" << saw << "\t " << das << " \t" << n << endl;
}