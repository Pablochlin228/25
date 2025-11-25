#include <iostream>
#include "Transport.h"
#include "Car.h"
#include "Railway.h"
#include "AnimalDrawn.h"
#include "Tanker.h"
#include "Boat.h"
#include "Steamship.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "Airship.h"
using namespace std;

int main()
{
	Transport* transport = nullptr;

	int choice = 0;
	cout << "1)Enter information about car" << endl;
	cout << "2)Enter information about railway" << endl;
	cout << "3)Enter information about animal drawn" << endl;
	cout << "4)Enter information about shark" << endl;
	cout << "Your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		transport = new Car;
		transport->Init();
		break;
	/*case 2:
		animal = new Penguin;
		animal->Init();
		break;
	case 3:
		animal = new Parrot;
		animal->Init();
		break;
	case 4:
		animal = new Shark;
		animal->Init();
		break;*/
	default:
		cout << "Incorrect operation!" << endl;
		break;
	}

	transport->Print();
	delete transport;
}