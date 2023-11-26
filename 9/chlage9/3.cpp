#include <iostream>
#include <algorithm> // For sorting
using namespace std;
// Function prototypes
void inputScores(int* scores, int size);
void sortScores(int* scores, int size);
double calculateAverage(const int* scores, int size);

int main() {
    int size;

    // Get the number of test scores from the user
    cout << "Enter the number of test scores: ";
    cin >> size;

    // Check for valid size
    if (size <= 0) {
        cout << "Invalid size. Exiting program." << endl;
        return 1;
    }

    // Dynamically allocate an array to hold the test scores
    int* testScores = new int[size];

    // Input test scores
    inputScores(testScores, size);

    // Sort test scores
    sortScores(testScores, size);

    // Calculate average excluding the lowest score
    double average = calculateAverage(testScores + 1, size - 1);

    // Display results
    cout << "\nAverage Score (excluding the lowest): " << average << endl;

    // Deallocate the dynamically allocated memory
    delete[] testScores;

    return 0;
}

void inputScores(int* scores, int size) {
    cout << "Enter the test scores (non-negative numbers only):" << endl;
    for (int i = 0; i < size; ++i) {
        do {
            cout << "Score " << i + 1 << ": ";
            cin >> scores[i];

            // Input validation: Do not accept negative numbers
            if (scores[i] < 0) {
                cout << "Invalid input. Please enter a non-negative number." << endl;
            }
        } while (scores[i] < 0);
    }
}

void sortScores(int* scores, int size) {
    // Use the sort function from the algorithm header
    sort(scores, scores + size);
}

double calculateAverage(const int* scores, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += scores[i];
    }
    return (size == 0) ? 0 : (sum / size);
}
