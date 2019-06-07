#include "BanhCuonMong.h"

BanhCuonMong::BanhCuonMong(double giavo) :BanhCuon(giavo)
{
}
BanhCuonMong::BanhCuonMong(double giavo, double klvo, double gianhan, double klnhan) :
BanhCuon(giavo, klvo)
{
	this->setKLNhan(klnhan);
	this->setGiaNhan(gianhan);
}
//setters
void BanhCuonMong::setGiaNhan(double gia)
{
	this->gianhan = gia;
}
void BanhCuonMong::setKLNhan(double kl)
{
	this->klnhan = kl;
}
//getters
double BanhCuonMong::getGiaNhan()const
{
	return this->gianhan;
}
double BanhCuonMong::getKLNhan()const
{
	return this->klnhan;
}
//methods
double BanhCuonMong::tinhtien()const
{
	return this->giavo*this->klvo / 100 +
		this->gianhan*this->klnhan / 100;
}

BanhCuonMong::~BanhCuonMong()
{
}
