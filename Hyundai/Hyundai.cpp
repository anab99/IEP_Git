
#include "Hyundai.hpp"


Hyundai::Hyundai(int code, int weight, float hp, int number_colors): Car(code,weight,hp),number_colors_(number_colors)
{}


Hyundai::~Hyundai() { 
    std::cout << "Destruct" << std::endl; }


void Hyundai::afisare(){
    std::cout<<": Hyundai ";
}

Hyundai::Hyundai(const Hyundai &masina): Car(masina),number_colors_(masina.number_colors_){
    std::cout<<"copy constructor";
}