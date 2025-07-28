#include "MotorCycle.h"


//Constructors
MotorCycle::MotorCycle() : Vehicle() {
	engineCC = 0.0;
	this->setMake("Yamaha");
	this->setModel("Sportster");
	this->setYear(2000);
}
MotorCycle::MotorCycle(string make, string model, int year, double engineCC) {
	setMake(make);
	setModel(model);
	setYear(year);
	this->engineCC = engineCC;
}
MotorCycle::MotorCycle(MotorCycle& otherMotorcycle) {
	if (this != &otherMotorcycle) {
		this->engineCC = otherMotorcycle.engineCC;
		this->setMake(otherMotorcycle.getMake());
		this->setModel(otherMotorcycle.getModel());
		this->setYear(otherMotorcycle.getYear());
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
	}
	return *this;
}
std::ostream& operator<<(std::ostream& strm, MotorCycle& motorcycle) {
	strm << "A " << motorcycle.getYear() << " "
		<< motorcycle.getMake() << " "
		<< motorcycle.getModel() << " and has an EngineCC of " << motorcycle.getEngineCC();
	return strm;
}