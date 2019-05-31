#pragma once 
#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
private:
    double a;
    double b;
public:
    Complex();
    Complex(double, double);
    //setters
    void setA(double);
    void setB(double);
    //getters
    double getA()const;
    double getB()const;
    //operators
    Complex operator + (const Complex &)const;
    Complex operator - (const Complex &)const;
    Complex operator * (const Complex &)const;
    Complex operator / (const Complex &)const;
    Complex operator ^ (int)const;
    Complex operator + (double)const;
    Complex operator - (double)const;
    Complex operator * (double)const;
    Complex operator / (double)const;
    //friends
    friend Complex operator + (double, const Complex &);
    friend Complex operator - (double, const Complex &);
    friend Complex operator * (double, const Complex &);
    friend Complex operator / (double, const Complex &);
    friend istream &operator >> (istream &, Complex &);
    friend ostream &operator << (ostream &, const Complex &);
    //methods
    double modul()const;
    Complex operator not()const;
    ~Complex();
};
