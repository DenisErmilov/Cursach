#pragma once
#include "Car.h"

class Vaz : public Car
{
private:
	bool RoofRack;
public:
	Vaz() : Car() {}
	Vaz(const Vaz& object) : Car(object) { RoofRack = object.RoofRack; }
	~Vaz() {};


};