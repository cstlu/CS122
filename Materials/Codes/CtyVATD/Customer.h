#pragma once
#include "Human.h"
class Customer:public Human
{
private:
    static int counter;
    int ID;
    double bonus;
public:
    Customer();
    //setters
    //getters;
    //methods
    double discount()const;
    ~Customer();
};

Customer::Customer(/* args */)
{
}

Customer::~Customer()
{
}
