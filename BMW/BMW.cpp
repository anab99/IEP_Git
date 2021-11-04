#include "BMW.hpp"


BMW::BMW(int code, int weight, float hp, int number_doors): Car(code,weight,hp),number_doors_(number_doors)
{}


BMW::~BMW() { 
    std::cout << "Destruct" << std::endl; }


void BMW::afisare(){
    std::cout<<": BMW "<<std::endl;
    std::cout<<": Code:   "<<code_<<std::endl;
    std::cout<<": Weight:    "<<weight_<<std::endl;
    std::cout<<": Horsepower:    "<<hp_<<std::endl;
    std::cout<<": Number of doors:    "<<number_doors_<<std::endl;

}

BMW::BMW(const BMW &masina): Car(masina),number_doors_(masina.number_doors_){
    std::cout<<"copy constructor";
}

BMW& BMW::operator=(const BMW& masina){
  if(this!=&masina){
      (Car&)(*this)= masina;
      number_doors_=masina.number_doors_;
  }
  return *this;
}
int BMW::getNR()
{
    return number_doors_;}

void BMW::setNR(const int w)
{
 number_doors_=w;

}