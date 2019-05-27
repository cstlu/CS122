#pragma once
#include "NhanVien.h"
class NhanVienHH:public NhanVien
{
protected:
	double tongdoanhthu;
	double mucthuong;//10%
public:
	//NhanVienHH();
	NhanVienHH(double a,double b):NhanVien()
	{
		this -> tongdoanhthu = a;
		this -> mucthuong = b;
	}
	//setters

	//getters


	//method
	virtual double getSalary()const
	{	
		return this->tongdoanhthu * this->mucthuong / 100;
	}
};

