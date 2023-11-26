#include <iostream>
#include <cstring> // For C-string functions
using  namespace std;
// Function to reverse the case of each character in a C-string
void reverse(char* str) {
    while (*str != '\0') {
        if (isupper(*str)) {
            *str = tolower(*str);
        } else if (islower(*str)) {
            *str = toupper(*str);
        }
        ++str;
    }
}

// Function to convert each character in a C-string to lowercase
void lower(char* str) {
    while (*str != '\0') {
        *str = tolower(*str);
        ++str;
    }
}

// Function to convert each character in a C-string to uppercase
void upper(char* str) {
    while (*str != '\0') {
        *str = toupper(*str);
        ++str;
        
    }
}

int main() {
    const int maxSize = 100; // You can adjust this based on your needs
    char inputString[maxSize];

    // Ask the user to input a string
    cout << "Enter a string: ";
    cin.getline(inputString, maxSize);

    // Apply the transformations in the specified order
    reverse(inputString); // Reverse the case
    lower(inputString);   // Convert to lowercase
    upper(inputString);   // Convert to uppercase

    // Display the transformed string
    cout << "Transformed string: " << inputString << endl;

    return 0;
}
