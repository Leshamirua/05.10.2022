#pragma once
#include <iostream>
using namespace std;
class Transport
{
protected:
	char* name;
	double waste_on_100;
	double distance;
	double waste;
public:
	Transport() = default;
	Transport(char* n,double w_on_100, double dis, double waste);
	virtual void Init();
	virtual void Print();
	virtual void Waste();
	virtual ~Transport(); 
};

