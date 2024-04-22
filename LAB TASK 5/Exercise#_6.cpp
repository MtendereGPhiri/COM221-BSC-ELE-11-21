#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm> // for std::reverse

using namespace std;
// Function to reverse a string
void Reverse(string& str) {
    reverse(str.begin(), str.end());
}

// Function to capitalize the second letter of each word
void CapitalizeSecondLetter(string& str) {
    bool capitalizeNext = true;
    for (char& c : str) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                c = toupper(c);
                capitalizeNext = false;
            }
            else {
                capitalizeNext = true;
            }
        }
        else {
            capitalizeNext = true; // Reset for non-alphabetic characters
        }
    }
}

//void iss(string basicString) {

//}

int main() {
    // Read the text file
    ifstream inputFile("File data.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    // Read the file content into a string
    string fileData;
    string line;
    while (getline(inputFile, line)) {
        fileData += line + "\n"; // Append each line to the string
    }

    // Close the file
    inputFile.close();

    // Count vowels
    int vowels = 0;
    for (char c : fileData) {
        if (tolower(c) == 'a' || tolower(c) == 'e' ||
            tolower(c) == 'i' || tolower(c) == 'o' ||
            tolower(c) == 'u') {
            ++vowels;
        }
    }

    // Count words
    int words = 0;
     istringstream iss(fileData);
   // std::istringstream pea;
    //iss(fileData);
    while (iss >> line) {
        ++words;
    }

    // Reverse the statement
    Reverse(fileData);

    // Capitalize the second letter of each word
    CapitalizeSecondLetter(fileData);

    // Output results
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of words: " << words << endl;
    cout << "Reversed statement with capitalized second letters:\n";
    cout << fileData << endl;

    return 0;
}
