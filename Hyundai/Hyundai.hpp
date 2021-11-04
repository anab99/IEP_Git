#pragma once
#include <iostream>
#include <cstring>
#include "Car.hpp"

class Hyundai: public Car{

public: 
Hyundai() = delete;
Hyundai(int code, int weight, float hp, int number_colors);
virtual ~Hyundai();
Hyundai(const Hyundai& masina);
Hyundai(Hyundai&& masina);
Hyundai& operator=(const Hyundai& masina);
void afisare ();
private:
int number_colors_;
int getCol();
void setCol(const int w);

};