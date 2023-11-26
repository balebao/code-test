#include <iostream>
#include <cfloat>
using namespace std;
class FloatArray {
private:
    float* array;
    int size;

public:
    // Constructor
    FloatArray(int n) {
        size = n;
        array = new float[size];
    }

    // Destructor
    ~FloatArray() {
        delete[] array;
    }

    // Function to store a number in a specific element of the array
    void storeNumber(int index, float value) {
        if (index >= 0 && index < size) {
            array[index] = value;
        } else {
            cerr << "Index out of bounds." << endl;
        }
    }

    // Function to retrieve a number from a specific element of the array
    float retrieveNumber(int index) const {
        if (index >= 0 && index < size) {
            return array[index];
        } else {
            cerr << "Index out of bounds. Returning 0.0." << endl;
            return 0.0;
        }
    }

    // Function to return the highest value stored in the array
    float getHighestValue() const {
        float highest = FLT_MIN;
        for (int i = 0; i < size; ++i) {
            if (array[i] > highest) {
                highest = array[i];
            }
        }
        return highest;
    }

    // Function to return the lowest value stored in the array
    float getLowestValue() const {
        float lowest = FLT_MAX;
        for (int i = 0; i < size; ++i) {
            if (array[i] < lowest) {
                lowest = array[i];
            }
        }
        return lowest;
    }

    // Function to return the average of all the numbers stored in the array
    float getAverage() const {
        if (size == 0) {
            cerr << "Cannot calculate average for an empty array. Returning 0.0." << endl;
            return 0.0;
        }

        float sum = 0.0;
        for (int i = 0; i < size; ++i) {
            sum += array[i];
        }

        return sum / size;
    }
};

int main() {
    // Example usage of the FloatArray class
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    // Create an instance of the FloatArray class
    FloatArray floatArray(arraySize);

    // Store some numbers in the array
    for (int i = 0; i < arraySize; ++i) {
        float value;
        cout << "Enter value for element " << i << ": ";
        cin >> value;
        floatArray.storeNumber(i, value);
    }

    // Retrieve and display a number from the array
    int indexToRetrieve;
    cout << "Enter the index to retrieve: ";
    cin >> indexToRetrieve;
    float retrievedValue = floatArray.retrieveNumber(indexToRetrieve);
    cout << "Value at index " << indexToRetrieve << ": " << retrievedValue << endl;

    // Display highest, lowest, and average values
    cout << "Highest value: " << floatArray.getHighestValue() << endl;
    cout << "Lowest value: " << floatArray.getLowestValue() << endl;
    cout << "Average value: " << floatArray.getAverage() << endl;

    return 0;
}
