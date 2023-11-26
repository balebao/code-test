#include <iostream>
using namespace std;

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    // Constructor
    PayRoll() : hourlyPayRate(0.0), hoursWorked(0.0), totalPay(0.0) {}

    // Set hourly pay rate
    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }

    // Set hours worked
    void setHoursWorked(double hours) {
        hoursWorked = hours;
    }

    // Calculate total pay
    void calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
    }

    // Get total pay
    double getTotalPay() const {
        return totalPay;
    }
};

int main() {
    const int NUM_EMPLOYEES = 7;
    PayRoll employees[NUM_EMPLOYEES];

    // Get hours worked for each employee
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        double hours;
        cout << "Enter hours worked for employee " << (i + 1) << ": ";
        cin >> hours;
        employees[i].setHoursWorked(hours);
    }

    // Set hourly pay rate for each employee
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        double payRate;
        cout << "Enter hourly pay rate for employee " << (i + 1) << ": ";
        cin >> payRate;
        employees[i].setHourlyPayRate(payRate);
    }

    // Calculate and display total pay for each employee
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        employees[i].calculateTotalPay();
        cout << "Total pay for employee " << (i + 1) << ": $" << employees[i].getTotalPay() << endl;
    }

    return 0;
}
