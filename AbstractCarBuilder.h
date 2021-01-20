#pragma once

class AbstractCarBuilder
{
public:
	virtual void setColor() = 0;
	virtual void setEngineType() = 0;
	virtual void setEngineVolume() = 0;
	virtual void setDimensions() = 0;
	virtual void setYearOfIssue() = 0;
	virtual void setDoorsNumber() = 0;
	virtual void setModel() = 0;
	virtual void setTireBrand() = 0;
	virtual void setTrunkVolume() = 0;
};