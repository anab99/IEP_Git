
#include "Hyundai.hpp"


Hyundai::Hyundai(int code, int weight, float hp, int year): Car(code,weight,hp),number_colors_(number_colors)
{}


Hyundai::~Hyundai() { 
    std::cout << "Destruct" << std::endl; }


void Hyundai::afisare(){
    std::cout<<": Hyundai ";
}

Hyundai::Hyundai(const Hyundai &masina): Car(masina.code_,masina.weight_,masina.hp_), code_(code), weight_(weight), hp_(hp){
    std::cout<<"copy constructor";
}