#pragma once
#include "NhanVien.h"
class NhanVienBC: public NhanVien
{
private:
	double fixed_salary;
public:
	//NhanVienBC();
	NhanVienBC(double salary):NhanVien()
	{
		this -> fixed_salary = salary;
	}
	//setters
	virtual double getSalary()const
	{
		return this->fixed_salary;
	}
	
};

