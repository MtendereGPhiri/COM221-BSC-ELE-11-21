#include <iostream>
#include <stdexcept>

using namespace std;


int main() {
    int number;

    while (true) {

        try {
            cout << "Enter an integer value between 5 to 10 :" << endl;
            cin >> number;

        } catch (invalid_argument e) {
            cout << "invalid input" << e.what() << endl;
        }

        if (number != 0 && number <= 4) {
            cout << " you entered " << number << ". Please enter a number between 5 and 10" << endl;
        } else if (number >= 5 && number <= 10) {
            cout << "your input value (" << number << ") has been accepted" << endl;
            return 0;
        } else if (cin.fail()) {
            cout << "sorry, you entered an invalid number, please try again" << endl;
            cin.clear();
            cin.ignore(100, '\n');

        }

    }

}