#pragma once
#include "NhanVien.h"
class NhanVienBC: public NhanVien
{
private:
	double fixed_salary;
public:
	NhanVienBC();
	NhanVienBC(string, string, string, double salary);
	//setters
	void setFixedsalary(double salary);
	//getters
	double getFixedsalary()const;
	double getSalary()const
	{
		return this->fixed_salary;
	}
	~NhanVienBC();
};

