#include <iostream>
#include <cstring> // For C-string functions
#include <string>  // For string class
using  namespace std;
// Function to count the number of words in a C-string
int countWords(const char* str) {
    if (str == nullptr || *str == '\0') {
        return 0; // Empty string or null pointer
    }

    int wordCount = 1; // Initialize with 1 to account for the first word

    // Use pointer notation to iterate through the C-string
    while (*str != '\0') {
        // Increment word count when a space is encountered
        if (*str == ' ') {
            ++wordCount;
        }
        ++str;
    }

    return wordCount;
}

// Overloaded function to count the number of words in a string class object
int countWords(const string& str) {
    if (str.empty()) {
        return 0; // Empty string
    }

    int wordCount = 1; // Initialize with 1 to account for the first word

    // Use iterator to iterate through the string
    for (auto it = str.begin(); it != str.end(); ++it) {
        // Increment word count when a space is encountered
        if (*it == ' ') {
            ++wordCount;
        }
    }

    return wordCount;
}

int main() {
    const int maxSize = 100; // You can adjust this based on your needs
    char inputString[maxSize];

    // Ask the user to input a string
    cout << "Enter a string: ";
    cin.getline(inputString, maxSize);

    // Call the function to count the number of words in the C-string
    int wordCountCStr = countWords(inputString);

    // Display the result for C-string
    cout << "Number of words in the C-string: " << wordCountCStr << endl;

    // Ask the user to input a string using string
    string inputStringClass;
    cout << "Enter a string using string: ";
    getline(cin, inputStringClass);

    // Call the overloaded function to count the number of words in the string
    int wordCountStrClass = countWords(inputStringClass);

    // Display the result for string
    cout << "Number of words in the string: " << wordCountStrClass << endl;

    return 0;
}
