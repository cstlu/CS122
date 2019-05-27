#include <iostream>
using namespace std;
#include "Vector.h"
#include "Matrix.h"
 
Vector multiply(const Matrix &a, const Vector &b)
{
    if (a.n != b.n)
    {
        cout << "Ko nhan duoc!\n";
        return Vector(0,0);
    }
    Vector res(a.m, 0);
    res.n = a.m;
    for (int i = 0; i < a.m; i++)
    {
        res.coords[i] = 0;
        for (int j = 0; j < b.n; j++)
            res.coords[i] = res.coords[i] + b.coords[j] * a.elements[i][j];
    }
    return res;
}
 
 
int main()
{
    return 0;
}