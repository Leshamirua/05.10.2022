#include <iostream>
#include "ship.h";
#include "automobile.h";
#include "cycle.h";
#include "plane.h";
#include "Transport.h";
using namespace std;
int main() {
	Transport* ptr = nullptr;
	cout << "1. CAR\n2. SHIP\n3.PLANE\n4.CYCLE" << endl;
	int vibor;
	cin >> vibor;
	switch (vibor)
	{
		case 1:
			ptr = new automobile;
			break;
		case 2:
			ptr = new ship;
			break;
		case 3:
			ptr = new plane;
			break;
		case 4:
			ptr = new cycle;
			break;
	}
	ptr->Init();
	ptr->Waste();
	ptr->Print();
	delete ptr;
}