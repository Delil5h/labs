#include <iostream>
#pragma once
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle() = default;
    Circle(float radius) : radius(radius) {}

    float getRadius() const { return radius; }
    void setRadius(float radius) { this->radius = radius; }
};