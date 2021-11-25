#include "Car.hpp"

Car::Car(int code, int weight, float hp):
code_(code), weight_(weight), hp_(hp)
{}

Car::Car(const Car& masina): 
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
     else{

      std::cout<<"self assessment"<<std::endl;
  }
    return *this;
}

   
int Car::getCode(){ return code_;}
float Car::getHP(){ return hp_;}
int Car::getWeight(){return weight_;}

void Car::setCode(const int w) {
    code_=w;
}
void Car::setHP(const float & h){
    hp_=h;

}
void Car::setWeight(const int & s){
weight_=s;

}
