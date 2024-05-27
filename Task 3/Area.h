//Area class
#include <iostream>
#pragma once
using namespace std;


class Area {
public:
    const float calculateSquareArea(const Square& square);
    const float calculateTriangleArea(const Triangle& triangle);
    const float calculateCircleArea(const Circle& circle);
};