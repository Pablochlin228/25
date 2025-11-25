#include "Airship.h"

Airship::Airship(double m, int y, string n, int cP, double w, double pE, double mA, double wS, double gV)
	:Air(m, y, n, cP, w, pE, mA, wS)
{
	gasVolume = gV;
}

void Airship::Print()
{
	Air::Print();
	cout << "Gas volume: " << gasVolume << endl;
	cout << "------------------------" << endl;
}

void Airship::Init()
{
	Air::Init();
	cout << "Enter the gas volume: ";
	cin >> gasVolume;
}
