#include <iostream>
#include <algorithm> // For sorting

// Function prototypes
void inputScores(int* scores, int size);
void sortScores(int* scores, int size);
double calculateAverage(const int* scores, int size);
void displayResults(const int* scores, int size, double average);

int main() {
    int size;

    // Get the number of test scores from the user
    std::cout << "Enter the number of test scores: ";
    std::cin >> size;

    // Check for valid size
    if (size <= 0) {
        std::cout << "Invalid size. Exiting program." << std::endl;
        return 1;
    }

    // Dynamically allocate an array to hold the test scores
    int* testScores = new int[size];

    // Input test scores
    inputScores(testScores, size);

    // Sort test scores
    sortScores(testScores, size);

    // Calculate average
    double average = calculateAverage(testScores, size);

    // Display results
    displayResults(testScores, size, average);

    // Deallocate the dynamically allocated memory
    delete[] testScores;

    return 0;
}

void inputScores(int* scores, int size) {
    std::cout << "Enter the test scores (non-negative numbers only):" << std::endl;
    for (int i = 0; i < size; ++i) {
        do {
            std::cout << "Score " << i + 1 << ": ";
            std::cin >> scores[i];

            // Input validation: Do not accept negative numbers
            if (scores[i] < 0) {
                std::cout << "Invalid input. Please enter a non-negative number." << std::endl;
            }
        } while (scores[i] < 0);
    }
}

void sortScores(int* scores, int size) {
    // Use the sort function from the algorithm header
    std::sort(scores, scores + size);
}

double calculateAverage(const int* scores, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += scores[i];
    }
    return (size == 0) ? 0 : (sum / size);
}

void displayResults(const int* scores, int size, double average) {
    std::cout << "\nSorted List of Test Scores:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Score " << i + 1 << ": " << scores[i] << std::endl;
    }

    std::cout << "\nAverage Score: " << average << std::endl;
}
