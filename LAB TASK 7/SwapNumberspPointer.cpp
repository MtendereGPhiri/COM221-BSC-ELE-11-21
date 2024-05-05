#include <iostream>
using namespace std;
int swapNumbers(int &varA, int &varB);



int main() {
    int varA = 25;
    int varB = 100;

    cout << "VarA before swap: " << varA << endl;
    cout << "VarB before swap: " << varB << endl;


    swapNumbers(varA, varB);


    cout << "VarA after swap: " << varA << endl;
    cout << "VarB after swap: " << varB << endl;

    return 0;
}
int swapNumbers(int varA, int varB) {
    int* temp;
    int* VarA;
    int* VarB;

    //VarA = &varA;
    //VarB = &varB;

    //temp = &varA;
    *temp = varA;
    varA = varB;
    varB = *temp;

    return varA,varB;
};