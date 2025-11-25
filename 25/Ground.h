#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;

class Ground:public Transport
{
protected:
	int wheels;
	string roadType;
public:
	Ground() {}
	Ground(double m, int y, string n, int cP, double w, double pE, int wh,string rT);
	virtual void Print();
	virtual void Init();
};
