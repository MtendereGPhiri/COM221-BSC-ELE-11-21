#include <iostream>

using namespace std;

void triangle(int base, int height);

int Square(int length);

double Rectangle(int length, int width);

int main() {


    while (true) {
        cout << "please select the area of the shape to calculate\n"
             << "1.square\n 2.rectangle\n 3.triangle\n 4.quit program\n \n enter selection:";
        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "enter length :";
            int length;
            cin >> length;

            cout << "area of square :" << Square(length) << "\n \n";

        } else if (choice == 2) {
            int length;
            int width;
            cout << "enter length of the rectangle: \n";
            cin >> length;

            cout << "enter width of the rectangle:";
            cin >> width;

            Rectangle(length, width);


        } else if (choice == 3) {
            int base_length, height;
            cout << "enter base length of triangle:";// prompt user to enter the base length of the triangle
            cin >> base_length;

            cout << "enter height of thr triangle:";// prompt user to enter the base length of the triangle
            cin >> height;

            triangle(base_length, height);
        } else if (choice == 4) {
            return 0;

        } else {
            cout << "your input was :" << choice << " which is an invalid input \n"
                 << " please enter an invalid input !!!\n \n" << endl;

        }


    }


}

int Square(int length) {

    int area = length * length;
    return area;
}

double Rectangle(int length, int width) {
    int area = length * width;

    cout << "area of rectangle :" << area << "\n\n";
    return 0;
}

void triangle(int base, int height) {
    double area = 0.5 * base * height;

    cout << "area of triangle :" << area << "\n" << endl;
}
