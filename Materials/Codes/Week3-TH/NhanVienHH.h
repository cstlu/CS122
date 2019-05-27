#pragma once
#include "NhanVien.h"
class NhanVienHH:public NhanVien
{
protected:
	double tongdoanhthu;
	double mucthuong;//10%
public:
	NhanVienHH();
	NhanVienHH(string, string, string, double,double);
	//setters

	//getters


	//method
	double getSalary()const
	{	
		return this->tongdoanhthu * this->mucthuong / 100;
	}
	~NhanVienHH();
};

