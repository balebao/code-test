#include <iostream>
#include <string>
using  namespace std;
int main() {
    string userInput;

    // Ask the user to enter a series of single-digit numbers
    cout << "Enter a series of single-digit numbers with no spaces: ";
    cin >> userInput;

    int sum = 0;
    char highestDigit = '0';
    char lowestDigit = '9';

    // Iterate through the characters in the string
    for (char digit : userInput) {
        if (isdigit(digit)) {
            int numericValue = digit - '0';

            // Update the sum
            sum += numericValue;

            // Update the highest and lowest digits
            if (digit > highestDigit) {
                highestDigit = digit;
            }

            if (digit < lowestDigit) {
                lowestDigit = digit;
            }
        } else {
            // Ignore non-digit characters
            cout << "Ignoring non-digit character: " << digit << endl;
        }
    }

    // Display the results
    cout << "Sum of single-digit numbers: " << sum << endl;
    cout << "Highest digit: " << highestDigit << endl;
    cout << "Lowest digit: " << lowestDigit << endl;

    return 0;
}
