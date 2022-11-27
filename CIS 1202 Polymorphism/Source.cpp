#include <iostream>
#include <string>

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{

	string m;
	int y;
	int n;
	int tc;

	cout << "Vehicle Program:" << endl;
	cout << endl << "Vehicle: " << endl;

	cout << "Enter the manufacturer: ";
	getline(cin, m);

	cout << "Enter the year built: ";
	cin >> y;

	Vehicle v(m, y);
	v.displayInfo();

	cout << endl << "Car: " << endl;

	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, m);

	cout << "Enter the year built: ";
	cin >> y;

	cout << "Enter the number of doors: ";
	cin >> n;

	Car c(m, y, n);
	c.displayInfo();

	cout << endl << "Truck: " << endl;

	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, m);

	cout << "Enter the year built: ";
	cin >> y;

	cout << "Enter the towing capacity: ";
	cin >> tc;

	Truck t(m, y, tc);
	t.displayInfo();

	system("pause");
	return 0;
}