#include "Vaz.h"

void Vaz::writeToFile(ofstream& out)
{
	out << endl;
	out << "Car model: " << getModel() << endl;
	out << "Car color: " << getColor() << endl;
	out << "Car engine type: " << getEngineType() << endl;
	out << "Car engine volume: " << getEngineVolume() << endl;
	out << "Car dimensions: " << getDimensions() << endl;
	out << "Car doors number: " << getDoorsNumber() << endl;
	out << "Car trunk volume: " << getTrunkVolume() << endl;
	out << "Car tire brand: " << getTireBrand() << endl;
	out << "Year of car issue: " << getYearOfIssue() << endl;
	out << "Presence of roof rack: ";
	if (RoofRack == true)
		out << "YES" << endl;
	else
		out << "NO" << endl;
}

void Vaz::readFromFile(ifstream& in)
{
	string str, tmp;
	int pos;

	in.get();
	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setModel(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setColor(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setEngineType(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setEngineVolume(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setDimensions(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setDoorsNumber(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setTrunkVolume(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setTireBrand(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	setYearOfIssue(tmp);
	str = tmp = "";

	getline(in, str);
	pos = str.find_first_of(':') + 2;
	tmp = str.substr(pos);
	if (tmp.find("YES") != string::npos)
		setFeature();
	in.get();
}