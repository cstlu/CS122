#pragma once
#include "BanhCuon.h"
#include "BanhCuonChay.h"
#include "BanhCuonMong.h"
#include "BanhCuonThitLon.h"
#include "BanhCuonDacBiet.h"
#include <vector>
#include <iostream>
using namespace std;
class CuaHang
{
private:
	double giabanh;
	double gianhan[4];
	double tongdoanhthu;
	vector<vector<BanhCuon*>> donhangs;
public:
	CuaHang();
	//setter;
	void setGiaVo(double giabanh);
	void setGiaNhan(double, double, double, double);
	//methods
	void showMenu()const;
	void taodonhang();
	//getter
	double gettongdoanhthu()const;
	~CuaHang();
};

