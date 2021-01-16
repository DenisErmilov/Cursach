#pragma once
#include "Car.h"

class Kia : public Car
{
private:
	bool HeatedMirrors;
public:
	Kia() : Car() {}
	Kia(const Kia& object) : Car(object) { HeatedMirrors = object.HeatedMirrors; }
	~Kia() {}


};