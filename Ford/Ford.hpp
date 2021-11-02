#pragma once
#include <iostream>
#include <cstring>
#include "Car.hpp"

class Ford: public Car{

public: 
Ford() = delete;
Ford(int code, int weight, float hp, int year);
virtual ~Ford();
Ford(const Ford& masina);
Ford(Ford&& masina);
Ford& operator=(const Ford& masina);
Ford&& operator=(Ford&& masina);
void afisare ();
private:
int year_;
};