#include<iostream>

enum BOOL{false,true};

int main()
{
  bool done=false;
  Car* car;
  int code;
  float hp;
  int year;
  while (1)
  {
    std::cout<<"1-Ford 2-VW 3-Hyundai 0-Quit";
    std::cin>>nr;

    switch(nr)
    {

    case 1:
    cout<<"please enter the car's code";
    cin>>code;
    cout<<"please enter the car's year";
    cin>>weight;
    cout<<"please enter the car's horsepower";
    cin>>hp;
    car = new Ford(code,weight,hp);
    break;

    case 2:
    cout<<"please enter the car's code";
    cin>>code;
    cout<<"please enter the car's year";
    cin>>weight;
    cout<<"please enter the car's horsepower";
    cin>>hp;
    car = new VW(code,weight,hp);
    break;

    case 3:
    cout<<"please enter the car's code";
    cin>>code;
    cout<<"please enter the car's year";
    cin>>weight;
    cout<<"please enter the car's horsepower";
    cin>>hp;
    car = new Hyundai(code,weight,hp);
    break;

    default: quit=true;
    break;

    }
    if (quit)
    break;
    cout<<endl;


  }
  return 0;
}
