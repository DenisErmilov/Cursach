#pragma once
#include "Car.h"

class Kia : public Car
{
private:
	bool HeatedMirrors;
public:
	Kia() : Car() { HeatedMirrors = false; }
	Kia(const Kia& object) : Car(object) { HeatedMirrors = object.HeatedMirrors; }
	~Kia() {}

	void setLabel() { label = KIA; }
	void setFeature() { HeatedMirrors = true; }

	bool getFeature() { return HeatedMirrors; }

	friend ofstream& operator<< (ofstream& in, Car& car);
	friend ifstream& operator>> (ifstream& in, Car& car);
};