// main.cpp

#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    char choice;
    do {
        cout << "Options:\n"
             << "1. Calculate the area of a square\n"
             << "2. Calculate the area of a triangle\n"
             << "3. Calculate the area of a circle\n"
             << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                double area = Area::calculateArea(square);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case '2': {
                // Similar procedure for triangle
                break;
            }
            case '3': {
                // Similar procedure for circle
                break;
            }
            case '4': {
                cout << "Exiting program.\n";
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '4');

    return 0;
}
