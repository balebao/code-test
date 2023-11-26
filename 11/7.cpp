#include <iostream>
#include <string>
using namespace std;
// Define the structure for customer account data
struct CustomerAccount {
    string name;
    string address;
    string cityStateZIP;
    string telephoneNumber;
    double accountBalance;
    string dateOfLastPayment;
};

// Function to display the menu
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Enter new customer data\n";
    cout << "2. Change data for an existing customer\n";
    cout << "3. Display all customer data\n";
    cout << "4. Exit\n";
}

// Function to enter new customer data
void enterNewCustomerData(CustomerAccount& customer) {
    cin.ignore(); // Clear the input buffer

    cout << "Enter customer name: ";
    getline(cin, customer.name);

    cout << "Enter customer address: ";
    getline(cin, customer.address);

    cout << "Enter city, state, and ZIP: ";
    getline(cin, customer.cityStateZIP);

    cout << "Enter telephone number: ";
    getline(cin, customer.telephoneNumber);

    do {
        cout << "Enter account balance: $";
        cin >> customer.accountBalance;

        // Input validation: Check for negative account balance
        if (customer.accountBalance < 0) {
            cout << "Account balance cannot be negative. Please enter a valid balance.\n";
        }
    } while (customer.accountBalance < 0);

    cin.ignore(); // Clear the input buffer

    cout << "Enter date of last payment: ";
    getline(cin, customer.dateOfLastPayment);

    cout << "New customer data entered successfully.\n";
}

// Function to change data for an existing customer
void changeCustomerData(CustomerAccount& customer) {
    cin.ignore(); // Clear the input buffer

    cout << "Enter new customer name: ";
    getline(cin, customer.name);

    cout << "Enter new customer address: ";
    getline(cin, customer.address);

    cout << "Enter new city, state, and ZIP: ";
    getline(cin, customer.cityStateZIP);

    cout << "Enter new telephone number: ";
    getline(cin, customer.telephoneNumber);

    do {
        cout << "Enter new account balance: $";
        cin >> customer.accountBalance;

        // Input validation: Check for negative account balance
        if (customer.accountBalance < 0) {
            cout << "Account balance cannot be negative. Please enter a valid balance.\n";
        }
    } while (customer.accountBalance < 0);

    cin.ignore(); // Clear the input buffer

    cout << "Enter new date of last payment: ";
    getline(cin, customer.dateOfLastPayment);

    cout << "Customer data updated successfully.\n";
}

// Function to display all customer data
void displayAllCustomerData(const CustomerAccount customers[], int numCustomers) {
    cout << "\nAll Customer Data:\n";
    cout << "---------------------------------------------\n";
    cout << "Name\t\tAddress\t\tCity/State/ZIP\t\tTelephone\tAccount Balance\tLast Payment Date\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < numCustomers; ++i) {
        cout << customers[i].name << "\t"
                  << customers[i].address << "\t"
                  << customers[i].cityStateZIP << "\t"
                  << customers[i].telephoneNumber << "\t$"
                  << customers[i].accountBalance << "\t\t"
                  << customers[i].dateOfLastPayment << endl;
    }

    cout << "---------------------------------------------\n";
}

int main() {
    const int numCustomers = 10;
    CustomerAccount customerAccounts[numCustomers];

    int choice;

    do {
        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter new customer data:\n";
                enterNewCustomerData(customerAccounts[numCustomers - 1]);
                break;

            case 2:
                cout << "\nEnter customer index to change data (1-" << numCustomers << "): ";
                int indexToChange;
                cin >> indexToChange;

                if (indexToChange >= 1 && indexToChange <= numCustomers) {
                    cout << "\nEnter new data for customer " << indexToChange << ":\n";
                    changeCustomerData(customerAccounts[indexToChange - 1]);
                } else {
                    cout << "Invalid index. Please enter a valid index.\n";
                }
                break;

            case 3:
                displayAllCustomerData(customerAccounts, numCustomers);
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid choice (1-4).\n";
        }
      

    } while (choice != 4);

