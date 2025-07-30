#ifndef SKIDS_H
#define SKIDS_H
#include "Mover.h"
class Skids : public Mover
{
public:
	Skids();
	Skids(double mph);
	string Move();
};
#endif

