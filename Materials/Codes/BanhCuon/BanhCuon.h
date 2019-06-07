#pragma once
class BanhCuon
{
protected:
	double giavo;
	double gianhan;
	double klvo;
	double klnhan;
public:
	BanhCuon(double);
	BanhCuon(double, double);
	//setters
	void setGiaVo(double);
	virtual void setGiaNhan(double)=0;
	void setKLVo(double);
	virtual void setKLNhan(double)= 0;
	//getters
	double getGiaVo()const;
	virtual double getGiaNhan()const=0;
	double getKLVo()const;
	virtual double getKLNhan()const=0;
	//methods
	virtual double tinhtien()const=0;
	~BanhCuon();
};

