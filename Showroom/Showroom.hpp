#include <iostream>
#include <cstring>


class Showroom{
    public:
    Showroom(std::string ad);
    ~ Showroom();
    Showroom(const Showroom&); 
    Showroom& operator=(const Showroom&); 

  
    void afisare();
    void set(const std::string cuv);
    std::string get();
    private:
        std::string continut="";  
};