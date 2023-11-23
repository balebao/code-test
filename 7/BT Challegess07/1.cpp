#include <iostream>
using namespace std;

int main() {
    const int sizeMang = 10;
    int values[sizeMang];

    // Input 10 values from the user and store them in the array.
    //(nhập 10 giá trị từ người dùng và lưu)
    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < sizeMang; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> values[i];
    }

    // Find the largest and smallest values in the array.(tìm giá trị lớn _ nhỏ nhất)
    int largest = values[0];
    int smallest = values[0];
    for (int i = 1; i < sizeMang; i++) {
        if (values[i] > largest) {
            largest = values[i];
        }
        if (values[i] < smallest) {
            smallest = values[i];
        }
    }

    // Display the largest and smallest values.
    cout << "The largest value is: " << largest << endl;   //giá trị lớn nhất 
    cout << "The smallest value is: " << smallest << endl; // giá trị nhỏ nhất

    return 0;
}
