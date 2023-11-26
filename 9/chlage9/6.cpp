#include <iostream>
using namespace std;
void getDonations(double*& donations, int& size) {
    cout << "Enter the number of donations: ";
    cin >> size;

    // Dynamically allocate an array for donations
    donations = new double[size];

    cout << "Enter the donation values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Donation " << i + 1 << ": ";
        cin >> donations[i];
    }
}

void displayDonations(const double* donations, int size) {
    cout << "Donation values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Donation " << i + 1 << ": " << donations[i] << endl;
    }
}

void deallocateDonations(double*& donations) {
    delete[] donations;
    donations = nullptr;
}

int main() {
    double* donations = nullptr;
    int size;

    // Get donations from the user
    getDonations(donations, size);

    // Display donations
    displayDonations(donations, size);

    // Deallocate dynamically allocated memory
    deallocateDonations(donations);

    return 0;
}
