#pragma once
#include <iostream>
using namespace std;

class Polygon {
protected:
    int mWidth;
    int mHeight;
public:
    void SetValues(int width, int height);
    virtual int Area() = 0;
};