#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle(8.0, 6.5);

    float area = rectangle.computeArea();
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}