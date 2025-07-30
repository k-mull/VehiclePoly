#ifndef HOVERDEVICE_H
#define HOVERDEVICE_H
#include "Mover.h"
class HoverDevice : public Mover
{
public:
	string Move();
	HoverDevice();
	HoverDevice(double mph);
};
#endif
