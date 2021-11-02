
#include "VW.hpp"


VW::VW(int code, int weight, float hp, int year): Car(code,weight,hp),number_doors_(number_doors)
{}


VW::~VW() { 
    std::cout << "Destruct" << std::endl; }


void VW::afisare(){
    std::cout<<": VW ";
}

VW::VW(const VW &masina): Car(masina.code_,masina.weight_,masina.hp_){
    std::cout<<"copy constructor";
}