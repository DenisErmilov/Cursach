#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

typedef enum LABEL
{
	VAZ = 0,
	KIA,
	NISSAN,
	TOYOTA
}LABEL;


class Car
{
protected:
	LABEL label;

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

	virtual void setFeature() = 0;
	virtual bool getFeature() = 0;
	virtual void setLabel() = 0;
	LABEL getLabel() { return label; }

	void setColor(string& str)        { Color = str; }
	void setEngineType(string& str)   { EngineType = str; }
	void setEngineVolume(string& str) { EngineVolume = str; }
	void setDimensions(string& str)   { Dimensions = str; }
	void setYearOfIssue(string& str)  { YearOfIssue = str; }
	void setDoorsNumber(string& str)  { DoorsNumber = str; }
	void setModel(string& str)        { Model = str; }
	void setTireBrand(string& str)    { TireBrand = str; }
	void setTrunkVolume(string& str)  { TrunkVolume = str; }

	string& getColor()        { return Color; }
	string& getEngineType()   { return EngineType; }
	string& getEngineVolume() { return EngineVolume; }
	string& getDimensions()	  { return Dimensions; }
	string& getYearOfIssue()  { return YearOfIssue; }
	string& getDoorsNumber()  { return DoorsNumber; }
	string& getModel()        { return Model; }
	string& getTireBrand()    { return TireBrand; }
	string& getTrunkVolume()  { return TrunkVolume; }

	virtual void writeToFile(ofstream& out) = 0;
	virtual void readFromFile(ifstream& in) = 0;
};