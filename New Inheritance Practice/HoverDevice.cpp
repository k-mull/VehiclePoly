#include "HoverDevice.h"
#include "Mover.h"
#include <string>
HoverDevice::HoverDevice() : HoverDevice(70) {

}
HoverDevice::HoverDevice(double mph)
{
	this->setMph(mph);
}
string HoverDevice::Move() {
	return "This device hovers over the ground at " + to_string(getMph());
}