#pragma once
#include "Car.h"

class Toyota : public Car
{
private:
	bool AutoTransmission;
public:
	Toyota() : Car() {}
	Toyota(const Toyota& object) : Car(object) { AutoTransmission = object.AutoTransmission; }
	~Toyota() {}


};