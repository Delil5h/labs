#include <iostream>
#include "Triangle.h"

using namespace std;

float Triangle::getBase() const {
    return base;
}

float Triangle::getHeight() const {
    return height;
}

void Triangle::setBase(float base) {
    this->base = base;
}

void Triangle::setHeight(float height) {
    this->height = height;
}