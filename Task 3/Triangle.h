#pragma once
#include <iostream>
using namespace std;

class Triangle {
private:
    float base;
    float height;

public:
    Triangle() = default;
    Triangle(float base, float height) : base(base), height(height) {}

    float getBase() const { 
        return base;
         }
    float getHeight() const { 
        return height; 
        }
    void setBase(float base) { 
        this->base = base; 
        }
    void setHeight(float height) { 
        this->height = height; 
        }
};