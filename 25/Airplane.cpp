#include "Airplane.h"

Airplane::Airplane(double m, int y, string n, int cP, double w, double pE, double mA, double wS, string wT)
	:Air(m, y, n, cP, w, pE,mA,wS)
{
	wingType = wT;
}

void Airplane::Print()
{
	Air::Print();
	cout << "Wing type: " << wingType << endl;
	cout << "------------------------" << endl;
}

void Airplane::Init()
{
	Air::Init();
	cout << "Enter wingType: ";
	cin >> wingType;
}
