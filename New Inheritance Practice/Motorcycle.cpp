#include "MotorCycle.h"


//Constructors
MotorCycle::MotorCycle() : Vehicle() {
	engineCC = 0.0;
	this->setMake("Yamaha");
	this->setModel("Sportster");
	this->setYear(2000);
	this->setMover(15);
}
MotorCycle::MotorCycle(string make, string model, int year, double engineCC, Mover mover) {
	setMake(make);
	setModel(model);
	setYear(year);
	setMover(mover);
	this->engineCC = engineCC;
}
MotorCycle::MotorCycle(MotorCycle& otherMotorcycle) {
	if (this != &otherMotorcycle) {
		this->engineCC = otherMotorcycle.engineCC;
		this->setMake(otherMotorcycle.getMake());
		this->setModel(otherMotorcycle.getModel());
		this->setYear(otherMotorcycle.getYear());
		this->setMover(otherMotorcycle.getMover());
	}
}
//getters and setters
double MotorCycle::getEngineCC()const {
	return engineCC;
}
void MotorCycle::setEngineCC(double engineCC) {
	this->engineCC = engineCC;
}
// Overloaded operators
MotorCycle& MotorCycle::operator=(MotorCycle& otherMotorcycle) {
	if (this != &otherMotorcycle) {
		this->engineCC = otherMotorcycle.engineCC;
		this->setMake(otherMotorcycle.getMake());
		this->setModel(otherMotorcycle.getModel());
		this->setYear(otherMotorcycle.getYear());
		this->setMover(otherMotorcycle.getMover());
	}
	return *this;
}
string MotorCycle::move()
{
	return "Does a wheelie then lands perfectly.";
}
std::ostream& operator<<(std::ostream& strm, MotorCycle& motorcycle) {
	strm << "A " << motorcycle.getYear() << " "
		<< motorcycle.getMake() << " "
		<< motorcycle.getModel() << " and has an EngineCC of " << motorcycle.getEngineCC() << "  "
		<< motorcycle.getMover().Move() <<  " " << motorcycle.move() << endl;
	return strm;
}