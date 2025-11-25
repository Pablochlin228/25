#pragma once
#include <iostream>
#include "Water.h"
using namespace std;

class Steamship:public Water
{
	double fuelCapacity;
public:
	Steamship() {}
	Steamship(double m, int y, string n, int cP, double w, double pE, double wL, int cS, double fC);
	void Print();
	void Init();
};

