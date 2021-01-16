#pragma once
#include "Car.h"

class Nissan : public Car
{
private:
	bool HeatedSeats;
public:
	Nissan() : Car() {}
	Nissan(const Nissan& object) : Car(object) { HeatedSeats = object.HeatedSeats; }
	~Nissan() {}


};