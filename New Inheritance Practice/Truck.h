#ifndef TRUCK
#define TRUCK
#include "Vehicle.h"
#include<iostream>
using namespace std;
/*
cargoCapacity: double
Truck()
Truck(make: string, model: string, year:int, cargoCapacity: double)
Truck(otherTruck: Truck&)
getCargoCapacity(): double
setCargoCapacity(cargoCapacity: double): void
operator=(otherTruck: Truck&): Truck&
friend operator<<(strm: ostream&, truck: Truck&): ostream&*/

class Truck : public Vehicle
{
private:
    double cargoCapacity;
public:
    Truck();
    Truck(string make, string model, int year, double cargoCapacity, Mover mover);
    Truck(Truck& otherTruck);
    double getCargoCapacity();
    void setCargoCapacity(double cargoCapacity);
    Truck& operator=(Truck& otherTruck);
    string move() override;
    friend ostream& operator<<(ostream& strm, Truck& Truck);
};



#endif
