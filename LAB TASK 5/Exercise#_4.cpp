#include <iostream>
//#include <string>
#include <stdexcept>

using namespace std;


int main() {
    int number;
    //bool num =5;

    while (true) {

        try {
            cout << "Enter a number between 5 to 10 :" << endl;
            cin >> number;

            /*if (cin.fail()){
                cout <<"invalid";
               // throw invalid_argument("sorry you have entered and invalid input");*/
           // break;


        } catch (invalid_argument e) {
            cout << "invalid input" << e.what()<< endl;
           // cout << "Enter number only"<<endl;


        }

        if (number >= 5 && number <= 10) {
            cout << "your number (" << number << ") has been accepted" << endl;
            return 0;
        }/* else if (number <=4 || number >=11) {
            cout << "You entered " <<number;
        }*/
        else if(cin.fail()){
            cout << "invalid input. please try again"<< endl;
            cin.clear();
            cin.ignore(100,'\n');

        } /*else {
            cout << "invalid input try again" << endl;

        }*/

    }

}