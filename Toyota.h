#pragma once
#include "Car.h"

class Toyota : public Car
{
private:
	bool AutoTransmission;
public:
	Toyota() : Car() { AutoTransmission = false; }
	Toyota(const Toyota& object) : Car(object) { AutoTransmission = object.AutoTransmission; }
	~Toyota() {}

	void setLabel() { label = TOYOTA; }
	void setFeature() { AutoTransmission = true; }

	bool getFeature() { return AutoTransmission; }

	friend ofstream& operator<< (ofstream& in, Car& car);
	friend ifstream& operator>> (ifstream& in, Car& car);
};