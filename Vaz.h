#pragma once
#include "Car.h"

class Vaz : public Car
{
private:
	bool RoofRack;
public:
	Vaz() : Car() { RoofRack = false; }
	Vaz(const Vaz& object) : Car(object) { RoofRack = object.RoofRack; }
	~Vaz() {};

	void setLabel() { label = VAZ; }
	void setFeature() { RoofRack = true; }

	bool getFeature() { return RoofRack; }

	friend ofstream& operator<< (ofstream& in, Car& car);
	friend ifstream& operator>> (ifstream& in, Car& car);
};