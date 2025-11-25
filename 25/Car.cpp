#include "Car.h"

Car::Car(double m, int y, string n, int cP, double w, double pE, int wh, string rT, string fT)
	:Ground(m,y,n,cP,w,pE,wh,rT)
{
	fuelType = fT;
}

void Car::Print()
{
	Ground::Print();
	cout << "Fuel type: " << fuelType << endl;
	cout << "------------------------" << endl;
}

void Car::Init()
{
	Ground::Init();
	cout << "Enter the fuel type: ";
	cin >> fuelType;
}
