#pragma once
#include <iostream>
#include "Vehicles.h"
using namespace std;

class Car: public Vehicles{
    public:
     
    Car(){
        cout<<"This is car constructor"<<endl;
    }
    ~Car(){
        
    };
    void drive(){
        cout<<"Car is driving"<<endl;
    }

};
