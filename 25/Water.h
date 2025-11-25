#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;

class Water: public Transport
{
protected:
	double waterLine;
	int countOfScrew;
public:
	Water() {}
	Water(double m, int y, string n, int cP, double w, double pE, double wL, int cS);
	virtual void Print();
	virtual void Init();
};

