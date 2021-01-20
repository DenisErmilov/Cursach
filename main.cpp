// Создать класс «Легковая машина».
// При создании легковой машины клиент может получить : ВАЗ, Kia, Nissan, Toyota.
// Машины обладают характеристиками : цвет, тип двигателя, объем двигателя, габариты, год выпуска, число дверей, модель, марка шин, объем багажника.
// ВАЗ отличается наличием возможности установки багажника на крышу.
// Kia отличается возможностью установки подогрева зеркал заднего вида.
// Nissan отличается установкой подогрева сидений.
// Toyota отличается установкой АКПП.
// Использовать паттерн «Строитель».
// Результат создания машины и их характеристики записываются в отдельные выходные файлы «vaz», «kia», «nissan», «toyota».
// Пользователь может загрузить все данные о ранее созданных машинах из файлов.

#include "CarBuilder.h"

Car** resize(Car **car, int *size);

int main()
{
	CarBuilder builder;
	Car **vaz = nullptr;
	Car **kia = nullptr;
	Car **nissan = nullptr;
	Car **toyota = nullptr;

	ifstream infile;
	ofstream outfile;

	int size1 = 0, size2 = 0, size3 = 0, size4 = 0;
	int choise = -1;
	bool work = true;
	
	while (work)
	{
		cout << "Select menu item:" << endl;
		cout << "1) add a new VAZ car" << endl;
		cout << "2) add a new KIA car" << endl;
		cout << "3) add a new NISSAN car" << endl;
		cout << "4) add a new TOYOTA car" << endl;
		cout << "5) add a new VAZ cars from the file" << endl;
		cout << "6) add a new KIA cars from the file" << endl;
		cout << "7) add a new NISSAN cars from the file" << endl;
		cout << "8) add a new TOYOTA cars from the file" << endl;
		cout << "9) writing the result to a file" << endl;
		cout << "0) Quit program" << endl;
		cout << "-> ";
		cin >> choise;
		cin.get();
		switch (choise)
		{
		case 0:
			work = false;
			cout << "Work completed, press any button to close application" << endl;
			break;
		case 1:
			builder.createVaz();
			builder.setModel();
			builder.setColor();
			builder.setEngineType();
			builder.setEngineVolume();
			builder.setDimensions();
			builder.setDoorsNumber();
			builder.setTrunkVolume();
			builder.setTireBrand();
			builder.setYearOfIssue();
			builder.setRoofRack();

			try 
			{ 
				vaz = resize(vaz, &size1); 
				vaz[size1 - 1] = builder.getProduct(); 
				cout << "VAZ was added, press any button to continue" << endl;
			}
			catch (const char* errorMessage) 
			{ 
				cout << "Error: " << errorMessage << endl; 
				cout << "press any button to continue" << endl;
			}
			break;
		case 2:
			builder.createKia();
			builder.setModel();
			builder.setColor();
			builder.setEngineType();
			builder.setEngineVolume();
			builder.setDimensions();
			builder.setDoorsNumber();
			builder.setTrunkVolume();
			builder.setTireBrand();
			builder.setYearOfIssue();
			builder.setHeatedMirrors();

			try 
			{ 
				vaz = resize(kia, &size2); 
				kia[size2 - 1] = builder.getProduct();
				cout << "KIA was added, press any button to continue" << endl;
			}
			catch (const char* errorMessage)
			{
				cout << "Error: " << errorMessage << endl;
				cout << "press any button to continue" << endl;
			}
			break;
		case 3:
			builder.createNissan();
			builder.setModel();
			builder.setColor();
			builder.setEngineType();
			builder.setEngineVolume();
			builder.setDimensions();
			builder.setDoorsNumber();
			builder.setTrunkVolume();
			builder.setTireBrand();
			builder.setYearOfIssue();
			builder.setHeatedSeats();

			try 
			{ 
				vaz = resize(nissan, &size3); 
				nissan[size3 - 1] = builder.getProduct();
				cout << "NISSAN was added, press any button to continue" << endl;
			}
			catch (const char* errorMessage)
			{
				cout << "Error: " << errorMessage << endl;
				cout << "press any button to continue" << endl;
			}
			break;
		case 4:
			builder.createToyota();
			builder.setModel();
			builder.setColor();
			builder.setEngineType();
			builder.setEngineVolume();
			builder.setDimensions();
			builder.setDoorsNumber();
			builder.setTrunkVolume();
			builder.setTireBrand();
			builder.setYearOfIssue();
			builder.setAutoTransmission();

			try 
			{ 
				vaz = resize(toyota, &size4); 
				toyota[size4 - 1] = builder.getProduct();
				cout << "TOYOTA was added, press any button to continue" << endl;
			}
			catch (const char* errorMessage)
			{
				cout << "Error: " << errorMessage << endl;
				cout << "press any button to continue" << endl;
			}
			break;
		case 5:
			try
			{
				string path;
				cout << "Enter name of file with VAZ" << endl << "-> ";
				getline(cin, path);
				infile.open(path, ios_base::in);

				if (!infile.is_open())
					throw "Can't open file with VAZ";

				while (!infile.eof())
				{
					Car *tmp = new Vaz();
					tmp->readFromFile(infile);

					vaz = resize(vaz, &size1);
					vaz[size1 - 1] = tmp;
					tmp = nullptr;
				}

				infile.close();
				cout << "VAZ was loaded from file, press any button to continue" << endl;
			}
			catch (const char* errorMessage)
			{
				cout << "Error: " << errorMessage << endl;
				cout << "press any button to continue" << endl;
			}
			break;
		case 6:
			try
			{
				string path;
				cout << "Enter name of file with KIA" << endl << "-> ";
				getline(cin, path);
				infile.open(path, ios_base::in);

				if (!infile.is_open())
					throw "Can't open file with KIA";

				while (!infile.eof())
				{
					Car *tmp = new Kia();
					tmp->readFromFile(infile);

					vaz = resize(kia, &size2);
					kia[size2 - 1] = tmp;
					tmp = nullptr;
				}

				infile.close();
				cout << "KIA was loaded from file, press any button to continue" << endl;
			}
			catch (const char* errorMessage)
			{
				cout << "Error: " << errorMessage << endl;
				cout << "press any button to continue" << endl;
			}
			break;
		case 7:
			try
			{
				string path;
				cout << "Enter name of file with NISSAN" << endl << "-> ";
				getline(cin, path);
				infile.open(path, ios_base::in);

				if (!infile.is_open())
					throw "Can't open file with NISSAN";

				while (!infile.eof())
				{
					Car *tmp = new Nissan();
					tmp->readFromFile(infile);

					vaz = resize(nissan, &size3);
					nissan[size3 - 1] = tmp;
					tmp = nullptr;
				}

				infile.close();
				cout << "NISSAN was loaded from file, press any button to continue" << endl;
			}
			catch (const char* errorMessage)
			{
				cout << "Error: " << errorMessage << endl;
				cout << "press any button to continue" << endl;
			}
			break;
		case 8:
			try
			{
				string path;
				cout << "Enter name of file with TOYOTA" << endl << "-> ";
				getline(cin, path);
				infile.open(path, ios_base::in);

				if (!infile.is_open())
					throw "Can't open file with TOYOTA";

				while (!infile.eof())
				{
					Car *tmp = new Toyota();
					tmp->readFromFile(infile);

					vaz = resize(toyota, &size4);
					toyota[size4 - 1] = tmp;
					tmp = nullptr;
				}

				infile.close();
				cout << "TOYOTA was loaded from file, press any button to continue" << endl;
			}
			catch (const char* errorMessage)
			{
				cout << "Error: " << errorMessage << endl;
				cout << "press any button to continue" << endl;
			}
			break;
		case 9:
			if (size1 > 0)
			{
				string path;
				cout << "Enter name of file to save VAZ" << endl << "-> ";
				getline(cin, path);
				outfile.open(path, ios_base::out);
				cout << endl;

				try
				{
					if (!outfile.is_open())
						throw "Can't open file to save VAZ";

					for (int i = 0; i < size1; i++)
						vaz[i]->writeToFile(outfile);

					outfile.close();
				}
				catch (const char *errorMessage)
				{
					cout << "Error: " << errorMessage << endl;
				}
			}
			if (size2 > 0)
			{
				string path;
				cout << "Enter name of file to save KIA" << endl << "-> ";
				getline(cin, path);
				outfile.open(path, ios_base::out);
				cout << endl;

				try
				{
					if (!outfile.is_open())
						throw "Can't open file to save KIA";

					for (int i = 0; i < size2; i++)
						kia[i]->writeToFile(outfile);

					outfile.close();
				}
				catch (const char *errorMessage)
				{
					cout << "Error: " << errorMessage << endl;
				}
			}
			if (size3 > 0)
			{
				string path;
				cout << "Enter name of file to save NISSAN" << endl << "-> ";
				getline(cin, path);
				outfile.open(path, ios_base::out);
				cout << endl;

				try
				{
					if (!outfile.is_open())
						throw "Can't open file to save NISSAN";

					for (int i = 0; i < size3; i++)
						nissan[i]->writeToFile(outfile);

					outfile.close();
				}
				catch (const char *errorMessage)
				{
					cout << "Error: " << errorMessage << endl;
				}
			}
			if (size4 > 0)
			{
				string path;
				cout << "Enter name of file to save TOYOTA" << endl << "-> ";
				getline(cin, path);
				outfile.open(path, ios_base::out);
				cout << endl;

				try
				{
					if (!outfile.is_open())
						throw "Can't open file to save TOYOTA";

					for (int i = 0; i < size4; i++)
						toyota[i]->writeToFile(outfile);

					outfile.close();
				}
				catch (const char *errorMessage)
				{
					cout << "Error: " << errorMessage << endl;
				}
			}

			cout << "All cars was saved to their files, press any button to continue" << endl;
			break;
		default:
			cout << "Entered wrong menu item, press any button to continue" << endl;
			break;
		}
		

		cin.get();
		system("cls");
	}

	if (vaz != nullptr)
	{
		for (int i = 0; i < size1; i++)
			delete vaz[i];
		delete[] vaz;
	}
	if (kia != nullptr)
	{
		for (int i = 0; i < size2; i++)
			delete kia[i];
		delete[] kia;
	}
	if (nissan != nullptr)
	{
		for (int i = 0; i < size3; i++)
			delete nissan[i];
		delete[] nissan;
	}
	if (toyota != nullptr)
	{
		for (int i = 0; i < size4; i++)
			delete toyota[i];
		delete[] toyota;
	}

	return 1;
}

Car** resize(Car **car, int *size)
{
	Car **tmp = nullptr;
	tmp = new Car*[*size + 1];
	if (tmp == nullptr)
		throw "Can't allocate memory for array";

	for (int i = 0; i < *size; i++)
	{
		tmp[i] = car[i];
		car[i] = nullptr;
	}
	delete[] car;
	*size = *size + 1;

	return tmp;
}