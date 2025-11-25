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
	cout << "Name: " << name << endl;
	cout << "Age of realise: " << year << endl;
	cout << "Max speed: " << maxSpeed << endl;
	cout << "Weight: " << weight << endl;
	cout << "Passengers: " << countOfPassengers << endl;
	cout << "Power of engine: " << powerOfEngine << endl;
}

