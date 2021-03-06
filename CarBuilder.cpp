#include "CarBuilder.h"

void CarBuilder::setColor()
{
	cout << "Enter car color:           ";
	string str;
	getline(cin, str);
	Product->setColor(str);
}
void CarBuilder::setEngineType()
{
	cout << "Enter engine type:         ";
	string str;
	getline(cin, str);
	Product->setEngineType(str);
}

void CarBuilder::setEngineVolume()
{
	cout << "Enter engine volume:       ";
	string str;
	getline(cin, str);
	Product->setEngineVolume(str);
}

void CarBuilder::setDimensions()
{
	cout << "Enter vehicle dimensions:  ";
	string str;
	getline(cin, str);
	Product->setDimensions(str);
}

void CarBuilder::setYearOfIssue()
{
	cout << "Enter the year of issue:   ";
	string str;
	getline(cin, str);
	Product->setYearOfIssue(str);
}

void CarBuilder::setDoorsNumber()
{
	cout << "Enter the number of doors: ";
	string str;
	getline(cin, str);
	Product->setDoorsNumber(str);
}

void CarBuilder::setModel()
{
	cout << "Enter car model:           ";
	string str;
	getline(cin, str);
	Product->setModel(str);
}

void CarBuilder::setTireBrand()
{
	cout << "Enter your car tire brand: ";
	string str;
	getline(cin, str);
	Product->setTireBrand(str);
}

void CarBuilder::setTrunkVolume()
{
	cout << "Enter trunk volume:        ";
	string str;
	getline(cin, str);
	Product->setTrunkVolume(str);
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