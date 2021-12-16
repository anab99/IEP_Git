#include "BMW.hpp"
#include <memory>

BMW::BMW(int code, int weight, float hp, int number_doors): Car(code,weight,hp),number_doors_(number_doors)
{}


BMW::~BMW() { }


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
     Car::operator= (masina);
      number_doors_=masina.number_doors_;
  }
   else{

    std::cout<<"self assignment"<<std::endl;
  }
  return *this;
}
int ok=0;
void BMW::adaugareShowroom(Showroom* sh){
    
    std::string s = std::to_string(this->getNR());
    std::string str =sh->get();
    str=str + "," + s;
    sh->set(str); 

    }

int BMW::getNR()
{
    return number_doors_;}

void BMW::setNR(const int w)
{
 number_doors_=w;

}
