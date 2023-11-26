#include <iostream>
#include <algorithm> // For sorting
using namespace std;
// Function prototypes
void inputNameAndScores(string* names, int* scores, int size);
void sortNameAndScores(string* names, int* scores, int size);
void displayResults(const string* names, const int* scores, int size);

int main() {
    int size;

    // Get the number of students from the user
    cout << "Enter the number of students: ";
    cin >> size;

    // Check for valid size
    if (size <= 0) {
        cout << "Invalid size. Exiting program." << endl;
        return 1;
    }

    // Dynamically allocate arrays to hold student names and scores
    string* studentNames = new string[size];
    int* studentScores = new int[size];

    // Input student names and scores
    inputNameAndScores(studentNames, studentScores, size);

    // Sort student names and scores
    sortNameAndScores(studentNames, studentScores, size);

    // Display results
    displayResults(studentNames, studentScores, size);

    // Deallocate the dynamically allocated memory
    delete[] studentNames;
    delete[] studentScores;

    return 0;
}

void inputNameAndScores(string* names, int* scores, int size) {
    cout << "Enter name-score pairs for each student:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Student " << i + 1 << " Name: ";
        cin >> names[i];

        do {
            cout << "Student " << i + 1 << " Score: ";
            cin >> scores[i];

            // Input validation: Do not accept negative numbers
            if (scores[i] < 0) {
                cout << "Invalid input. Please enter a non-negative number." << endl;
            }
        } while (scores[i] < 0);
    }
}

void sortNameAndScores(string* names, int* scores, int size) {
    // Use the sort function from the algorithm header
    // Sort based on scores, and rearrange names accordingly
    sort(scores, scores + size);
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (scores[i] == scores[j]) {
                swap(names[i], names[j]);
            }
        }
    }
}

void displayResults(const string* names, const int* scores, int size) {
    cout << "\nSorted List of Scores with Names:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Student Name: " << names[i] << ", Score: " << scores[i] << endl;
    }
}
