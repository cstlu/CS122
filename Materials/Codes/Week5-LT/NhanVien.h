#pragma once
#include <string>
using namespace std;
class NhanVien
{
private:
	static int counter;
	int id;
	string fullname;
	string taxcode;
public:
	NhanVien()
	{
		this -> id = counter;
		counter ++;
	}
	//setters
	//method
	virtual double getSalary()const = 0;
};
int NhanVien::counter = 0;

