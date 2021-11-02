
#include "Ford.hpp"


Ford::Ford(int code, int weight, float hp, int year): Car(code,weight,hp),year_(year)
{
}


Ford::~Ford() { 
    std::cout << "Destruct" << std::endl; }


void Ford::afisare(){
    std::cout<<": Ford "<<std::endl;
    std::cout<<": Code: "<<code_<<std::endl;
    std::cout<<": Weight: "<<weight_<<std::endl;
    std::cout<<": Horsepower: "<<hp_<<std::endl;
    std::cout<<": Year: "<<year_<<std::endl;

}

Ford::Ford(const Ford &masina): Car(masina),year_(masina.year_){
    std::cout<<"copy constructor";

}

int Ford::getYear()
{
    return year_;}

void Ford::setYear(const int w)
{
 year_=w;

}
