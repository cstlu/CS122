#pragma once
#include "BanhCuon.h"
class BanhCuonThitLon : public BanhCuon
{
public:
	BanhCuonThitLon(double);
	BanhCuonThitLon(double, double, double, double);
	//setters
	virtual void setGiaNhan(double);
	virtual void setKLNhan(double);
	//getters
	virtual double getGiaNhan()const;
	virtual double getKLNhan()const;
	//methods
	virtual double tinhtien()const;
	~BanhCuonThitLon();
};

