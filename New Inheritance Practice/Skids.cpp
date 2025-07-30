#include "Skids.h"
#include <string>
Skids::Skids() : Skids(45)
{

}
Skids::Skids(double mph)
{
	this->setMph(mph);
}
string Skids::Move()
{
	return "Device skids across the water at " + to_string(getMph());
}
