#include "Rocket.h"

#include <string>
Rocket::Rocket() : Rocket(52)
{

}
Rocket::Rocket(double mph)
{
	this->setMph(mph);
}
string Rocket::Move()
{
	return "Device shoots through the air at " + to_string(getMph());
}