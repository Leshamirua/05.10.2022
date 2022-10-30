#include "cycle.h"

void cycle::Init()
{
	char buf[20];
	cout << "Enter model --> ";
	cin >> buf;
	if (name != nullptr) {
		cout << name << "delete!";
		delete[]name;
	}
	name = new char[strlen(buf) + 1];
	strcpy_s(name, strlen(buf) + 1, buf);

	cout << "\nDistance: ";
	cin >> distance;
	cout << "\nNO FUEL, WORK WITH LEGS!!!";
}

void cycle::Print()
{
	cout << "\nName-> " << name << "\nDistance-> " << distance;
	cout << "\nNO FUEL, WORK WITH LEGS" << endl;
}

void cycle::Waste()
{
	cout << "\nNO FUEL -> NO WASTE" << endl;
}
