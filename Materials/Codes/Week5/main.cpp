#include <iostream>
using namespace std;

#include "Date.h"
int main()
{
    Date a;
    a.setDay(5).setMonth(4).setYear(2000);
    cout<< &a.setDay(5);
}