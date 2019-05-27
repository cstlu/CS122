#ifndef BASE1_H
#define BASE1_H
#include "base2.h"
class base2;
class base1
{
private:
    int a;
    int b;
public:
    base1(/* args */);
    base1(int a,int b):a(a),b(b){}
    int sum(base2 bien)
    {
        return a + bien.c + b + bien.d;
    }
};
#endif