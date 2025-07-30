#include "Truck.h"
Truck::Truck() 
{
    this->setMake("Chevy");
    this->setModel("Silverado");
    this->setYear(2000);
    this->setMover(45);
    cargoCapacity = 2;
}
Truck::Truck(string make, string model, int year, double cargoCapacity, Mover mover) {
    setMake(make);
    setModel(model);
    setYear(year);
    this->cargoCapacity = cargoCapacity;
}
Truck::Truck(Truck& otherTruck) {
    if (this != &otherTruck) {
        this->cargoCapacity = otherTruck.cargoCapacity;
        this->setMake(otherTruck.getMake());
        this->setModel(otherTruck.getMake());
        this->setYear(otherTruck.getYear());
       
    }
}
string Truck::move() {
    return "Pulls a car out of a ditch ";
}
double Truck::getCargoCapacity() {
    return cargoCapacity;
}
void Truck::setCargoCapacity(double cargoCapacity) {
    this->cargoCapacity = cargoCapacity;
}
Truck& Truck::operator=(Truck& otherTruck) {
    if (this != &otherTruck) {
        this->setMake(otherTruck.getMake());
        this->setModel(otherTruck.getMake());
        this->setYear(otherTruck.getYear());
        this->cargoCapacity = otherTruck.cargoCapacity;
    }
    return *this;
}
ostream& operator<<(ostream& strm, Truck& Truck) {
    strm << "A " << Truck.getYear() << " "
        << Truck.getMake() << " "
        << Truck.getModel()
        << "With a cargo capacity of "
        << Truck.getCargoCapacity() << "  " << Truck.getMover().Move() << " " << Truck.move() << endl;
    return strm;
}