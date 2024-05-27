//Square class
#pragma once

#include <iostream>
using namespace std;

class Square {
private:
    float sideLength;

public:
    Square() = default;
    Square(float sideLength) : sideLength(sideLength) {}

    float getSideLength() const { 
        return sideLength; 
        }
    void setSideLength(float sideLength) { 
        this->sideLength = sideLength; 
        }
};