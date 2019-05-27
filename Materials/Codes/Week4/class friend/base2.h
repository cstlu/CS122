#ifndef BASE2_H
#define BASE2_H
#include "base1.h"
class base1;
class base2
{
private:
    int c;
    int d;
public:
    base2();
    base2(int c, int d):c(c),d(d){}
    friend base1;
};
#endif