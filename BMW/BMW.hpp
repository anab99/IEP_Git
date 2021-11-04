#pragma once
#include <iostream>
#include <cstring>
#include "Car.hpp"

class BMW: public Car{

public: 

BMW(int code, int weight, float hp, int number_doors);
virtual ~BMW();

void afisare ();
private:
BMW(const BMW& masina);
BMW& operator=(const BMW& masina);
int number_doors_;
public:
int getNR();
void setNR(const int w);
};