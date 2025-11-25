#pragma once
#include <iostream>
#include "Ground.h"
using namespace std;

class Car:public Ground
{
	string fuelType;
public:
	Car() {}
	Car(double m, int y, string n, int cP, double w, double pE, int wh, string rT, string fT);
	void Print();
	void Init();
};

