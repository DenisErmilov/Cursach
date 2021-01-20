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

	void setColor()        { getline(cin, Color); }
	void setEngineType()   { getline(cin, EngineType); }
	void setEngineVolume() { getline(cin, EngineVolume); }
	void setDimensions()   { getline(cin, Dimensions); }
	void setYearOfIssue()  { getline(cin, YearOfIssue); }
	void setDoorsNumber()  { getline(cin, DoorsNumber); }
	void setModel()        { getline(cin, Model); }
	void setTireBrand()    { getline(cin, TireBrand); }
	void setTrunkVolume()  { getline(cin, TrunkVolume); }
};