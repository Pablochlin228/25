#pragma once
#include <iostream>
#include "Air.h"
using namespace std;

class Airship:public Air
{
	double gasVolume;
public:
	Airship() {}
	Airship(double m, int y, string n, int cP, double w, double pE, double mA, double wS, double gV);
	void Print();
	void Init();
};

