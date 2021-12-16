#include <iostream>
#include <cstring>
#include "Showroom.hpp"


Showroom::Showroom(std::string ad):
  continut(ad){
}

Showroom::~Showroom(){ 
 
}

Showroom::Showroom(const Showroom &obj):
  continut(obj.continut){
}

Showroom& Showroom::operator=(const Showroom& obj){
  if(this!=&obj){
    continut=obj.continut;
  }
  else{
  std::cout<<"\nSelf assignment\n"; }

  return *this; 
  
}

void Showroom::show(){
    std::cout<<"\nThis showroom contains "<<continut<<" cars\n";
}
void Showroom::set(const std::string w){ continut=w;}
std::string Showroom::get(){ return continut;}