#include "Car.hpp"

Car::Car(int code, int weight, float hp):
code_(code), weight_(weight), hp_(hp)
{}

Car::Car(const Car& masina): 
code_(masina.code_), weight_(masina.weight_), hp_(masina.hp_)
{}

Car::Car(Car&& masina):
code_(masina.code_), weight_(masina.weight_), hp_(masina.hp_)
{}

Car& Car::operator=(const Car& masina)
{
    if(this!=&masina)
    {
        code_=masina.code_;
        weight_=masina.weight_;
        hp_=masina.hp_;
        return *this;
    }
    return *this;
}

Car& Car::operator=(Car&& masina)
{
    if(this!=&masina)
    {
        code_=masina.code_;
        weight_=masina.weight_;
        hp_=masina.hp_;
        return *this;
    }
    return *this;
}

