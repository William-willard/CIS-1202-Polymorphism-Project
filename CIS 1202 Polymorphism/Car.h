#pragma once
#ifndef CAR_H_
#define CAR_H_

#include <iostream>

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
	int num_doors;

public:

	Car();
	Car(string m, int y, int n);

	int getDoors();
	void setDoors(int n);
	void displayInfo();
};

#endif