#include "User.h"
using namespace std;
User::User()
{
    cout << "object created" << endl;
}
User::User(User *u)
{
    cout << "deep copy" << endl;
    this->fname = u->fname;
    this->lname = u->lname;
    this->uname = u->uname;
    this->email = u->email;
    this->password = u->password;
}
User::User(string fname, string lname, string uname, string email, string password)
{
    this->fname = fname;
    this->lname = lname;
    this->uname = uname;
    this->email = email;
    this->password = password;
}
User::~User()
{
    cout << "object removed" << endl;
}
User::User(ifstream& ifs)
{
    ifs>>fname>>lname>>uname>>email>>password;
}
