#include "plane.h"
void plane::Init()
{
	cout << "\nName: ";
	cin >> name;
	cout << "\nWaste on 100: ";
	cin >> waste_on_100;
	cout << "\nDistance: ";
	cin >> distance;
}
void plane::Print()
{
	cout << "\nName-> " << name << "\nWaste on 100 km-> " << waste_on_100 << "\nDistance-> " << distance << "\nWaste-> " << waste<<endl;
}

void plane::Waste()
{
	waste = (waste_on_100 * distance) / 100;
	cout << "\nWaste = " << waste << " liters of kerosene" << endl;
}
