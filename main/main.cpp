#include<iostream>
#include "Ford.hpp"
#include "VW.hpp"
#include "Hyundai.hpp"
#include "string.h"
#include "BMW.hpp"
#include "Lock.hpp"
#include "Owner.hpp"
#include<mutex>
#include <thread>

std::mutex m;
int ct=0;
void testdriving(){
    m.lock();
    ct++;
    std::cout<<"Owner no "<<ct<< "is test driving\n";
    m.unlock();
}

void done(){
    m.lock();
    std::cout<<"The current owner is done"<<std::endl;
    m.unlock();
}
int main()
{
  bool quit=false;
  Car* car;
  Car* m1;
  Car*m2;
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
    std::cout<<"1 - Ford 2 - VW 3 - Hyundai\n4 - Ford copy constructor 5 - VW copy constructor 6 - Hyundai copy constructor\n7 - Ford copy operator 8 - VW copy operator 9 - Hyundai copy operator\n10 - BMW (private)\n11 - Ford (self assignment)\n12 - Ford (item10) 13 - Ford (item12) 0 - Quit\n14 - Item13a 15 - Item14 16 - Item13b\nOptiunea ta:    ";
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
     Ford car1(code,weight,hp,year);

    car = new Ford(code,weight,hp,year);
    
    car->afisare();
   
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
   
    car->afisare();
  
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

    car->afisare();
  
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
    car1->afisare();
   }
  break;
    case 11:{
    std::cout<<"please enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's year  ";
    std::cin>>year;
    

    car = new Ford(code,weight,hp,year);
    Ford car1(code,weight,hp,year);
    Ford *car2=&car1;
    Ford* car3 = &car1;
    *car2=*car3;
  
   
    }
    break;
    case 12:{
    std::cout<<"please enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's year  ";
    std::cin>>year;
    car = new Ford(code,weight,hp,year);
    std::cout<<"please enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's year  ";
    std::cin>>year;
    m1 = new Ford(code,weight,hp,year);
    std::cout<<"please enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's year  ";
    std::cin>>year;
    m2 = new Ford(code,weight,hp,year);
    (car=m1)=m2;
    std::cout<<"Cazul 1 ";
    car->afisare();
    m1->afisare();
    m2->afisare();
    car=m1=m2;
    std::cout<<"Cazul 2";
    car->afisare();
    m1->afisare();
    m2->afisare();
    
   
    }
    break;
    case 13:{
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
    ford->afisare();
    car1->afisare();
    }
    break;
    case 14:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of doors  ";
    std::cin>>number_doors;
    BMW* car1 = new BMW(code,weight,hp,number_doors);
    BMW* car2 = new BMW(45,65,97, 4);
    std::shared_ptr<Showroom> sh = std::make_shared<Showroom>("7");
    printf(" se va afisa number of doors pentru fiecare masina");
    car1->adaugareShowroom(sh.get());
    sh->show();
    std::shared_ptr<Showroom> sh1(sh);
    car2->adaugareShowroom(sh1.get());
    sh->show();
    break;


    }
    case 15:{
    std::thread thread_a(testdriving);
    std::thread thread_a_done(done);
    std::thread thread_b(testdriving);
    std::thread thread_b_done(done);

    thread_a.join();
    thread_a_done.join();
    thread_b.join();
    thread_b_done.join();
   
    break;
    }

    case 16:{
    std::cout<<"\nplease enter the car's code  ";
    std::cin>>code;
    std::cout<<"please enter the car's weight  ";
    std::cin>>weight;
    std::cout<<"please enter the car's horsepower  ";
    std::cin>>hp;
    std::cout<<"please enter the car's number of doors  ";
    std::cin>>number_doors;
    BMW* car1 = new BMW(code,weight,hp,number_doors);
    BMW* car2 = new BMW(45,65,97, 4);
    Owner* ow1= new Owner("Ana");
    Owner* ow2= new Owner("Denisa");
    ow1->cumpara(car1);
    std::cout<<"\n";
    ow1->vandute(car2,ow2);
    std::cout<<"\n";
    



    break;      
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
