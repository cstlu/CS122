#pragma once
#include "Account.h"
class Developer:public Account
{
private:
    static int counter;
    int ID;
public:
    Developer(string name,string username,string password,string email,string phone,int year);
    //getters
    int getID()const;
    ~Developer();
};
int Developer::counter = 0;
Developer::Developer(string name,string username,string password,string email,string phone,int year):
Account(name,username,password,email,phone,year)
{
    this -> ID = counter;
    counter ++;
}
int Developer::getID()const
{
    return this -> ID;
}
Developer::~Developer()
{
}
