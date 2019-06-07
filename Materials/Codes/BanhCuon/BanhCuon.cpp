#include "BanhCuon.h"
BanhCuon::BanhCuon(double gia)
{
	this->giavo = gia;
}

BanhCuon::BanhCuon(double giavo,double klvo):
giavo(giavo), klvo(klvo)
{
}
void BanhCuon::setGiaVo(double giavo)
{
	this->giavo = giavo;
}
void BanhCuon::setKLVo(double klvo)
{
	this->klvo = klvo;
}
double BanhCuon::getGiaVo()const
{
	return this->giavo;
}
double BanhCuon::getKLVo()const
{
	return this->klvo;
}
BanhCuon::~BanhCuon()
{
}
