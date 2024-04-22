#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array with the given string elements
    string myArray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    
    for (auto & i : myArray) {
        // Check if the element starts with the letter "B"
        if (i[0] == 'B') {
            // Output the element to the console
            cout << i << endl;
        }
    }

    return 0;
}
