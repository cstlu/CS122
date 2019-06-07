#include "BanhCuonDacBiet.h"

BanhCuonDacBiet::BanhCuonDacBiet(double giavo) :BanhCuonThitLon(giavo)
{
}
BanhCuonDacBiet::BanhCuonDacBiet(double giavo, double klvo, double gianhan, double klnhan, double giacc, double klcc) :
BanhCuonThitLon(giavo, klvo, gianhan, klnhan)
{
	this->setGiaCaCuong(giacc);
	this->setKLCaCuong(klcc);
}
//setters
void BanhCuonDacBiet::setGiaCaCuong(double gia)
{
	this->giacacuong = gia;
}
void BanhCuonDacBiet::setKLCaCuong(double kl)
{
	this->klcacuong = kl;
}
//getters
double BanhCuonDacBiet::getGiaCaCuong()const
{
	return this->giacacuong;
}
double BanhCuonDacBiet::getKLCaCuong()const
{
	return this->klcacuong;
}
//methods
double BanhCuonDacBiet::tinhtien()const
{
	return this->tinhtien() + this->giacacuong* this->klcacuong / 100;
}

BanhCuonDacBiet::~BanhCuonDacBiet()
{
}
