#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(nullptr));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = rand() % 12; // Generates values from 0 to 11

    // Output messages based on the conditions

    if (daysUntilExpiration == 0 ){
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;

    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
