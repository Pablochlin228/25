#include "AnimalDrawn.h"

AnimalDrawn::AnimalDrawn(double m, int y, string n, int cP, double w, double pE, int wh, string rT, string a)
	:Ground(m, y, n, cP, w, pE, wh, rT)
{
	animalType = a;
}

void AnimalDrawn::Print()
{
	Ground::Print();
	cout << "Animal type: " << animalType << endl;
	cout << "------------------------" << endl;
}

void AnimalDrawn::Init()
{
	Ground::Init();
	cout << "Enter the animal type: ";
	cin >> animalType;
}
