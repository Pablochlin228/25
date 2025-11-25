#include "Railway.h"

Railway::Railway(double m, int y, string n, int cP, double w, double pE, int wh, string rT, int c)
	:Ground(m, y, n, cP, w, pE, wh, rT)
{
	carriages = c;
}

void Railway::Print()
{
	Ground::Print();
	cout << "Number of carriages: " << carriages << endl;
	cout << "------------------------" << endl;
}

void Railway::Init()
{
	Ground::Init();
	cout << "Enter the number of carriages: ";
	cin >> carriages;
}
