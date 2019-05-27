#pragma once
#include "NhanVienHH.h"
class NhanVienHHDB: public NhanVienHH
{
private:
	double base_salary;
public:
	//NhanVienHHDB();
	NhanVienHHDB(double a, double b, double c):NhanVienHH(a,b){
		this -> base_salary = c;
	}
	//setter;

	//getter;

	//methods
	virtual double getSalary()const
	{
		return this->tongdoanhthu * this->mucthuong / 100 + this -> base_salary *0.1;
	}
};

