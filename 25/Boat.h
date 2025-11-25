#pragma once
#include <iostream>
#include "Water.h"
using namespace std;

class Boat:public Water
{
	string boatType;
public:
	Boat() {}
	Boat(double m, int y, string n, int cP, double w, double pE, double wL, int cS, string b);
	void Print();
	void Init();
};

