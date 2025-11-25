#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;

class Ground:public Transport
{
	int wheels;
public:
	Ground() {}
	Ground(double m, int y, string n, int cP, double w, double pE,int wh):Transport(m,y,n,cP,pE)
};

