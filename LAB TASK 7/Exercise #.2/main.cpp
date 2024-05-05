// Rectangle.cpp
#include "Rectangle.h"
#include <iostream>

//using namespace Rectangle;
using namespace std;


int main() {
    Rectangle ::rectangle;

    cout << "Enter the length of the rectangle: ";
    cin >> rectangle.length;

    cout << "Enter the width of the rectangle: ";
    cin >> rectangle.width;

    cout << "The area of the rectangle is: " << rectangle.calculateArea() << endl;

    return 0;
}