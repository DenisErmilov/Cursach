#pragma once
#include "AbstractCarBuilder.h"
#include "Vaz.h"
#include "Kia.h"
#include "Nissan.h"
#include "Toyota.h"

class CarBuilder : public AbstractCarBuilder
{
private :
	Car* Product;
public:
	CarBuilder() {}
	~CarBuilder() { if (Product != nullptr) delete Product; }

	void createVaz() { if (Product != nullptr) delete Product; Product = new Vaz(); }
	void createKia() { if (Product != nullptr) delete Product; Product = new Kia(); }
	void createNissan() { if (Product != nullptr) delete Product; Product = new Nissan(); }
	void createToyota() { if (Product != nullptr) delete Product; Product = new Toyota(); }
	Car* getProduct() { Car* Result = Product; Product = nullptr; return Result; }

	void setColor();
	void setEngineType();
	void setEngineVolume();
	void setDimensions();
	void setYearOfIssue();
	void setDoorsNumber();
	void setModel();
	void setTireBrand();
	void setTrunkVolume();
	void setRoofRack();
	void setHeatedMirrors();
	void setHeatedSeats();
	void setAutoTransmission();
};