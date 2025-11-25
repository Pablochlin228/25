#include "Helicopter.h"

Helicopter::Helicopter(double m, int y, string n, int cP, double w, double pE, double mA, double wS, int r)
	:Air(m, y, n, cP, w, pE, mA, wS)
{
	rotorBlades = r;
}

void Helicopter::Print()
{
	Air::Print();
	cout << "Rotor blades: " << rotorBlades << endl;
	cout << "------------------------" << endl;
}

void Helicopter::Init()
{
	Air::Init();
	cout << "Enter the rotorBlades: ";
	cin >> rotorBlades;
}
