#include <iostream>
#include <string>
using namespace std;
const int NUM_CUSTOMERS = 10;

// Define the Customer structure
struct Customer {
    string name;
    string address;
    double balance;
};

// Function to input data for a customer
void inputCustomerData(Customer& customer) {
    cout << "Enter data for the customer:\n";
    cout << "Name: ";
    getline(cin >> ws, customer.name);  // Allowing input with spaces
    cout << "Address: ";
    getline(cin >> ws, customer.address);  // Allowing input with spaces
    cout << "Balance: $";
    cin >> customer.balance;
}

// Function to display data for a customer
void displayCustomerData(const Customer& customer) {
    cout << "Name: " << customer.name << endl;
    cout << "Address: " << customer.address << endl;
    cout << "Balance: $" << customer.balance << endl;
    cout << "------------------------\n";
}

// Function to search for customer accounts by name
void searchAccountsByName(const Customer customers[], int numCustomers, const string& searchName) {
    bool found = false;

    cout << "\nSearch Results for Customers with Name containing \"" << searchName << "\":\n";
    for (int i = 0; i < numCustomers; ++i) {
        if (customers[i].name.find(searchName) != string::npos) {
            displayCustomerData(customers[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "No accounts found for the specified name.\n";
    }
}

int main() {
    // Create an array of Customer structures
    Customer accounts[NUM_CUSTOMERS];

    // Input data for each customer
    for (int i = 0; i < NUM_CUSTOMERS; ++i) {
        inputCustomerData(accounts[i]);
    }

    // Display data for each customer
    cout << "\nCustomer Data:\n";
    for (int i = 0; i < NUM_CUSTOMERS; ++i) {
        displayCustomerData(accounts[i]);
    }

    // Search for customer accounts by name
    string searchName;
    cout << "\nEnter part of the customer's name to search: ";
    getline(cin >> ws, searchName);  // Allowing input with spaces

    searchAccountsByName(accounts, NUM_CUSTOMERS, searchName);

    return 0;
}
