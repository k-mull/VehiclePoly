#include "Mover.h"
#include <string>
Mover::Mover()
{
	mph = 65;
}
Mover::Mover(double mph)
{
	this->mph = mph;
}
string Mover::Move()
{
return "This mover can move forward and backward at " + to_string(getMph());
}
double Mover::getMph()
{
	return mph;
}
void Mover::setMph(double mph)
{
	this->mph = mph;
}