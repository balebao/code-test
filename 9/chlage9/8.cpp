#include <iostream>
#include <unordered_map>
using namespace std;
// Function to find the mode of an array
int findMode(const int* arr, int size) {
    if (size <= 0) {
        return -1; // Invalid size
    }

    // Create a hash map to store the frequency of each value
    unordered_map<int, int> frequencyMap;

    // Traverse the array and update the frequency map
    for (int i = 0; i < size; ++i) {
        frequencyMap[arr[i]]++;
    }

    // Find the mode
    int mode = -1; // Default mode if none found
    int maxFrequency = 0;

    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        if (it->second > maxFrequency) {
            maxFrequency = it->second;
            mode = it->first;
        }
    }

    return mode;
}

int main() {
    const int size = 7;
    int arr[size] = {1, 2, 3, 2, 4, 3, 3};

    int mode = findMode(arr, size);

    if (mode != -1) {
        cout << "The mode of the array is: " << mode << endl;
    } else {
        cout << "The array has no mode." << endl;
    }

    return 0;
}
