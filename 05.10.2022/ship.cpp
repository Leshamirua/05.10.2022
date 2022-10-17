#include "ship.h"
void ship::Init()
{
	cout << "\nName: ";
	cin >> name;
	cout << "\nWaste on 100: ";
	cin >> waste_on_100;
	cout << "\nDistance: ";
	cin >> distance;
}
void ship::Print()
{
	cout << "\nName-> " << name << "\nWaste on 100 km-> " << waste_on_100 << "\nDistance-> " << distance << "\nWaste-> " << waste<<endl;
}

void ship::Waste()
{
	waste = (waste_on_100 * distance) / 100;
	cout << "\nWaste = " << waste << " tons of ship fuel" << endl;
}
