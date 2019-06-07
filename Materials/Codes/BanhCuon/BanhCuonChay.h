#pragma once
#include "BanhCuon.h"
class BanhCuonChay : public BanhCuon
{
public:
	BanhCuonChay(double);
	BanhCuonChay(double, double, double, double);
	//setters
	virtual void setGiaNhan(double);
	virtual void setKLNhan(double);
	//getters
	virtual double getGiaNhan()const;
	virtual double getKLNhan()const;
	//methods
	virtual double tinhtien()const;
	~BanhCuonChay();
};

