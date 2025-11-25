#include "Boat.h"

Boat::Boat(double m, int y, string n, int cP, double w, double pE, double wL, int cS, string b)
	:Water(m, y, n, cP, w, pE, wL, cS)
{
	boatType = b;
}

void Boat::Print()
{
	Water::Print();
	cout << "Boat type: " << boatType << endl;
	cout << "------------------------" << endl;
}

void Boat::Init()
{
	Water::Init();
	cout << "Enter boat type: ";
	cin >> boatType;
}
