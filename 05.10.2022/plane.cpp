#include "plane.h"
void plane::Init()
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
