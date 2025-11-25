#pragma once
#include <iostream>
#include "Air.h"
using namespace std;

class Airplane:public Air
{
	string wingType;
public:
	Airplane() {}
	Airplane(double m, int y, string n, int cP, double w, double pE, double mA, double wS, string wT);
	void Print();
	void Init();
};

