#include "Air.h"

Air::Air(double m, int y, string n, int cP, double w, double pE, double mA, double wS)
	:Transport(m, y, n, cP, w, pE)
{
	maxAltitude = mA;
	wingspan= wS;
}

void Air::Print()
{
	Transport::Print();
	cout << "Max altitude: " << maxAltitude << endl;
	cout << "Wingspan: " << wingspan << endl;
}

void Air::Init()
{
	Transport::Init();
	cout << "Enter the max altitude: ";
	cin >> maxAltitude;
	cout << "Enter the wingspan: ";
	cin >> wingspan;
}
