#include "Car.h"
Car::Car()
{
	this->setMake("nissan");
	this->setModel("altima");
	this->setYear(2006);
	passengerCapacity = 4;
}
Car::Car(string make, string model, int year, int passengerCapacity)
{
	this->setMake(make);
	this->setModel(model);
	this->setYear(year);
	this->passengerCapacity = passengerCapacity;
}
Car::Car(Car& otherCar)
{
	if (this != &otherCar)
	{
		this->setMake(otherCar.getMake());
		this->setModel(otherCar.getModel());
		this->setYear(otherCar.getYear());
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
Car& Car::operator=(Car& otherCar)
{
	if (this != &otherCar)
	{
		this->setMake(otherCar.getMake());
		this->setModel(otherCar.getModel());
		this->setYear(otherCar.getYear());
		this->passengerCapacity = otherCar.passengerCapacity;
	}
	return *this;
}
ostream& operator<<(ostream& strm, Car& car)
{
	strm << "This car is a " << car.getYear() << " "
		<< car.getMake() << ", " << car.getModel() << endl;
	return strm;
}