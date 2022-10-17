#include "cycle.h"

void cycle::Init()
{
	cout << "\nName: ";
	cin >> name;
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
