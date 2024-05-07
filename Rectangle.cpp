#include "Rectangle.h"

using namespace std;

void Rectangle::setLength(float l) {
 if (l < 0) {
        
    } else {
        length = l;
    }
}

void Rectangle::setWidth(float w) {
    if(w < 0){
        
    } else{
        width = w;
    }
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::computeArea() const {
    return length * width;
}