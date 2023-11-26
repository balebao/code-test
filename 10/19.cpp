#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using  namespace std;
// Function to convert a number to words
string convertToWords(double amount) {
    static const string units[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    static const string teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    static const string tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    string result;

    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100);

    // Convert dollars to words
    if (dollars >= 1000) {
        result += units[dollars / 1000] + " Thousand ";
        dollars %= 1000;
    }

    if (dollars >= 100) {
        result += units[dollars / 100] + " Hundred ";
        dollars %= 100;
    }

    if (dollars >= 20) {
        result += tens[dollars / 10] + " ";
        dollars %= 10;
    }

    if (dollars >= 10) {
        result += teens[dollars - 10] + " ";
    } else if (dollars > 0) {
        result += units[dollars] + " ";
    }

    // Convert cents to words
    result += "and " + to_string(cents) + " cents";

    return result;
}

int main() {
    string date, payee;
    double amount;

    // Get user input
    cout << "Enter the date: ";
    getline(cin, date);

    cout << "Enter the payee's name: ";
    getline(cin, payee);

    do {
        cout << "Enter the amount of the check (up to $10,000): ";
        cin >> amount;

        // Input validation
        if (amount < 0 || amount > 10000) {
            cout << "Invalid amount. Please enter a non-negative amount up to $10,000." << endl;
        }
    } while (amount < 0 || amount > 10000);

    // Display the simulated paycheck
    cout << "\nDate: " << date << endl;
    cout << "Pay to the Order of: " << payee << " $" << fixed << setprecision(2) << amount << endl;
    cout << convertToWords(amount) << endl;

    return 0;
}
