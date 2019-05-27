#include <iostream>
using namespace std;
#include "NhanVien.h"
#include "NhanVienBC.h"
#include "NhanVienHH.h"
#include "NhanVienHHDB.h"
int main()
{
    NhanVien *nv[100];
    for (int i = 0 ; i < 10;i++)
    {
        if (i % 3 == 0)
        {
            nv[i] = new NhanVienBC(200);
        }else if (i % 3 == 1)
        {
            nv[i] = new NhanVienHH(2000,10);
        }else
        {
            nv[i] = new NhanVienHHDB(2000,10,200);
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<nv[i]->getSalary()<<endl;
    }
    
    


}