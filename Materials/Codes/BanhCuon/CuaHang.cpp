#include "CuaHang.h"


CuaHang::CuaHang()
{
	
}
void CuaHang::setGiaVo(double giabanh)
{
	this->giabanh = giabanh;
}
void CuaHang::setGiaNhan(double nhanchay, double nhanmong, double nhanlon, double nhancacuong)
{
	this->gianhan[0] = nhanchay;
	this->gianhan[1] = nhanmong;
	this->gianhan[2] = nhanlon;
	this->gianhan[3] = nhancacuong;
}
void CuaHang::showMenu()const
{
	cout << "0. Banh cuon chay" << endl;
	cout << "1. Banh cuon mong" << endl;
	cout << "2. Banh cuon thit lon" << endl;
	cout << "3. Banh cuon dac biet" << endl;
}
void CuaHang::taodonhang()
{
	vector<BanhCuon*> newdhl;
	double tongtien = 0;
	int chon;
	do
	{
		this->showMenu();
		cout << "-1: thoat.";
		cin >> chon;
		if(chon == -1) break;
		double klbanh;
		cout << "Moi ban nhap khoi luong banh: ";
		cin >> klbanh;
		double klnhan;
		cout << "Moi ban nhap khoi luong nhan: ";
		cin >> klnhan;
		
		switch (chon)
		{
		case 0:
			newdhl.push_back(new BanhCuonChay(this->giabanh, klbanh, this->gianhan[0], klnhan));
			break;
		case 1:
			newdhl.push_back(new BanhCuonMong(this->giabanh, klbanh, this->gianhan[1], klnhan));
			break;
		case 2:
			newdhl.push_back(new BanhCuonThitLon(this->giabanh, klbanh, this->gianhan[2], klnhan));
			break;
		case 3:
			double klnhancc;
			cout << "Moi ban nhap khoi luong nhan ca cuong: ";
			cin >> klnhancc;
			newdhl.push_back(new BanhCuonDacBiet(this->giabanh, klbanh, this->gianhan[2], klnhan, this->gianhan[3], klnhancc));
			break;
		}
		tongtien += newdhl.back()->tinhtien();
	} while (chon != -1);
	cout << "Thanh tien: " << tongtien;
	tongdoanhthu += tongtien;
}
double CuaHang::gettongdoanhthu()const
{
	return this->tongdoanhthu;
}
CuaHang::~CuaHang()
{
}
