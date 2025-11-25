#include "Tanker.h"

Tanker::Tanker(double m, int y, string n, int cP, double w, double pE, double wL, int cS, string cT)
	:Water(m, y, n, cP, w, pE,wL,cS)
{
	cargoType = cT;
}

void Tanker::Print()
{
	Water::Print();
	cout << "Cargo type: " << cargoType << endl;
	cout << "------------------------" << endl;
}

void Tanker::Init()
{
	Water::Init();
	cout << "Enter cargo type: ";
	cin >> cargoType;
}
