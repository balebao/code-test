#include <iostream>
using namespace std;
// Structure for hourly paid worker
struct HourlyPaid {
    double hoursWorked;
    double hourlyRate;
};

// Structure for salaried worker
struct Salaried {
    double salary;
    double bonus;
};

// Union with structures for both types of workers
union WorkerData {
    HourlyPaid hourlyWorker;
    Salaried salariedWorker;
};

// Function to calculate pay for hourly paid worker
double calculateHourlyPay(const HourlyPaid& worker) {
    return worker.hoursWorked * worker.hourlyRate;
}

// Function to calculate pay for salaried worker
double calculateSalariedPay(const Salaried& worker) {
    return worker.salary + worker.bonus;
}

int main() {
    // Declare a union variable
    WorkerData workerData;

    // Ask the user whether to calculate pay for an hourly paid or salaried worker
    char workerType;
    cout << "Enter 'H' for hourly paid worker or 'S' for salaried worker: ";
    cin >> workerType;

    // Get input data based on user's choice
    if (workerType == 'H' || workerType == 'h') {
        cout << "Enter hours worked: ";
        cin >> workerData.hourlyWorker.hoursWorked;

        cout << "Enter hourly rate: ";
        cin >> workerData.hourlyWorker.hourlyRate;

        // Calculate and display pay for hourly paid worker
        cout << "Hourly paid worker pay: $" << calculateHourlyPay(workerData.hourlyWorker) << endl;
    } else if (workerType == 'S' || workerType == 's') {
        cout << "Enter monthly salary: ";
        cin >> workerData.salariedWorker.salary;

        cout << "Enter bonus: ";
        cin >> workerData.salariedWorker.bonus;

        // Calculate and display pay for salaried worker
        cout << "Salaried worker pay: $" << calculateSalariedPay(workerData.salariedWorker) << endl;
    } else {
        cout << "Invalid choice. Please enter 'H' or 'S'." << endl;
    }


    return 0;
}
