#pragma once
#include <string>
using namespace std;
class App
{
private:
    static int counter;
    int ID;
    string name;
    string description;
    string topic;
    double size;
    double price;
    bool status;
    double discountRate;
public:
    App(string name,string topic,string description,double size,double price);
    //setters
    void setStatus(bool stt);
    void setDiscountRate(double rate);
    //getters
    double getPrice()const;
    double getDiscountRate()const;
    bool getStatus()const;
    int getID()const;
    ~App();
};
int App::counter = 0;
App::App(string name,string topic,string description,double size,double price):
name(name),topic(topic),description(description),size(size),price(price),status(false),discountRate(0)
{
    this -> ID = counter;
    counter++;
}

void App::setStatus(bool stt)
{
    this -> status = stt;
}
void App::setDiscountRate(double rate)
{
    this -> discountRate = rate;
}
double App::getDiscountRate()const
{
    return this -> discountRate;
}
double App::getPrice()const
{
    return this -> price;
}
int App::getID()const
{
    return this -> ID;
}
bool App::getStatus()const
{
    return this -> status;
}
App::~App()
{
}
