#include <iostream>
#include <cctype>  // For toupper
#include <cstring> // For C-string functions
#include <string>  // For string class
using  namespace std;
// Function to capitalize the first character of each sentence in a C-string
void capitalizeSentences(char* str) {
    if (str == nullptr || *str == '\0') {
        return; // Empty string or null pointer
    }

    // Capitalize the first character of the string
    *str = toupper(*str);

    // Use pointer notation to iterate through the C-string
    while (*str != '\0') {
        // Capitalize the first character after a sentence-ending punctuation (.!?)
        if (*str == '.' || *str == '!' || *str == '?') {
            ++str; // Move to the next character
            // Skip any white spaces after the punctuation
            while (*str == ' ') {
                ++str;
            }
            // Capitalize the first character of the next sentence
            if (*str != '\0') {
                *str = toupper(*str);
            }
        }
        ++str;
    }
}

// Overloaded function to capitalize the first character of each sentence in a string class object
void capitalizeSentences(string& str) {
    if (str.empty()) {
        return; // Empty string
    }

    // Capitalize the first character of the string
    str[0] = toupper(str[0]);

    // Use iterator to iterate through the string
    for (auto it = str.begin(); it != str.end(); ++it) {
        // Capitalize the first character after a sentence-ending punctuation (.!?)
        if (*it == '.' || *it == '!' || *it == '?') {
            ++it; // Move to the next character
            // Skip any white spaces after the punctuation
            while (it != str.end() && *it == ' ') {
                ++it;
            }
            // Capitalize the first character of the next sentence
            if (it != str.end()) {
                *it = toupper(*it);
            }
        }
    }
}

int main() {
    const int maxSize = 1000; // You can adjust this based on your needs
    char inputString[maxSize];

    // Ask the user to input a string
    cout << "Enter a string: ";
    cin.getline(inputString, maxSize);

    // Call the function to capitalize the first character of each sentence for the C-string
    capitalizeSentences(inputString);

    // Display the modified string for C-string
    cout << "Modified string: " << inputString << endl;

    // Ask the user to input a string using string
    string inputStringClass;
    cout << "Enter a string using string: ";
    getline(cin, inputStringClass);

    // Call the overloaded function to capitalize the first character of each sentence for the string
    capitalizeSentences(inputStringClass);

    // Display the modified string for string
    cout << "Modified string: " << inputStringClass << endl;

    return 0;
}
