#pragma once
#include <iostream>
using namespace std;

class Vehicles {
    public:
    Vehicles(){
        cout<<"This is a constructor"<<endl;
    };
    ~Vehicles(){
        
    };
    //member function
    void driver(){
        cout<<"Vehicle is driving"<< endl;
    }


};

