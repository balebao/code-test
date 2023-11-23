#include <iostream>
using namespace std;

// Function to display numbers in the array greater than n
void displayNumbersGreaterThanN(int arr[], int size, int n) {
    cout << "Numbers greater than " << n << " in the array are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int sizeMang = 10;
    int numbers[sizeMang] = {10, 20, 5, 15, 30, 25, 40, 35, 50, 45};
    int n;

    cout << "Enter a number n: ";
    cin >> n;

    // Call the function to display numbers greater than n
    displayNumbersGreaterThanN(numbers, sizeMang, n);

    return 0;
}
