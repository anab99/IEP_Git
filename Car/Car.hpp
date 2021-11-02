#pragma once
#include<iostream>

class Car{


public: 
Car() = delete;
Car(int code, int weight, float hp);
virtual ~Car()=default;
Car(const Car& masina);
Car(Car&& masina);
Car& operator=(const Car& masina);
Car& operator=(Car&& masina);
virtual void afisare ()=0;

protected:
int code_;
float hp_;
int weight_;


};