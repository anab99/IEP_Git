#include "Owner.hpp"
#include <mutex>
#include <memory>


Owner::Owner(string name)
{ this -> name = name;   
}
Owner::~Owner() { 
std::cout << "Destructor" << std::endl;

}

 Owner::Owner(const Owner& owner) 
 {
    std::cout << "Copy constructor" << std::endl;
    name = owner.name;
 }

Owner& Owner::operator=(const Owner& owner){
  if(this!=&owner){
      Owner::operator= (owner);
      name=owner.name;
  }
  else{

      std::cout<<"self assignment"<<std::endl;
  }
  return *this;
}


void Owner::afisare(){
    std::cout<<"Owner: "<<name<<std::endl;

}
string Owner::getName() { return name; }

void Owner::cumpara(Car* m1){
    std::unique_ptr<Car> cars(m1);
    std::cout << this->name << " a cumparat masina cu codul" <<m1->getCode()<< std::endl;
}

void Owner::vandute(Car* m1, Owner* owner){
    std::unique_ptr<Car> cars(m1);
    std::cout<<this->name<< " a cumparat masina cu codul "<<m1->getCode()<<std::endl;
    std::unique_ptr<Car> m2 = std::move(cars);
    std::cout<<this->name<< " a fost cumparata de "<<owner->getName()<<std::endl;
    std::cout<<owner->getName()<<" a cumparat masina cu codul "<<m2.get()->getCode()<<std::endl;
}
