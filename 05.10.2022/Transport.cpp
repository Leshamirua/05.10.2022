#include "Transport.h"
using namespace std;
Transport::Transport(char* n, double w_on_100, double dis, double waste)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	waste_on_100 = w_on_100;
	distance = dis;
	this->waste = waste;
}

void Transport::Init()
{
	cout << "nothing";
}

void Transport::Print()
{
	cout << "nothing";
}

void Transport::Waste()
{
	cout << "nothing";
}

Transport::~Transport()
{
	delete[] name; 
	cout << "des";
}
