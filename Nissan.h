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

	void setFeature() { HeatedSeats = true; }
	bool getFeature() { return HeatedSeats; }

	void writeToFile(ofstream& out);
	void readFromFile(ifstream& in);
};