#pragma once
#include "BanhCuon.h"
#include "BanhCuonThitLon.h"
class BanhCuonDacBiet : public BanhCuonThitLon
{
private:
	double klcacuong;
	double giacacuong;
public:
	BanhCuonDacBiet(double);
	BanhCuonDacBiet(double, double, double, double,double, double);
	//setters
	void setGiaCaCuong(double);
	void setKLCaCuong(double);
	//getters
	double getGiaCaCuong()const;
	double getKLCaCuong()const;
	//methods
	virtual double tinhtien()const;
	~BanhCuonDacBiet();
};

