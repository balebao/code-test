#include <iostream>
using  namespace std;
int* allocateIntArray(int size) {
    // Dynamically allocate an array of integers
    int* newArray = new int[size];

    return newArray;
}

int main() {
    int size;

    // Get the number of elements from the user
    cout << "Enter the number of elements: ";
    cin >> size;

    // Call the array allocator function
    int* myArray = allocateIntArray(size);

    // Display the allocated array address
    cout << "Array allocated at address: " << myArray << endl;

    // Don't forget to delete the allocated memory when done
    delete[] myArray;

    return 0;
}
