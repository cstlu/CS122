#pragma once
#include <string>
using namespace std;

class Product
{
private:
    static int counter;
    int ID;
    string name;
    double weight;
    double price;
public:
    Product(/* args */);
    //setters
    //getters
    ~Product();
};

Product::Product(/* args */)
{
}

Product::~Product()
{
}
