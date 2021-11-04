#pragma once
#include <iostream>
#include <cstring>
#include "Car.hpp"

class VW: public Car{

public: 
VW() = delete;
VW(int code, int weight, float hp, int number_doors);
virtual ~VW();
VW(const VW& masina);
VW& operator=(const VW& masina);
void afisare ();
private:
int number_doors_;
int getNR();
void setNR(const int w);
};