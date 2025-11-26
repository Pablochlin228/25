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
	cout << "4)Enter information about tanker" << endl;
	cout << "5)Enter information about boat" << endl;
	cout << "6)Enter information about steamship" << endl;
	cout << "7)Enter information about airplane" << endl;
	cout << "8)Enter information about helicopter" << endl;
	cout << "9)Enter information about airship" << endl;
	cout << "Your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		transport = new Car;
		transport->Init();
		break;
	case 2:
		transport = new Railway;
		transport->Init();
		break;
	case 3:
		transport = new AnimalDrawn;
		transport->Init();
		break;
	case 4:
		transport = new Tanker;
		transport->Init();
		break;
	case 5:
		transport = new Boat;
		transport->Init();
		break;
	case 6:
		transport = new Steamship;
		transport->Init();
		break;
	case 7:
		transport = new Airplane;
		transport->Init();
		break;
	case 8:
		transport = new Helicopter;
		transport->Init();
		break;
	case 9:
		transport = new Airship;
		transport->Init();
		break;
	default:
		cout << "Incorrect operation!" << endl;
		break;
	}

	transport->Print();
	delete transport;
}