#pragma once
#include <string>
using namespace std;
class NhanVien
{
private:
	string id;
	string fullname;
	string taxcode;
public:
	NhanVien();
	NhanVien(string, string, string);
	//setters
	void setID(string);
	void setFullname(string);
	void setTax(string);
	//getters
	string getID()const;
	string getFullname()const;
	string getTax()const;
	//method
	double getSalary()const;
	~NhanVien();
};

