#include <iostream>
#include <cctype> // For character functions
using  namespace std;
bool isPasswordValid(const string& password) {
    // Check if the password is at least six characters long
    if (password.length() < 6) {
        cout << "Password should be at least six characters long." << endl;
        return false;
    }

    // Check if the password contains at least one uppercase and one lowercase letter
    bool hasUppercase = false;
    bool hasLowercase = false;

    for (char ch : password) {
        if (isupper(ch)) {
            hasUppercase = true;
        } else if (islower(ch)) {
            hasLowercase = true;
        }

        // Break the loop if both conditions are satisfied
        if (hasUppercase && hasLowercase) {
            break;
        }
    }

    if (!hasUppercase || !hasLowercase) {
        cout << "Password should contain at least one uppercase and one lowercase letter." << endl;
        return false;
    }

    // Check if the password has at least one digit
    bool hasDigit = false;

    for (char ch : password) {
        if (isdigit(ch)) {
            hasDigit = true;
            break; // Break the loop if a digit is found
        }
    }

    if (!hasDigit) {
        cout << "Password should have at least one digit." << endl;
        return false;
    }

    // If all criteria are met, the password is valid
    return true;
}

int main() {
    string userPassword;

    // Ask the user to enter a password
    cout << "Enter your password: ";
    cin >> userPassword;

    // Validate the password
    if (isPasswordValid(userPassword)) {
        cout << "Password is valid. Welcome!" << endl;
    } else {
        cout << "Password is invalid. Please follow the specified criteria." << endl;
    }

    return 0;
}
