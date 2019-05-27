#include "base1.h"
#include "base2.h"
#include <iostream>
using namespace std;
int main()
{
    base1 so1(2,3);
    base2 so2(4,5);

    cout<<so1.sum(so2);
}