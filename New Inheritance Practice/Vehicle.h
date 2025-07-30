#pragma once
#include <iostream>
#include "Mover.h"
using namespace std;
class Vehicle


{
private:
	string make;
	string model;
	int year;
	Mover mover;
public:
	// constructors
	Vehicle();
	Vehicle(string make, string model, int year, Mover mover);
	Vehicle(Vehicle& otherVehicle);
	Mover getMover();
	void setMover(Mover mover);
	Vehicle(Mover mover);
	string getMake();
	string getModel();
	int getYear();
	void setMake(string make);
	void setModel(string model);
	void setYear(int year);
	virtual string move() = 0;
	Vehicle& operator=(Vehicle& otherVehicle);
	friend ostream& operator<<(ostream& strm, Vehicle& vehicle);

};
