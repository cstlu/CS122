#pragma once
#include "Employee.h"
#include "User.h"
#include "Developer.h"
#include "App.h"
#include <map>
#include <vector>
#include <set>
#include <string>
#include <iostream>
using namespace std;
class Appstore
{
private:
    vector<App> apps;
    vector<User> users;
    vector<Developer> devs;
    vector<Employee> emps;
    map<int,vector<int> > uploads;//_1: devsID,_2: appID;
    map<int,set<int> > downloads;//_1: appID, _2: userID
public:
    Appstore();
    //setters
    bool addUser(string name,string username,string password,string email,string phone,int year);
    bool addEmployee(string name,string username,string password,string email,string phone,int year);
    bool addDeveloper(string name,string username,string password,string email,string phone,int year);
    bool verify(int empID, int appID,double discount);
    bool addApp(int devID,string name,string topic,string description,double size,double price);
    bool addnewdownload(int appID, int userID);
    //getter
    void gettotalRevenuofDeveloper()const;
    void gettotalRevenuofCompany()const;
    ~Appstore();
};

Appstore::Appstore()
{
}
bool Appstore::addUser(string name,string username,string password,string email,string phone,int year)
{
    this -> users.push_back(User(name,username,password,email,phone,year));
    return true;
}
bool Appstore::addEmployee(string name,string username,string password,string email,string phone,int year)
{
    this -> emps.push_back(Employee(name,username,password,email,phone,year));
    return true;
}
bool Appstore::addDeveloper(string name,string username,string password,string email,string phone,int year)
{
    this -> devs.push_back(Developer(name,username,password,email,phone,year));
    return true;
}
bool Appstore::addApp(int devID,string name,string topic,string description,double size,double price)
{
    this -> apps.push_back(App(name,topic,description,size,price));
    this -> uploads[devID].push_back(this -> apps.size() - 1);
    return true;
}
bool Appstore::verify(int empID, int appID,double discount)
{
    this -> apps[appID].setStatus(true);
    this -> apps[appID].setDiscountRate(discount);
    return true;
}
bool Appstore::addnewdownload(int appID, int userID)
{
    if(this->apps[appID].getStatus())
    {
        this -> downloads[appID].insert(userID);
        return true;
    }
    return false;
}
void Appstore::gettotalRevenuofDeveloper()const
{
    for (int i = 0; i < this->devs.size(); i++)
    {
        vector<int> ownapps = this -> uploads.at(i);
        double total=0;
        for (int j = 0; j < ownapps.size(); j++)
        {
            total += this -> downloads.at(ownapps[j]).size()*
            this -> apps.at(ownapps[j]).getPrice()*
            (1-this -> apps.at(ownapps[j]).getDiscountRate());
        }
        cout<<"DevID: "<<i<<" has "<<total<<endl;
    }
    
}
void Appstore::gettotalRevenuofCompany()const
{
    double total = 0;
    for (int i = 0; i < apps.size(); i++)
    {
        if (this -> downloads.at(i).size() != 0 )
            total += this -> downloads.at(i).size() * this -> apps.at(i).getDiscountRate()* this -> apps.at(i).getPrice();
    }
    cout<<total<<endl;
    
}
Appstore::~Appstore()
{
}
