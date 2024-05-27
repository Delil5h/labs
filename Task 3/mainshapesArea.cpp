#include<iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;

int main() {
    int option;
    while (true) {
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
        case 1: {
            Square square;
            cout << "Enter the side length of the square: ";
            float sideLength;
            cin >> sideLength;
            square.setSideLength(sideLength);
            float area = Area().calculateSquareArea(square);
            cout << "The area of the square is: " << area << endl;
            break;
        }
        case 2: {
            Triangle triangle;
            cout << "Enter the base of the triangle: ";
            float base;
            cin >> base;
            triangle.setBase(base);
            cout << "Enter the height of the triangle: ";
            float height;
            cin >> height;
            triangle.setHeight(height);
            float area = Area().calculateTriangleArea(triangle);
            cout << "The area of the triangle is: " << area << endl;
            break;
        }
        case 3: {
            Circle circle;
            cout << "Enter the radius of the circle: ";
            float radius;
            cin >> radius;
            circle.setRadius(radius);
            float area = Area().calculateCircleArea(circle);
            cout << "The area of the circle is: " << area << endl;
            break;
        }
        case 4:
            return 0;
        default:
            cout << "You have entered the wrong option. Please try again." << endl;
        }
    }
    return 0;
}
