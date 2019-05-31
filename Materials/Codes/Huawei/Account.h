#pragma once 
#include <string>
using namespace std;

class Account
{
private:
    string fullname;
    string username;
    string password;
    string email;
    string phonenumber;
    int yearofbirth;
public:
    Account();
    Account(string name,string username,string password,string email,string phone,int year);
    ~Account();
};

Account::Account():
fullname(),username(),password(),email(),phonenumber(),yearofbirth()
{
}
Account::Account(string name,string username,string password,string email,string phone,int year):
fullname(name),username(username),password(password),email(email),phonenumber(phone),yearofbirth(year)
{}
Account::~Account()
{
}
