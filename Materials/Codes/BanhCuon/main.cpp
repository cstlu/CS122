#include <iostream>
using namespace std;
#include "CuaHang.cpp"
#include <vector>
int main()
{
	CuaHang a;
	a.setGiaVo(10000);
	a.setGiaNhan(15000, 10000, 20000, 30000);
	a.taodonhang();
	a.taodonhang();
	a.taodonhang();
	cout << "Tong doanh thu: " << a.gettongdoanhthu();
}