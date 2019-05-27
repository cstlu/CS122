#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(/* args */);
    Date(int, int, int);
    Date &setDay(int);
    Date &setMonth(int);
    Date &setYear(int);

    int getDay()const;
    int getMonth()const;
    int getYear()const;

    friend ostream &operator << (ostream & out, const Date & a);
    ~Date();
};
ostream &operator << (ostream & out, const Date & a)
{
    out<<a.getDay()<<"/"<<a.getMonth()<<"/"<<a.getYear()<<endl;
    return out;
}
Date::Date(/* args */):day(0),month(0),year(0)
{
}
Date &Date::setDay(int d)
{
    this -> day = d;
    return *this;
}
Date &Date::setMonth(int m)
{
    this -> month = m;
    return *this;
}
Date &Date::setYear(int y)
{
    this -> year = y;
    return *this;
}

int Date::getDay()const
{
    return this -> day;
}
int Date::getMonth()const
{
    return this -> month;
}
int Date::getYear()const
{
    return this -> year;
}
Date::Date(int d, int m, int y): day(d),month(m),year(y)
{}
Date::~Date()
{
}

#endif