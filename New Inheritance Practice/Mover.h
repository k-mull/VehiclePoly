#ifndef MOVER_H
#define MOVER_H
#include <iostream>
using namespace std;
class Mover
{
private:
	double mph;
public:
	Mover();
	Mover(double mph);
	string Move();
	double getMph();
	void setMph(double mph);
};
#endif