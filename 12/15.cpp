#include <iostream>
using namespace std;
// Define the HourlyPaid structure
struct HourlyPaid {
    double hoursWorked;
    double hourlyRate;
};

// Define the Salaried structure
struct Salaried {
    double salary;
    double bonus;
};

// Define the PayData union
union PayData {
    HourlyPaid hourlyPaidData;
    Salaried salariedData;
};

// Function to calculate pay for an hourly paid worker
double calculateHourlyPay(const HourlyPaid& hourlyData) {
    return hourlyData.hoursWorked * hourlyData.hourlyRate;
}

// Function to calculate pay for a salaried worker
double calculateSalariedPay(const Salaried& salariedData) {
    return salariedData.salary + salariedData.bonus;
}

int main() {
    // Declare a union with two members for hourly paid and salaried workers
    union Payroll {
        HourlyPaid hourlyWorker;
        Salaried salariedWorker;
    };

    // Declare a variable of the union type
    Payroll employeeData;

    // Declare a variable to store the user's choice
    char workerType;

    // Ask the user whether to calculate pay for an hourly paid or salaried worker
    cout << "Enter 'H' for hourly paid worker or 'S' for salaried worker: ";
    cin >> workerType;

    // Prompt the user for the appropriate data based on the worker type
    if (workerType == 'H' || workerType == 'h') {
        cout << "Enter hours worked: ";
        cin >> employeeData.hourlyWorker.hoursWorked;

        cout << "Enter hourly rate: $";
        cin >> employeeData.hourlyWorker.hourlyRate;

        // Calculate and display the pay for an hourly paid worker
        double hourlyPay = calculateHourlyPay(employeeData.hourlyWorker);
        cout << "Hourly paid worker's pay: $" << hourlyPay << endl;
    } else if (workerType == 'S' || workerType == 's') {
        cout << "Enter salary: $";
        cin >> employeeData.salariedWorker.salary;

        cout << "Enter bonus: $";
        cin >> employeeData.salariedWorker.bonus;

        // Calculate and display the pay for a salaried worker
        double salariedPay = calculateSalariedPay(employeeData.salariedWorker);
        cout << "Salaried worker's pay: $" << salariedPay << endl;
    } else {
        cout << "Invalid choice. Please enter 'H' or 'S'." << endl;
    }

    return 0;
}

