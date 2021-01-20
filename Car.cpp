#include "Car.h"

Car::Car(const Car& object)
{
	label = object.label;

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