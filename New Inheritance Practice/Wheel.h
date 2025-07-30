#ifndef WHEEL_H
#define WHEEL_H
#include "Mover.h"
class Wheel : public Mover
{
public:
	Wheel();
	Wheel(double mph);
	string Move();
};
#endif
