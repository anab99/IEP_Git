#pragma once
#include<iostream>
#include "Showroom.hpp"
class Car{


public: 
Car(int code, int weight, float hp);
virtual ~Car()=default;
Car(const Car& masina);
Car& operator=(const Car& masina);
virtual void afisare ()=0;

int getCode();
float getHP();
int getWeight();

void setCode(const int w);
void setHP(const float & h);
void setWeight(const int & s);


protected:
int code_;
float hp_;
int weight_;








};
