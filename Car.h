#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

typedef enum CARTYPE
{
	VAZ = 0,
	KIA,
	NISSAN,
	TOYOTA
}CARTYPE;


class Car
{
private:
	CARTYPE CarType;

	string Color;
	string EngineType;
	string EngineVolume;
	string Dimensions;
	string YearOfIssue;
	string DoorsNumber;
	string Model;
	string TireBrand;
	string TrunkVolume;

public:
	Car() {}
	Car(const Car& object);
	~Car() {}

	CARTYPE getCarType() { return CarType; }
};

Car::Car(const Car& object)
{
	CarType = object.CarType;

	Color = object.Color;
	EngineType = object.EngineType;
	EngineVolume = object.EngineVolume;
	Dimensions = object.Dimensions;
	YearOfIssue = object.YearOfIssue;
	DoorsNumber = object.DoorsNumber;
	Model = object.Model;
	TireBrand = object.TireBrand;
	TrunkVolume = object.TrunkVolume;
}