
#include "Hyundai.hpp"


Hyundai::Hyundai(int code, int weight, float hp, int number_colors): Car(code,weight,hp),number_colors_(number_colors)
{}


Hyundai::~Hyundai() { }


void Hyundai::afisare(){
    std::cout<<": Hyundai "<<std::endl;
    std::cout<<": Code: "<<code_<<std::endl;
    std::cout<<": Weight: "<<weight_<<std::endl;
    std::cout<<": Horsepower: "<<hp_<<std::endl;
    std::cout<<": Number of colors: "<<number_colors_<<std::endl;

}

Hyundai::Hyundai(const Hyundai &masina): Car(masina),number_colors_(masina.number_colors_){
    std::cout<<"copy constructor";
}

Hyundai& Hyundai::operator=(const Hyundai& masina){
  if(this!=&masina){
      Car::operator= (masina);
      number_colors_=masina.number_colors_;
  }
  else{

      std::cout<<"self assignment"<<std::endl;
  }
  return *this;
}
int Hyundai::getCol()
{
    return number_colors_;}

void Hyundai::setCol(const int w)
{
 number_colors_=w;

}
