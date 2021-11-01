
#include "Ford.hpp"


Ford::Ford(code_(code), weight_(weight), hp_(hp): Car(code_,weight_,hp_)
{}


Ford::~Ford() { 
    std::cout << "Destruct" << std::endl; }


void Ford::afisare(){
    std::cout<<"\nName:  "<<name;
}

Ford::Ford(const Ford &masina): Car(masina.code_,masina.weight_,masina.hp_), code_(code), weight_(weight), hp_(hp){
    std::cout<<"copy constructor";
}