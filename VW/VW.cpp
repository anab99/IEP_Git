
#include "VW.hpp"


VW::VW(int code, int weight, float hp, int number_doors): Car(code,weight,hp),number_doors_(number_doors)
{}


VW::~VW() { 
    std::cout << "Destruct" << std::endl; }


void VW::afisare(){
    std::cout<<": VW "<<std::endl;
    std::cout<<": Code: "<<code_<<std::endl;
    std::cout<<": Weight: "<<weight_<<std::endl;
    std::cout<<": Horsepower: "<<hp_<<std::endl;
    std::cout<<": Number of doors: "<<number_doors_<<std::endl;

}

VW::VW(const VW &masina): Car(masina),number_doors_(masina.number_doors_){
    std::cout<<"copy constructor";
}