#pragma once
#include <iostream>
#include "Ground.h"
using namespace std;

class Railway:public Ground
{
	int carriages;
public:
	Railway() {}
	Railway(double m, int y, string n, int cP, double w, double pE, int wh, string rT, int c);
	void Print();
	void Init();
};

