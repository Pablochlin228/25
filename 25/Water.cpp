#include "Water.h"

Water::Water(double m, int y, string n, int cP, double w, double pE, double wL, int cS)
	:Transport(m, y, n, cP, w, pE)
{
	waterLine = wL;
	countOfScrew = cS;
}

void Water::Print()
{
	Transport::Print();
	cout << "Water line: " << waterLine << endl;
	cout << "Count of screw: " << countOfScrew << endl;
}

void Water::Init()
{
	Transport::Init();
	cout << "Enter the water line: ";
	cin >> waterLine;
	cout << "Enter the count of screw: ";
	cin >> countOfScrew;
}
