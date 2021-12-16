#include "Lock.hpp"
#include<mutex>

std::mutex m;
int ct;

Lock::Lock(){
    m.lock();
    std::cout<<"Constructor is called"<<std::endl;
}

Lock::~Lock(){
    m.unlock();
    std::cout<<"Destructor is called"<<std::endl;
}


void testdriving(){
    Lock lock;
    ct++;
    std::cout<<"Owner no "<<ct<< "is test driving\n";
}

void done(){
    Lock lock;
    std::cout<<"The current owner is done"<<std::endl;
}
