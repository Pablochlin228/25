#pragma once
#include <iostream>
#include "Air.h"
using namespace std;

class Helicopter:public Air
{
	int rotorBlades;
public:
	Helicopter() {}
	Helicopter(double m, int y, string n, int cP, double w, double pE, double mA, double wS, int r);
	void Print();
	void Init();
};

