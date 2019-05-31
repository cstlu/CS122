#pragma once
#include "Account.h"
class User:public Account
{
private:
    static int counter;
    int ID;
public:
    User(string name,string username,string password,string email,string phone,int year);
    //getters
    int getID()const;
    ~User();
};
int User::counter = 0;
User::User(string name,string username,string password,string email,string phone,int year):
Account(name,username,password,email,phone,year)
{
    this -> ID = counter;
    counter++;
}
int User::getID()const
{
    return this -> ID;
}
User::~User()
{
}
