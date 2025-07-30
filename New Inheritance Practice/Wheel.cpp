#include "Wheel.h"
#include <string>
Wheel::Wheel() : Wheel(35)
{

}
Wheel::Wheel(double mph)
{
	this->setMph(mph);
}
string Wheel::Move()
{
	return "Device rolls over the groud at " + to_string(getMph());
}