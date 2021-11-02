
#include "Ford.hpp"


Ford::Ford(int code, int weight, float hp, int year): Car(code,weight,hp),year_(year)
{
}


Ford::~Ford() { 
    std::cout << "Destruct" << std::endl; }


void Ford::afisare(){
    std::cout<<": Ford ";
}

Ford::Ford(const Ford &masina): Car(masina.code_,masina.weight_,masina.hp_){
    std::cout<<"copy constructor";
}