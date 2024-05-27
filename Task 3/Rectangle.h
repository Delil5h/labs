#pragma once
#include <iostream>
using namespace std;

//creating rectangle class  

class Rectangle {
    private:
        float length;
        float width;

    public:
        Rectangle(float l = 0, float w = 0) {
            setLength(l);
            setWidth(w);
        }

        void setLength(float l);
        void setWidth(float w);

        float getLength() const;
        float getWidth() const;

        float computeArea() const;
};

