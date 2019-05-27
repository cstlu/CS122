#include "NhanVien.h"


NhanVien::NhanVien()
{
}

NhanVien::NhanVien(string id, string name, string tax) :id(id), fullname(name), taxcode(tax)
{}
//setters
void NhanVien::setID(string id)
{
	this->id = id;
}
void NhanVien::setFullname(string name)
{
	this->fullname = name;
}
void NhanVien::setTax(string tax)
{
	this->taxcode = tax;
}
//getters
string NhanVien::getID()const
{
	return this->id;
}
string NhanVien::getFullname()const
{
	return this->fullname;
}
string NhanVien::getTax()const
{
	return this->taxcode;
}
//method
double NhanVien::getSalary()const
{
	return 0;
}
NhanVien::~NhanVien()
{

}