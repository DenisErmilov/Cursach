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

	void setFeature() { HeatedMirrors = true; }
	bool getFeature() { return HeatedMirrors; }
	
	void writeToFile(ofstream& out);
	void readFromFile(ifstream& in);
};