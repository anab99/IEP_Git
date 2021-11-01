#include <iostream>
#include <cstring>
#include "Car.hpp"

class Ford: public Car{

public: 
Ford() = delete;
Ford(int code, int weight, float hp);
virtual ~Ford();
Ford(const Ford& masina);
Ford(Ford&& masina);
Ford& operator=(const Ford& masina);
Ford&& operator=(Car&& masina);
virtual void afisare ()=0;

protected:
int code_;
float hp_;
int weight_;
};