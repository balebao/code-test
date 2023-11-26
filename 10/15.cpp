#include <iostream>
#include <fstream>
#include <cctype> // For isupper and islower functions
using  namespace std;
int main() {
    ifstream inputFile("text.txt");

    // Check if the file is successfully opened
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    char ch;
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    // Read each character from the file
    while (inputFile.get(ch)) {
        if (isupper(ch)) {
            uppercaseCount++;
        } else if (islower(ch)) {
            lowercaseCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        }
    }

    // Display the results
    cout << "Number of uppercase letters: " << uppercaseCount << endl;
    cout << "Number of lowercase letters: " << lowercaseCount << endl;
    cout << "Number of digits: " << digitCount << endl;

    // Close the file
    inputFile.close();

    return 0;
}
