#pragma once
#include "Customer.h"
#include "Employer.h"
#include "Product.h"
#include <vector>

class Order
{
private:
    Employer emp;
    Customer cus;
    string date;
    vector<Product,double> items;
public:
    Order(Employer emp, Customer cus,string date);
    //setters
    bool addnewItem(Product item, double weight);
    //getters
    Employer getEmployer()const;
    Customer getCustomer()const;
    string getDate()const;
    vector<Product,double> getItems()const;
    //methods
    double getPrice()const;
    ~Order();
};
Order::Order()
{
}

Order::~Order()
{
}
