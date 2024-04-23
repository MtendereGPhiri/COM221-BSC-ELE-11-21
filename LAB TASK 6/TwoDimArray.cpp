#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns (up to 3 each): ";
    cin >> rows >> cols;

    // Validate the dimensions
    if(rows > 3 || cols > 3) {
        cout << "Dimensions exceed the maximum allowed size of 3." << std::endl;
        return 1;
    }

    // Dynamically allocate the 2D array
    double** array = new double*[rows];
    for(int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    // Assign values to the array elements
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the array values
    cout << "Array values:" << std::endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << std::endl;
    }

    // Deallocate the array
    for(int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
