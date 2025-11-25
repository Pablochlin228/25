#include "Steamship.h"

Steamship::Steamship(double m, int y, string n, int cP, double w, double pE, double wL, int cS, double fC)
	:Water(m, y, n, cP, w, pE, wL, cS)
{
	fuelCapacity = fC;
}

void Steamship::Print()
{
	Water::Print();
	cout << "Fuel capacity: " << fuelCapacity << endl;
	cout << "------------------------" << endl;
}

void Steamship::Init()
{
	Water::Init();
	cout << "Enter the fuel capacity: ";
	cin >> fuelCapacity;
}
