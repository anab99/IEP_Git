#include<iostream>

class Car{


public: 
Car(int code, int weight, float hp);
virtual ~Car();
Car(const Car& masina);
Car(Car&& masina);
Car& egal=(const Car&);


protected:
int code;
float hp;
int weight;


}