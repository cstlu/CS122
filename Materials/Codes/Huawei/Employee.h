#pragma once
#include "Account.h"
class Employee:public Account
{
private:
    static int counter;
    int ID;
public:
    Employee(string name,string username,string password,string email,string phone,int year);
    int getID()const;
    ~Employee();
};
int Employee::counter =0;
Employee::Employee(string name,string username,string password,string email,string phone,int year):
Account(name,username,password,email,phone,year)
{
    this -> ID = counter;
    counter++;
}
int Employee::getID()const
{
    return this -> ID;
}
Employee::~Employee()
{
}
