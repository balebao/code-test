#include <iostream>
#include <iomanip>
using namespace std;
const int NUM_BINS = 10;

struct InventoryBin {
    string description;
    int numParts;
};

// Function to display the inventory bins
void displayBins(const InventoryBin bins[], int size) {
    cout << setw(20) << "Bin Description" << setw(20) << "Number of Parts\n";
    for (int i = 0; i < size; ++i) {
        cout << setw(20) << bins[i].description << setw(20) << bins[i].numParts << "\n";
    }
}

// Function to add parts to a specific bin
void addParts(InventoryBin& bin, int numToAdd) {
    bin.numParts += numToAdd;
}

// Function to remove parts from a specific bin
void removeParts(InventoryBin& bin, int numToRemove) {
    if (bin.numParts >= numToRemove) {
        bin.numParts -= numToRemove;
    } else {
        cout << "Error: Not enough parts in the bin.\n";
    }
}

int main() {
    // Initialize the array of inventory bins
    InventoryBin bins[NUM_BINS] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12}
    };

    while (true) {
        // Display the current state of the bins
        displayBins(bins, NUM_BINS);

        // Ask the user to select a bin or quit
        cout << "\nEnter the number of the bin you want to select (1-" << NUM_BINS << "), or enter 0 to quit: ";
        int choice;
        cin >> choice;

        if (choice < 0 || choice > NUM_BINS) {
            cout << "Invalid choice. Please enter a valid option.\n";
            continue;
        }

        if (choice == 0) {
            // User chose to quit
            break;
        }

        // User selected a bin
        int index = choice - 1;

        // Ask the user if they want to add or remove parts
        cout << "1. Add parts\n2. Remove parts\nEnter your choice: ";
        int action;
        cin >> action;

        if (action == 1) {
            // User chose to add parts
            int numToAdd;
            cout << "Enter the number of parts to add: ";
            cin >> numToAdd;
            addParts(bins[index], numToAdd);
        } else if (action == 2) {
            // User chose to remove parts
            int numToRemove;
            cout << "Enter the number of parts to remove: ";
            cin >> numToRemove;
            removeParts(bins[index], numToRemove);
        } else {
            cout << "Invalid choice. Please enter 1 or 2.\n";
        }
    }

    return 0;
}
