#include "Car.h"
Car::Car()
{
	this->setMake("nissan");
	this->setModel("altima");
	this->setYear(2006);
	this->setMover(55);
	passengerCapacity = 4;
}
Car::Car(string make, string model, int year, int passengerCapacity, Mover mover)
{
	this->setMake(make);
	this->setModel(model);
	this->setYear(year);
	this->setMover(mover);
	this->passengerCapacity = passengerCapacity;
}
Car::Car(Car& otherCar)
{
	if (this != &otherCar)
	{
		this->setMake(otherCar.getMake());
		this->setModel(otherCar.getModel());
		this->setYear(otherCar.getYear());
		this->setMover(otherCar.getMover());
		this->passengerCapacity = otherCar.passengerCapacity;
	}
}
int Car::getPassengerCapacity()
{
	return passengerCapacity;
}
void Car::setPassengerCapacity(int passengerCapacity)
{
	this->passengerCapacity = passengerCapacity;
}
string Car::move() 
{
	return "This car rolls over three times, then lands right side up";
}

Car& Car::operator=(Car& otherCar)
{
	if (this != &otherCar)
	{
		this->setMake(otherCar.getMake());
		this->setModel(otherCar.getModel());
		this->setYear(otherCar.getYear());
		this->setMover(otherCar.getMover());
		this->passengerCapacity = otherCar.passengerCapacity;
	}
	return *this;
}
ostream& operator<<(ostream& strm, Car& car)
{
	strm << "This car is a " << car.getYear() << " "
		<< car.getMake() << ", " << car.getModel() << "  " << car.getMover().Move() << " " << car.move() << endl;
	return strm;
}