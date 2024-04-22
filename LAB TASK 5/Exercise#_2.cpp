#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(nullptr));
    int daysUntilExpiration;
    // Generate a random integer between 0 and 11
    switch (daysUntilExpiration = rand() % 12) {// Generates values from 0 to 11

        // Output messages based on the conditions
        case 0 :
            cout << "Your subscription has expired." << endl;
            break;

        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
            cout << "Your subscription expires in " << daysUntilExpiration << "days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 3:
            cout << "Your subscription expires in " << daysUntilExpiration << "days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 4:
            cout << "Your subscription expires in " << daysUntilExpiration << "days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;

        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << "days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;

        case 6: //(daysUntilExpiration <= 10);
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;

        case 7: //(daysUntilExpiration <= 10);
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 8:// (daysUntilExpiration <= 10);
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 9: //(daysUntilExpiration <= 10);
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 10: //(daysUntilExpiration <= 10);
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default :
            cout << "You have an active subscription." << endl;
    }

    return 0;
}
