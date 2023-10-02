#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
    string fileName;
    cout << "Enter the name of the file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    vector<double> numbers;
    double num;

    while (inputFile >> num) {
        numbers.push_back(num);
    }

    inputFile.close();

    if (numbers.empty()) {
        cerr << "No numbers found in the file.\n";
        return 1;
    }

    // Calculate the lowest and highest numbers
    double lowest = *min_element(numbers.begin(), numbers.end());
    double highest = *max_element(numbers.begin(), numbers.end());

    // Calculate the total and average of the numbers
    double total = accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = total / numbers.size();

    // Display the results
    cout << "Lowest number: " << lowest << endl;
    cout << "Highest number: " << highest << endl;
    cout << "Total: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    return 0;
}
