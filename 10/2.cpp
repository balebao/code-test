#include <iostream>
using  namespace std;
// Function to display the contents of a C-string backward
void displayBackward(const char* str) {
    if (str == nullptr) {
        cout << "Invalid C-string pointer." << endl;
        return;
    }

    // Use pointer notation to find the end of the string
    const char* endPtr = str;
    while (*endPtr != '\0') {
        ++endPtr;
    }

    // Use pointer notation to iterate backward through the string and display its contents
    while (endPtr != str) {
        --endPtr;
        cout << *endPtr;
    }

    // Display a newline at the end
    cout << endl;
}

int main() {
    const int maxSize = 100; // You can adjust this based on your needs
    char inputString[maxSize];

    // Ask the user to input a string
    cout << "Enter a string: ";
    cin.getline(inputString, maxSize);

    // Call the function to display the contents backward
    cout << "String backward: ";
    displayBackward(inputString);

    return 0;
}
