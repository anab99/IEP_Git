#include<iostream>
#include "Ford.hpp"
#include "VW.hpp"
#include "Hyundai.hpp"
#include "string.h"
#include "BMW.hpp"
int main()
{
  bool quit=false;
  Car* car;
  Ford* ford;
  VW* vw;
  Hyundai* hyundai;
  int code;
  float hp;
  int nr;
  int weight;
  int year;
  int number_doors;
  int number_colors;
  while (1)
  { 
    std::cout<<"1-Ford 2-VW 3-Hyundai\n 4- Ford copy constructor 5 - VW copy constructor 6 - Hyundai copy constructor \n 7- Ford copy operator 8 - VW copy operator 9 - Hyundai copy operator - 0-Quit   ";
    std::cin>>nr;

    switch(nr)
    {

    case 1:{
    std::cout<<"please enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's year  ";
    std::cin>>year;
    

    car = new Ford(code,weight,hp,year);
    Car* car1= new Ford(code,weight,hp,year);
    car->setCode(201);
    car->afisare();
    car1->afisare();
    }
    break;

    case 2:{
    std::cout<<"please enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of doors"  ;
    std::cin>>number_doors;
    car = new VW(code,weight,hp,number_doors);
   
    Car* car1= new VW(code,weight,hp,number_doors);
    car->setCode(201);
    car->afisare();
    car1->afisare();
    }
    break;

    case 3:{
    std::cout<<"please enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of colors  ";
    std::cin>>number_colors;
    car = new Hyundai(code,weight,hp,number_colors);
    Car* car1= new Hyundai(code,weight,hp,number_colors);
    car->setCode(201);
    car->afisare();
    car1->afisare();
    }
    break;

    case 4:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's year  ";
    std::cin>>year;
    ford = new Ford(code,weight,hp,year);
    Ford* car1= new Ford(*ford);
    ford->setCode(201);
    ford->afisare();
    car1->afisare();
    }
    break;

    case 5:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of doors  ";
    std::cin>>number_doors;
    vw = new VW(code,weight,hp,number_doors);
    VW* car1= new VW(*vw);
    vw->setCode(201);
    vw->afisare();
    car1->afisare();
    }
    break;

    case 6:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of colors  ";
    std::cin>>number_colors;
    hyundai = new Hyundai(code,weight,hp,number_colors);
    Hyundai* car1= new Hyundai(*hyundai);
    hyundai->setCode(201);
    hyundai->afisare();
    car1->afisare();
    }
    break;

   case 7:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's year  ";
    std::cin>>year;
    Ford *car1 = new Ford(code,weight,hp,year);
    Ford* car2 = new Ford(2,3,4, 5);
    *car2=*car1;
    car1->setCode(2);
    car1->afisare();
    car2->afisare();
   }
   break;
    case 8:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of doors  ";
    std::cin>>number_doors;
   VW *car1 = new VW(code,weight,hp,number_doors);
    VW* car2 = new VW(585,454,545, 505);
    *car2=*car1;
    car1->setCode(585);
    car1->afisare();
    car2->afisare();
   }
   break;
    case 9:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of colors  ";
    std::cin>>number_colors;
    Hyundai* car1 = new Hyundai(code,weight,hp,number_colors);
    Hyundai* car2 = new Hyundai(45,65,97, 89);
    *car2=*car1;
    car1->setCode(45);
    car1->afisare();
    car2->afisare();
   }
  break;

    case 10:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of doors  ";
    std::cin>>number_doors;
    BMW* car1 = new BMW(code,weight,hp,number_doors);
    BMW* car2 = new BMW(45,65,97, 89);
    //BMW* car3= new BMW(*car1);
    //*car2=*car1;
   
   }





    default: quit=true;
    break;

    }
    if (quit)
    break;
    std::cout<<std::endl;


  }
  return 0;
}
