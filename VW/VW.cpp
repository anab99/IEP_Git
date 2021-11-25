
#include "VW.hpp"


VW::VW(int code, int weight, float hp, int number_doors): Car(code,weight,hp),number_doors_(number_doors)
{}


VW::~VW() { }


void VW::afisare(){
    std::cout<<": VW "<<std::endl;
    std::cout<<": Code:   "<<code_<<std::endl;
    std::cout<<": Weight:    "<<weight_<<std::endl;
    std::cout<<": Horsepower:    "<<hp_<<std::endl;
    std::cout<<": Number of doors:    "<<number_doors_<<std::endl;

}

VW::VW(const VW &masina): Car(masina),number_doors_(masina.number_doors_){
    std::cout<<"copy constructor";
}

VW& VW::operator=(const VW& masina){
  if(this!=&masina){
     Car::operator= (masina);
      number_doors_=masina.number_doors_;
  }
   else{

      std::cout<<"self assessment"<<std::endl;
  }
  return *this;
}
int VW::getNR()
{
    return number_doors_;}

void VW::setNR(const int w)
{
 number_doors_=w;

}