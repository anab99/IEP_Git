#include<iostream>
#include "Ford.hpp"
#include "VW.hpp"
#include "Hyundai.hpp"
#include "string.h"
int main()
{
  bool quit=false;
  Car* car;
  int code;
  float hp;
  int nr;
  int weight;
  int year;
  int number_doors;
  int number_colors;
  while (1)
  { 
    std::cout<<"1-Ford 2-VW 3-Hyundai 0-Quit";
    std::cin>>nr;

    switch(nr)
    {

    case 1:
    std::cout<<"please enter the car's code";
    std::cin>>code;
    std::cout<<"please enter the car's weight";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower";
    std::cin>>hp;
    std::cout<<"please enter the car's year";
    std::cin>>year;

    car = new Ford(code,weight,hp,year);
    break;

    case 2:
    std::cout<<"please enter the car's code";
    std::cin>>code;
    std::cout<<"please enter the car's weight";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower";
    std::cin>>hp;
    std::cout<<"please enter the car's number of doors";
    std::cin>>hp;
    car = new VW(code,weight,hp,number_doors);
    break;

    case 3:
    std::cout<<"please enter the car's code";
    std::cin>>code;
    std::cout<<"please enter the car's weight";
    std::cin>>weight;
    std::cout<<"pyearlease enter the car's horsepower";
    std::cin>>hp;
    std::cout<<"please enter the car's number of colors";
    std::cin>>hp;
    car = new Hyundai(code,weight,hp,number_colors);
    break;

    default: quit=true;
    break;

    }
    if (quit)
    break;
    std::cout<<std::endl;


  }
  return 0;
}
