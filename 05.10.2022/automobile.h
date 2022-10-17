#pragma once
#include "Transport.h"
class automobile :
	public Transport
{
public:
	automobile() = default;
	automobile(string n, double w_on_100, double dis, double waste) :Transport(n, w_on_100, dis, waste) {};
	virtual void Init();
	virtual void Print();
	virtual void Waste();
};

