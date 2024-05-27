#include <iostream>
#include "Circle.h"
using namespace std;

float Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(float radius) {
    this->radius = radius;
}