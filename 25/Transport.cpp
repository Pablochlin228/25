#include "Transport.h"

Transport::Transport(double m, int y, string n, int cP, double w, double pE)
{
	maxSpeed = m;
	year = y;
	name = n;
	countOfPassengers = cP;
	weight = w;
	powerOfEngine = pE;
}

void Transport::Print()
{
	cout << "------------------------" << endl;
	cout << "Name: " << name << endl;
	cout << "Age of realise: " << year << endl;
	cout << "Max speed: " << maxSpeed << endl;
	cout << "Weight: " << weight << endl;
	cout << "Passengers: " << countOfPassengers << endl;
	cout << "Power of engine: " << powerOfEngine << endl;
	cout << "------------------------" << endl;
}

void Transport::Init()
{
	cout << "Enter the name: ";
	cin >> name;
	cout << "Enter the age of realise: ";
	cin >> year;
	cout << "Enter the max speed: ";
	cin >> maxSpeed;
	cout << "Enter the weight: ";
	cin >> weight;
	cout << "Enter the amount of passengers: ";
	cin >> countOfPassengers;
	cout << "Enter the power of engine: ";
	cin >> powerOfEngine;
}

