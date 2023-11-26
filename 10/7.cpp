#include <iostream>
#include <cstring> // For C-string functions
using  namespace std;
int main() {
    const int maxSize = 100; // You can adjust this based on your needs

    char firstName[maxSize];
    char middleName[maxSize];
    char lastName[maxSize];
    char arrangedName[maxSize * 3]; // The size is set to accommodate the formatted name

    // Ask the user to input their first, middle, and last names
    cout << "Enter your first name: ";
    cin.getline(firstName, maxSize);

    cout << "Enter your middle name: ";
    cin.getline(middleName, maxSize);

    cout << "Enter your last name: ";
    cin.getline(lastName, maxSize);

    // Construct the formatted name in the fourth array
    strcpy(arrangedName, lastName);
    strcat(arrangedName, ", ");
    strcat(arrangedName, firstName);
    strcat(arrangedName, " ");
    strcat(arrangedName, middleName);

    // Display the formatted name
    cout << "Formatted name: " << arrangedName << endl;

    return 0;
}
