#pragma once
#include <iostream>
#include "Ground.h"
using namespace std;

class AnimalDrawn:public Ground
{
	string animalType;
public:
	AnimalDrawn() {}
	AnimalDrawn(double m, int y, string n, int cP, double w, double pE, int wh, string rT, string a);
	void Print();
	void Init();
};

