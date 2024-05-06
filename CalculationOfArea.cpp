#include <iostream>
#include <cmath>
using namespace std;

double squareArea (double side){
    return side * side;
}

double rectangleArea (double length, double width){
    return length * width;
}

double triangleArea (double base, double height){
    return 0.5 * base * height;
    
}

int main(){
    while (true){
        cout<< "Please select the area of the shape to calculate"<< endl;
        cout << "1. Square"<< endl;
        cout <<"2. Rectangle"<< endl;
        cout <<"3. Triangle"<<endl;
        cout <<"4. Quit Progam"<<endl;
        cout <<"Enter selection:"<<endl;
        int option;
        cin>> option;

        // area of a square
        if(option == 1){
            double side;
            cout <<"Enter the side of the square:";
            cin >>side;
            double area = squareArea(side);
            cout<< "The area of the Square is "<< area<< endl;
    }
    // area of a rectangle
    else if (option == 2){
        double length, width;
        cout << "Enter the length of the rectangle:";
        cin >> length;
        cout << "Enter the width of the rectangle:";
        cin >> width;
        double area = rectangleArea(length,width);
        cout <<"The area of the rectangle is "<< area<<endl;
    }
    // area of a triangle
    else if(option == 3){
        double base,height;
        cout <<"Enter the base of the triangle:";
        cin >> base;
        cout <<"Enter the height of the triangle:";
        cin >> height;
        double area = triangleArea(base,height);
        cout << "The area of the triangle is "<<area<<endl;
    }
    else if (option == 4){
        break;
    }
    else{
        cout<<"Your input was:"<<option<<" which is an invalid input.Please enter a valid input!!!";
    }
    
}
return 0;
}