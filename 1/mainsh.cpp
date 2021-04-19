#include "User.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
void Userno()
{
    cout << "EMAIL ALREADY ATTACHED TO AN ACCOUNT" << endl;
}
void useryup()
{
    cout << "ACCOUNT CREATED SUCCESSFULLY" << endl;
}
int main()
{
    vector<User> vec;
    ifstream ifs("users.txt");
    User u;
    while (ifs >> u.fname >> u.lname >> u.uname >> u.email >> u.password)
    {
        vec.push_back(u);
    }
    cout << "ENTER FIRST NAME,LAST NAME, USERNAME, EMAIL AND PASSWORD: " << endl;
    cin >> u.fname >> u.lname >> u.uname >> u.email >> u.password;
    ofstream ofs("users.txt", fstream::app);
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i].email == u.email)
        {
            Userno();
            break;
        }
        else if (i == vec.size() - 1)
        {
            ofs << endl;
            ofs << u.fname;
            ofs << " " << u.lname;
            ofs << " " << u.uname;
            ofs << " " << u.email;
            ofs << " " << u.password;
            useryup();
        }
    }

    return 0;
}