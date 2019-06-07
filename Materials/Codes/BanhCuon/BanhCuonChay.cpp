#include "BanhCuonChay.h"

BanhCuonChay::BanhCuonChay(double giavo) :BanhCuon(giavo)
{
}
BanhCuonChay::BanhCuonChay(double giavo, double klvo, double gianhan, double klnhan):
BanhCuon(giavo,klvo)
{
	this->setKLNhan(klnhan);
	this->setGiaNhan(gianhan);
}
//setters
void BanhCuonChay::setGiaNhan(double gia)
{
	this->gianhan = gia;
}
void BanhCuonChay::setKLNhan(double kl)
{
	this->klnhan = kl;
}
//getters
double BanhCuonChay::getGiaNhan()const
{
	return this->gianhan;
}
double BanhCuonChay::getKLNhan()const
{
	return this->klnhan;
}
//methods
double BanhCuonChay::tinhtien()const
{
	return this->giavo*this->klvo/100 +
		this->gianhan*this->klnhan/100;
}

BanhCuonChay::~BanhCuonChay()
{
}
