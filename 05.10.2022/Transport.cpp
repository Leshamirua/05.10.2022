#include "Transport.h"
using namespace std;
Transport::Transport(string n, double w_on_100, double dis, double waste)
{
	name = n;
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
