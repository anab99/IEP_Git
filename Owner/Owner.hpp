
#include <iostream>
#include <string>
#include "Car.hpp"
using namespace std;


class Owner {
 private:
    string name;
    Car* car;
 public: Owner(string name);
 ~Owner();
 Owner(const Owner& owner);
 Owner& operator=(const Owner& owner);
 void afisare();
string getName();
void vandute(Car* m1, Owner* owner);
void cumpara(Car* m1);
  
};

