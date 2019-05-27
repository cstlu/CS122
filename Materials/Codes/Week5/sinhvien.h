#pragma once 
#include <iostream>
using namespace std;
class sinhvien
{
private:
    static int counter;
    int msv;
public:
    sinhvien();
    static int getcounter(){
        return counter;
    }
    void setcounter(int i)
    {
        counter = i;
    }
    friend ostream &operator << (ostream &out, const sinhvien &a);
    //friend istream &operator >> (istream &in, const sinhvien &a);
    ~sinhvien();
};
ostream &operator << (ostream &out, const sinhvien &a)
{
    out<<"MSV: "<<a.msv<<endl;
    return out;
}
int sinhvien::counter =0;

sinhvien::sinhvien(/* args */)
{
    this -> msv = counter;
    counter ++;
}

sinhvien::~sinhvien()
{
}
