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

	void writeToFile(ofstream& out);
	void readFromFile(ifstream& in);
};