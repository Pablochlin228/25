#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	double maxSpeed;
	int year;
	string name;
	int countOfPassengers;
	double weight;
	double powerOfEngine;
public:
	Transport() {}
	Transport(double m, int y, string n, int cP, double w, double pE);
	void Print();
};

