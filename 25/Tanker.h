#pragma once
#include <iostream>
#include "Water.h"
using namespace std;

class Tanker:public Water
{
	string cargoType;
public:
	Tanker() {}
	Tanker(double m, int y, string n, int cP, double w, double pE, double wL, int cS,string cT);
	void Print();
	void Init();
};

