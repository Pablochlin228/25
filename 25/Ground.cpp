#include "Ground.h"

Ground::Ground(double m, int y, string n, int cP, double w, double pE, int wh,string rT) :Transport(m, y, n, cP, w, pE)
{
	wheels = wh;
	roadType = rT;
}

void Ground::Print()
{
	Transport::Print();
	cout << "Number of wheels: " << wheels << endl;
	cout << "Road type: " << roadType << endl;
}

void Ground::Init()
{
	Transport::Init();
	cout << "Enter the number of wheels: ";
	cin >> wheels;
	cout << "Enter the road type: ";
	cin >> roadType;
}
