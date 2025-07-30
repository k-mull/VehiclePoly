#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

class MotorCycle :
    public Vehicle
{
private:
    double engineCC;
public:
    //Constructors
    MotorCycle();
    MotorCycle(string make, string model, int year, double engineCC, Mover mover);
    MotorCycle(MotorCycle& otherMotorcycle);
    //getters and setters
    double getEngineCC()const;
    void setEngineCC(double engineCC);
    // Overloaded operators
    MotorCycle& operator=(MotorCycle& otherMotorcycle);
    friend std::ostream& operator<<(std::ostream& strm, MotorCycle& motorcycle);
    string move() override;

};
