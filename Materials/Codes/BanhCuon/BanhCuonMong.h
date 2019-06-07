#pragma once
#include "BanhCuon.h"
class BanhCuonMong : public BanhCuon
{
public:
	BanhCuonMong(double giavo);
	BanhCuonMong(double, double, double, double);
	//setters
	virtual void setGiaNhan(double);
	virtual void setKLNhan(double);
	//getters
	virtual double getGiaNhan()const;
	virtual double getKLNhan()const;
	//methods
	virtual double tinhtien()const;
	~BanhCuonMong();
};

