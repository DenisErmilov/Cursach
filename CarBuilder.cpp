#include "CarBuilder.h"

void CarBuilder::setColor()
{
	cout << "Enter car color:           ";
	Product->setColor();
}
void CarBuilder::setEngineType()
{
	cout << "Enter engine type:         ";
	Product->setEngineType();
}

void CarBuilder::setEngineVolume()
{
	cout << "Enter engine volume:       ";
	Product->setEngineVolume();
}

void CarBuilder::setDimensions()
{
	cout << "Enter vehicle dimensions:  ";
	Product->setDimensions();
}

void CarBuilder::setYearOfIssue()
{
	cout << "Enter the year of issue:   ";
	Product->setYearOfIssue();
}

void CarBuilder::setDoorsNumber()
{
	cout << "Enter the number of doors: ";
	Product->setDoorsNumber();
}

void CarBuilder::setModel()
{
	cout << "Enter car model:           ";
	Product->setModel();
}

void CarBuilder::setTireBrand()
{
	cout << "Enter your car tire brand: ";
	Product->setTireBrand();
}

void CarBuilder::setTrunkVolume()
{
	cout << "Enter trunk volume:        ";
	Product->setTrunkVolume();
}

void CarBuilder::setRoofRack()
{
	string answer;

	cout << "Looking to install a roof rack?" << endl;
	cout << "Enter a word YES or NO to answer" << endl;
	while (true)
	{
		cout << "-> ";
		getline(cin, answer);

		if (answer == "YES" || answer == "Yes" || answer == "yes") { Product->setFeature(); break; }
		else if (answer == "NO" || answer == "No" || answer == "no") { break; }
		else {  cout << "Wrong word entered, re-write your answer" << endl; }
	}
}

void CarBuilder::setHeatedMirrors()
{
	string answer;

	cout << "Looking to install a heated mirrors?" << endl;
	cout << "Enter a word YES or NO to answer" << endl;
	while (true)
	{
		cout << "-> ";
		getline(cin, answer);

		if (answer == "YES" || answer == "Yes" || answer == "yes") { Product->setFeature(); break; }
		else if (answer == "NO" || answer == "No" || answer == "no") { break; }
		else { cout << "Wrong word entered, re-write your answer" << endl; }
	}
}

void CarBuilder::setHeatedSeats()
{
	string answer;

	cout << "Looking to install a heated seats?" << endl;
	cout << "Enter a word YES or NO to answer" << endl;
	while (true)
	{
		cout << "-> ";
		getline(cin, answer);

		if (answer == "YES" || answer == "Yes" || answer == "yes") { Product->setFeature(); break; }
		else if (answer == "NO" || answer == "No" || answer == "no") { break; }
		else { cout << "Wrong word entered, re-write your answer" << endl; }
	}
}

void CarBuilder::setAutoTransmission()
{
	string answer;

	cout << "Looking to install an auto transmission?" << endl;
	cout << "Enter a word YES or NO to answer" << endl;
	while (true)
	{
		cout << "-> ";
		getline(cin, answer);

		if (answer == "YES" || answer == "Yes" || answer == "yes") { Product->setFeature(); break; }
		else if (answer == "NO" || answer == "No" || answer == "no") { break; }
		else { cout << "Wrong word entered, re-write your answer" << endl; }
	}
}