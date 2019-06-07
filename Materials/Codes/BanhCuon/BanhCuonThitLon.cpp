#include "BanhCuonThitLon.h"

BanhCuonThitLon::BanhCuonThitLon(double giavo) :BanhCuon(giavo)
{
}

BanhCuonThitLon::BanhCuonThitLon(double giavo, double klvo, double gianhan, double klnhan) :
BanhCuon(giavo, klvo)
{
	this->setKLNhan(klnhan);
	this->setGiaNhan(gianhan);
}
//setters
void BanhCuonThitLon::setGiaNhan(double gia)
{
	this->gianhan = gia;
}
void BanhCuonThitLon::setKLNhan(double kl)
{
	this->klnhan = kl;
}
//getters
double BanhCuonThitLon::getGiaNhan()const
{
	return this->gianhan;
}
double BanhCuonThitLon::getKLNhan()const
{
	return this->klnhan;
}
//methods
double BanhCuonThitLon::tinhtien()const
{
	return this->giavo*this->klvo / 100 +
		this->gianhan*this->klnhan / 100;
}

BanhCuonThitLon::~BanhCuonThitLon()
{
}
