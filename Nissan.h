#pragma once
#include "Car.h"

class Nissan : public Car
{
private:
	bool HeatedSeats;
public:
	Nissan() : Car() { HeatedSeats = false; }
	Nissan(const Nissan& object) : Car(object) { HeatedSeats = object.HeatedSeats; }
	~Nissan() {}

	void setLabel() { label = NISSAN; }
	void setFeature() { HeatedSeats = true; }

	bool getFeature() { return HeatedSeats; }

	friend ofstream& operator<< (ofstream& in, Car& car);
	friend ifstream& operator>> (ifstream& in, Car& car);
};