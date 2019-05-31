#pragma once
#include "Human.h"

class Employer : public Human
{
private:
    static int counter;
    int ID;
public:
    Employer();
    //setters
    //getters
    ~Employer();
};

Employer::Employer(/* args */)
{
}

Employer::~Employer()
{
}
