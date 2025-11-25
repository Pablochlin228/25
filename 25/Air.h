#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;

class Air:public Transport
{
protected:
	double maxAltitude;
	double wingspan;
public:
	Air() {}
	Air(double m, int y, string n, int cP, double w, double pE, double mA, double wS);
	virtual void Print();
	virtual void Init();
};

